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

#ifndef _PORT2_HPP
#define _PORT2_HPP

#include "port.hpp"
#include "alu.hpp"

class P2: public SfrBitAddressable
{
  public:
   P2(std::string name, Block &block, std::uint8_t address, std::uint8_t resetValue, std::set<std::uint8_t> pages);
   void WriteBit(std::uint8_t bit, bool value);
};

class Port2 : public Port
{
  public:
    Port2(std::string name, Alu &alu);
  private:
    P2 p2;
    Sfr xbr2;
};

#endif
