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
#include <string>
#include "memory.hpp"
#include "alu.hpp"

class Instruction
{
  protected:
    int operands;
    std::uint8_t opcode;
    Alu &alu;
    std::uint8_t reg;
  public:
    Instruction(Alu&, std::uint8_t opcode, std::uint8_t reg);
    Instruction(Alu&, std::uint8_t opcode);
    Instruction(Alu&);
    virtual std::string Disassemble(std::uint16_t address) const = 0;
    virtual void Execute() const;
    std::uint8_t GetOperands() const;
    std::uint8_t GetOpcode() const;
    void IncPC() const;
    std::uint8_t cycles;
};

#endif
