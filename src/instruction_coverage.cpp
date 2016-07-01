/*
 * Copyright (C) 2016 Sensative AB
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#include <iostream>
#include <map>
#include <set>
#include <stdexcept>

#include "alu.hpp"
#include "instruction_coverage.hpp"
#include "symbol_table.hpp"

static InstructionCoverage instructionCoverage;

BasicBlock::BasicBlock(int n, std::uint16_t address) : number(n), firstAddress(address), lastAddress(address)
{
}

InstructionCoverage* InstructionCoverage::GetInstance()
{
  return &instructionCoverage;
}

void InstructionCoverage::Initialize(Alu &alu)
{
  std::set<std::pair<BasicBlock*, std::uint16_t>> waiting;

  basicBlockCount = 0;
  basicBlocks.erase(basicBlocks.begin(), basicBlocks.end());
  reachable.erase(reachable.begin(), reachable.end());
  executionCount.erase(executionCount.begin(), executionCount.end());
  for (std::uint16_t vector : {0x0, 0x3, 0xb, 0x13, 0x1b, 0x23, 0x2b})
  {
    // Let's assume an unused interrupt vector entry is zeroed out.
    if (alu.flash.Read(vector) || alu.flash.Read(vector+1))
    {
      BasicBlock *currentBlock = new BasicBlock(++basicBlockCount, vector);
      basicBlocks[currentBlock->number] = currentBlock;
      reachable[vector] = currentBlock->number;
      waiting.insert(std::make_pair(currentBlock, vector));
    }
  }

  while (!waiting.empty())
  {
    while (!waiting.empty())
    {
      std::set<std::pair<BasicBlock*, std::uint16_t>>::iterator elt = waiting.begin(); // Pick an arbitrary element
      std::uint16_t address = elt->second;
      BasicBlock *currentBlock = elt->first;
      waiting.erase(elt);
      if (address >= alu.flash.GetSize())
      {
        continue;
      }

      bool isJump = false;
      bool isVisited = false;
      while (!isJump && !isVisited)
      {
        if (alu.IsJump(address))
        {
          isJump = true;
        }
        else
        {
          std::set<uint16_t> nextAddresses = alu.GetNextAddresses(address);
          address = *(nextAddresses.begin());

          if (reachable[address])
          {
            isVisited = true;
          }
          else
          {
            reachable[address] = currentBlock->number;
            currentBlock->lastAddress = address;
            address = *(nextAddresses.begin());
          }
        }
      }

      if (isJump)
      {
        std::set<uint16_t> nextAddresses = alu.GetNextAddresses(address);

        for (std::set<std::uint16_t>::iterator i = nextAddresses.begin(); i != nextAddresses.end(); i++)
        {
          // Already visited -> if instruction is not first address in basic block, split it
          if (reachable[*i])
          {
            BasicBlock *referencedBlock = basicBlocks[reachable[*i]];
            if (*i == referencedBlock->firstAddress)
            {
              continue;
            }

            // New block starts with referenced address
            // Original block is shortened
            BasicBlock *newBlock = new BasicBlock(++basicBlockCount, *i);

            for (int addr = *i; addr <= referencedBlock->lastAddress; addr++)
            {
              if (reachable[addr] == referencedBlock->number)
              {
                reachable[addr] = newBlock->number;
              }
            }
            basicBlocks[newBlock->number] = newBlock;
            newBlock->lastAddress = referencedBlock->lastAddress;

            referencedBlock->lastAddress = *i - 1;
            newBlock->outEdges = referencedBlock->outEdges;
            referencedBlock->outEdges.erase(referencedBlock->outEdges.begin(), referencedBlock->outEdges.end());
            newBlock->inEdges.insert(referencedBlock->number);
            referencedBlock->outEdges.insert(newBlock->number);
          }
          else
          {
            BasicBlock *newBlock = new BasicBlock(++basicBlockCount, *i);
            reachable[*i] = newBlock->number;

            basicBlocks[newBlock->number] = newBlock;
            currentBlock->outEdges.insert(newBlock->number);
            newBlock->inEdges.insert(currentBlock->number);
            waiting.insert(std::make_pair(newBlock, *i));
          }
        }
      }
      else if (isVisited)
      {
        BasicBlock *referencedBlock = basicBlocks[reachable[address]];
        currentBlock->outEdges.insert(referencedBlock->number);
        referencedBlock->inEdges.insert(currentBlock->number);
      }
    }

    for (std::map<int,BasicBlock*>::iterator it = basicBlocks.begin(); it != basicBlocks.end(); it++)
    {
      BasicBlock *block = it->second;
      std::uint16_t addr = block->firstAddress;
      bool foundIndirectJump = false;
      while (addr <= block->lastAddress)
      {
        if (alu.flash.Read(addr) == 0x73)
        {
          foundIndirectJump = true;
        }      
        if (alu.IsJump(addr))
          break;
        std::set<std::uint16_t> next = alu.GetNextAddresses(addr);
        addr = *(next.begin());
      }
      if (foundIndirectJump)
      {
        BasicBlock *refBlock;
        for (std::set<int>::iterator i = block->inEdges.begin(); i != block->inEdges.end(); i++)
        {
          refBlock = basicBlocks[*i];
        }
        // Calculate exit constraints of referencing block
        std::uint16_t addr = refBlock->firstAddress;
        RegisterConstraints c;
        while (addr <= refBlock->lastAddress)
        {
          alu.UpdateConstraints(c, addr, block->firstAddress);
          std::set<std::uint16_t> next = alu.GetNextAddresses(addr);
          addr = *(next.begin());
        }

        // Using entry constraints to block using indirect jump, calculate constraints at call site
        addr = block->firstAddress;
        while (addr <= block->lastAddress)
        {
          if (alu.IsJump(addr))
          {
            break;
          }
          alu.UpdateConstraints(c, addr, block->firstAddress);
          std::set<std::uint16_t> next = alu.GetNextAddresses(addr);
          addr = *(next.begin());
        }

        if (c.dpl.type == ConstraintType::Memory && c.dph.type == ConstraintType::Memory)
        {
          // Add the switch labels as destinations (if not already visited)
          for (int i = c.dpl.low; i <= c.dpl.high; i++)
          {
            addr = alu.flash.Read(i) + alu.flash.Read(c.dph.low + i - c.dpl.low) * 256;

            if (reachable[addr])
            {
              continue;
            }

            BasicBlock *newBlock = new BasicBlock(++basicBlockCount, addr);
            reachable[addr] = newBlock->number;
            basicBlocks[newBlock->number] = newBlock;
            block->outEdges.insert(newBlock->number);
            newBlock->inEdges.insert(block->number);
            waiting.insert(std::make_pair(newBlock, addr));
          }
        }
      }
    }
  }
}

void InstructionCoverage::GetCoverage(int &totalInstructions, int &executedInstructions)
{
  totalInstructions = 0;
  executedInstructions = 0;

  for (int i = 0; i < 65536; i++)
  {
    if (reachable[i])
    {
      totalInstructions++;
    }
    if (executionCount[i])
    {
      executedInstructions++;
    }
  }
}

void InstructionCoverage::InstructionExecuted(std::uint16_t address)
{
  executionCount[address]++;
}
