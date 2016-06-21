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
#include <string>
#include <iostream>
#include <set>
#include "sfr.hpp"
#include "block.hpp"
#include "alu.hpp"
#include "symbol_table.hpp"

Sfr::Sfr(std::string n, Block &b, std::uint8_t addr, std::uint8_t r, std::set<std::uint8_t> p) :
  name(n), block(b), address(addr), resetValue(r), pages(p)
{
  SymbolTable::GetInstance()->RegisterSymbol(address, name);
  block.RegisterSfr(this);
}

std::string Sfr::GetName() const
{
  return name;
}

void Sfr::Write(std::uint8_t d)
{
  if (block.alu.GetTraceSfr())
  {
    std::cout << name << " write " << (int) d << std::endl;
  }
  data = d;
}

std::uint8_t Sfr::Read()
{
  if (block.alu.GetTraceSfr())
  {
    std::cout << name << " read " << (int) data << std::endl;
  }
  return data;
}

void Sfr::Reset()
{
  data = resetValue;
}

SfrBitAddressable::SfrBitAddressable(std::string n, Block &b, std::uint8_t addr, std::uint8_t r, std::set<std::uint8_t> p) :
  Sfr(n, b, addr, r, p)
{
  block.RegisterSfr(this);
}

void SfrBitAddressable::WriteBit(std::uint8_t bit, bool value)
{
  std::uint8_t bitShifted = 1 << bit;

  if (block.alu.GetTraceSfr())
  {
    std::cout << name << " write bit " << (int) bit << " " << (int) value << std::endl;
  }

  data &= ~bitShifted;
  if (value)
  {
    data |= bitShifted;
  }
}

bool SfrBitAddressable::ReadBit(std::uint8_t bit)
{
  std::uint8_t bitShifted = 1 << bit;

  if (block.alu.GetTraceSfr())
  {
    std::cout << name << " read bit " << (int) bit << " " << (int) (data & bitShifted) << std::endl;
  }

  return data & bitShifted;
}
