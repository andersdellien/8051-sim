#include <exception>
#include <iostream>
#include <limits>
#include "block.hpp"
#include "alu.hpp"

Block::Block(Alu &a) : alu(a), configurationChanged(true)
{
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
