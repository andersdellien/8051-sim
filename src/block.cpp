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

#include <exception>
#include <iostream>
#include <limits>
#include "block.hpp"
#include "alu.hpp"

Block::Block(std::string n, Alu &a) : name(n), alu(a), configurationChanged(true)
{
}

const std::string &Block::GetName() const
{
  return name;
}

void Block::ConfigurationChanged()
{
  configurationChanged = true;
}

int Block::GetRemainingTicks()
{
  if (configurationChanged)
  {
    remainingTicks = CalculateRemainingTicks();
    configurationChanged = false;
  }
  return remainingTicks;
}

void Block::Tick(int ticks)
{
  if (ticks > remainingTicks)
  {
    throw new std::runtime_error("Invalid tick");
  }
  else if (remainingTicks < std::numeric_limits<int>::max())
  {
    remainingTicks -= ticks;
  }
  if (remainingTicks == 0)
  {
    ClockEvent();
    configurationChanged = true;
  }
}

void Block::Reset()
{
  for (std::map<std::string,Sfr*>::iterator i = sfrRegisters.begin(); i != sfrRegisters.end(); i++)
  {
    i->second->Reset();
  }
  remainingTicks = std::numeric_limits<int>::max();
}

void Block::RegisterSfr(Sfr *sfr)
{
  alu.RegisterSfr(sfr);
  sfrRegisters[sfr->GetName()] = sfr;
}

int Block::CalculateRemainingTicks()
{
  return std::numeric_limits<int>::max();
}

void Block::ClockEvent()
{
}
