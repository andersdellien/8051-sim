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

#ifndef _PORT0_HPP
#define _PORT0_HPP

#include <set>
#include "port.hpp"
#include "alu.hpp"

class P0: public SfrBitAddressable
{
  public:
   P0(std::string name, Block &block, std::uint8_t address, std::uint8_t resetValue, std::set<std::uint8_t> pages);
   bool ReadBit(std::uint8_t bit);
};

class Port0 : public Port
{
  public:
    Port0(std::string name, Alu &alu);
  private:
    Sfr p0mdin;
    Sfr p0mdout;
    P0 p0;
    Sfr p0skip;
    Sfr xbr0;
};

#endif
