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

#ifndef _INSTRUCTION_HPP
#define _INSTRUCTION_HPP

#include <cstdint>
#include <vector>
#include <string>
#include "memory.hpp"
#include "alu.hpp"

enum class ConstraintType {None, Alias, Interval, RegisterInterval, Memory};

constexpr int RegisterA = 8;

class Constraint
{
  public:
    int low, high, reg;
    ConstraintType type;
    void Print(std::string name);
};

class RegisterConstraints
{
  public:
    Constraint dpl, dph, r[9], c; // 'A' is register number 8
    void Print();
};

class Instruction
{
  protected:
    std::uint8_t operands;
    std::uint8_t opcode;
    Alu &alu;
  public:
    Instruction(Alu&, std::uint8_t opcode);
    Instruction(Alu&);
    virtual bool IsJump(std::uint16_t address) const;
    virtual std::vector<std::uint16_t> GetNextAddresses(std::uint16_t address) const;
    virtual std::string Disassemble(std::uint16_t address) const = 0;
    virtual void Execute() const;
    virtual void UpdateConstraints(RegisterConstraints &c, std::uint16_t address, std::uint16_t destination);
    std::uint8_t GetOperands() const;
    void IncPC() const;
    std::uint8_t cycles;
};

#endif
