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

#include <cstdint>
#include <iostream>
#include <stdexcept>
#include <string>
#include <sstream>
#include <vector>
#include "instruction.hpp"

void Constraint::Print(std::string name)
{
  if (type == ConstraintType::None)
  {
    return;
  }

  std::cout << name << " ";
  if (type == ConstraintType::True)
  {
    std::cout << "True";
  }
  else if (type == ConstraintType::False)
  {
    std::cout << "False";
  }
  else if (type == ConstraintType::Memory)
  {
    std::cout << "Memory: " << low << " " << high;
  }
  else if (type == ConstraintType::Interval)
  {
    std::cout << "Interval: " << low << " " << high;
  }
  else if (type == ConstraintType::RegisterInterval)
  {
    std::cout << "Register " << reg << " Interval: " << low << " " << high;
  }
  else if (type == ConstraintType::Alias)
  {
    std::cout << "Alias " << reg;
  }
  std::cout << std::endl;
}

void Constraint::SetNone()
{
  type = ConstraintType::None;
}

void Constraint::SetInterval(int l, int h)
{
  type = ConstraintType::Interval;
  low = l;
  high = h;
}

void Constraint::SetMemory(int l, int h)
{
  type = ConstraintType::Memory;
  low = l;
  high = h;
}

void Constraint::SetRegisterInterval(int r, int l, int h)
{
  type = ConstraintType::RegisterInterval;
  reg = r;
  low = l;
  high = h;
}

void Constraint::SetAlias(int r)
{
  type = ConstraintType::Alias;
  reg = r;
}

void Constraint::SetTrue()
{
  type = ConstraintType::True;
}

void Constraint::SetFalse()
{
  type = ConstraintType::False;
}

Constraint::Constraint()
{
  SetNone();
}

void RegisterConstraints::Clear()
{
  for (int i = 0; i < NumConstraints; i++)
  {
    constraintRef[i] = i;
  }
}

RegisterConstraints::RegisterConstraints()
{
  Clear();
}

void RegisterConstraints::Print()
{
  for (int i = 0; i < NumConstraints; i++)
  {
    constraints[constraintRef[i]].Print(constraintNames[i]);
  }
}

Constraint& RegisterConstraints::GetConstraint(enum Constraints c)
{
  return constraints[constraintRef[c]];
}

Instruction::Instruction(Alu& a, std::uint8_t o) : alu(a), opcode(o)
{
}

Instruction::Instruction(Alu& a) : alu(a), opcode(0)
{
}

std::uint8_t Instruction::GetOperands() const
{
  return operands;
}

void Instruction::Execute() const
{
  std::cout << "Instruction " << std::hex << (int) opcode << " at address " << alu.GetPC() << " not implemented" << std::endl;
  throw new std::runtime_error("instruction not implemented");
}

void Instruction::IncPC() const
{
  alu.SetPC(alu.GetPC() + 1 + operands);
}

bool Instruction::IsJump(std::uint16_t address) const
{
  return false;
}

std::vector<std::uint16_t> Instruction::GetNextAddresses(std::uint16_t address) const
{
  return {static_cast<std::uint16_t>(address + 1 + operands)};
}

void Instruction::UpdateConstraints(RegisterConstraints &c, std::uint16_t address, std::uint16_t destination)
{
  c.Clear();
}
