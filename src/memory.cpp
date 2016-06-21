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
#include <cstdint>
#include "memory.hpp"
#include "exceptions.hpp"
#include "block.hpp"

Memory::Memory(std::string name, Alu &alu, std::uint16_t s): Block(name, alu)
{
  size = s;
  data = new std::uint8_t[s];
}

std::uint8_t Memory::Get(std::uint16_t address) const
{
  if (address < size)
  {
    return data[address];
  }
  else
  {
    std::cout << "Illegal memory read at " << address << std::endl;
    throw new IllegalAddressException();
  }
}

void Memory::Set(std::uint16_t address, std::uint8_t value)
{
  if (address < size)
  {
    data[address] = value;
  }
  else
  {
    std::cout << "Illegal memory write at " << address << std::endl;
    throw new IllegalAddressException();
  }
}
