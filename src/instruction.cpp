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
#include <sstream>
#include <vector>
#include "instruction.hpp"

void Constraint::Print(std::string name)
{
  if (type == ConstraintType::Memory)
  {
    std::cout << name << " Memory: " << low << " " << high << std::endl;
  }
  else if (type == ConstraintType::Interval)
  {
    std::cout << name << " Interval: " << low << " " << high << std::endl;
  }
  else if (type == ConstraintType::RegisterInterval)
  {
    std::cout << name << " Register " << reg << " Interval: " << low << " " << high << std::endl;
  }
  else if (type == ConstraintType::Alias)
  {
    std::cout << name << " Alias " << reg << std::endl;
  }
}

void RegisterConstraints::Clear()
{
  r[RegisterA].type = ConstraintType::None;
  c.type = ConstraintType::None;
  nc.type = ConstraintType::None;
  dpl.type = ConstraintType::None;
  dph.type = ConstraintType::None;
  for (int i = 0; i < 8; i++)
  {
    r[i].type = ConstraintType::None;
  }
}

RegisterConstraints::RegisterConstraints()
{
  Clear();
}

void RegisterConstraints::Print()
{
  r[RegisterA].Print("A");
  dpl.Print("DPL");
  dph.Print("DPH");
  c.Print("C");
  nc.Print("NC");
  for (int i = 0; i < 8; i++)
  {
    std::stringstream ss;
    ss << "R" << i;
    r[i].Print(ss.str());
  }
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
