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

BasicBlock::BasicBlock(int n, std::uint16_t address) : number(n), firstAddress(address), lastAddress(0)
{
}

InstructionCoverage* InstructionCoverage::GetInstance()
{
  return &instructionCoverage;
}

void InstructionCoverage::Initialize(Alu &alu)
{
  std::set<std::pair<BasicBlock*, std::uint16_t> > waiting;

  basicBlockCount = 0;
  basicBlocks.erase(basicBlocks.begin(), basicBlocks.end());
  reachable.erase(reachable.begin(), reachable.end());
  executionCount.erase(executionCount.begin(), executionCount.end());
  for (std::uint16_t vector : {0x0, 0x3, 0xb, 0x13, 0x1b, 0x23, 0x2b})
  {
    // Let's assume an unused interrupt vector entry is zeroed out.
    if (alu.flash.Read(vector) || alu.flash.Read(vector+1))
    {
      int n = basicBlockCount++;
      BasicBlock *b = new BasicBlock(n, vector);
      basicBlocks[n] = b;
      waiting.insert(std::make_pair(b, vector));
    }
  }
  while (!waiting.empty())
  {
    std::set<std::pair<BasicBlock*, std::uint16_t> >::iterator elt = waiting.begin(); // Pick an arbitrary element

    waiting.erase(elt);
    std::uint16_t address = elt->second;
    BasicBlock *currentBlock = elt->first;
    if (address >= alu.flash.GetSize())
    {
      continue;
    }

    reachable.insert(address);
    currentBlock->lastAddress = address;

    std::set<std::uint16_t> nextAddresses = alu.GetNextAddresses(address);
    for (std::set<std::uint16_t>::iterator i = nextAddresses.begin(); i != nextAddresses.end(); i++)
    {
      std::uint16_t nextAddress = *i;
      // Jump -> we create a new basic block or split existing if needed
      // Not jump -> still in the same basic block
      if (alu.IsJump(address))
      {
        if (reachable.find(nextAddress) == reachable.end())
        {
          int newBlockNumber = basicBlockCount++;

          BasicBlock *newBlock = new BasicBlock(newBlockNumber, nextAddress);
          basicBlocks[newBlockNumber] = newBlock;
          currentBlock->edges.insert(newBlockNumber);
          waiting.insert(std::make_pair(newBlock, nextAddress));
        }
        else
        {
          // Find the referenced block
          std::map<int, BasicBlock*>::iterator it;
          BasicBlock *referencedBlock = nullptr;
          for (it = basicBlocks.begin(); it != basicBlocks.end(); it++)
          {
            if ((it->second->firstAddress <= nextAddress) && (it->second->lastAddress >= nextAddress))
            {
              referencedBlock = it->second;
            }
          }

          currentBlock->edges.insert(referencedBlock->number);
          // Check if we need to split it
          if (referencedBlock->firstAddress != nextAddress)
          {
            int newBlockNumber = basicBlockCount++;

            BasicBlock *newBlock = new BasicBlock(referencedBlock->number, referencedBlock->firstAddress);
            newBlock->lastAddress = nextAddress - 1;
            newBlock->edges.insert(newBlockNumber);
            referencedBlock->number = newBlockNumber;
            currentBlock->edges.insert(newBlockNumber);
          }
        }
      }
      else
      {
        if (reachable.find(nextAddress) == reachable.end())
        {
          waiting.insert(std::make_pair(currentBlock, nextAddress));
        }
      }
    }
  }
}

void InstructionCoverage::GetCoverage(int &totalInstructions, int &executedInstructions)
{
  totalInstructions = 0;
  executedInstructions = 0;

  for (std::set<std::uint16_t>::iterator i = reachable.begin(); i != reachable.end(); i++)
  {
    totalInstructions++;
    if (executionCount[*i])
    {
      executedInstructions++;
    }
  }
}

void InstructionCoverage::InstructionExecuted(std::uint16_t address)
{
  if (reachable.find(address) != reachable.end())
  {
    executionCount[address]++;
  }
}
