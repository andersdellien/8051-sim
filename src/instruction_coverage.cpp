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

#include <map>
#include <set>
#include <stdexcept>

#include "alu.hpp"
#include "instruction_coverage.hpp"
#include "symbol_table.hpp"

static InstructionCoverage instructionCoverage;

InstructionCoverage* InstructionCoverage::GetInstance()
{
  return &instructionCoverage;
}


#include <iostream>

void InstructionCoverage::Initialize(Alu &alu)
{
  std::set<std::uint16_t> waiting = {0x00}; // Reset address

  reachable.erase(reachable.begin(), reachable.end());
  executionCount.erase(executionCount.begin(), executionCount.end());
  for (std::uint16_t vector : {0x3, 0xb, 0x13, 0x1b, 0x23, 0x2b})
  {
    // Let's assume an unused interrupt vector entry is zeroed out.
    if (alu.flash->Get(vector) || alu.flash->Get(vector+1))
    {
      waiting.insert(vector);
    }
  }
  while (!waiting.empty())
  {
    std::set<std::uint16_t>::iterator elt = waiting.begin(); // Pick an arbitrary element

    waiting.erase(elt);
    std::uint16_t address = *elt;

    if (address >= alu.flash->GetSize())
    {
      continue;
    }

    reachable.insert(address);

    std::set<std::uint16_t> nextAddr = alu.GetNextAddresses(address);
    for (std::set<std::uint16_t>::iterator i = nextAddr.begin(); i != nextAddr.end(); i++)
    {
      if (reachable.find(*i) == reachable.end())
      {
        waiting.insert(*i);
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
  else
  {
    throw new std::runtime_error("Well this is weird");
  }
}
