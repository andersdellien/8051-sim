#include <exception>
#include <limits>
#include "block.hpp"
#include "alu.hpp"

Block::Block(Alu &a) : alu(a)
{
}

int Block::GetRemainingTicks()
{
  remainingTicks = CalculateRemainingTicks();
  return remainingTicks;
}

void Block::Tick(int ticks)
{
  if (ticks > remainingTicks)
  {
    throw new std::runtime_error("Invalid tick");
  }
  else
  {
    remainingTicks -= ticks;
  }
  if (remainingTicks == 0)
  {
    ClockEvent();
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

void Block::RegisterSfr(Sfr &sfr, std::uint8_t page)
{
  alu.RegisterSfr(sfr.address, sfr, page);
  sfrRegisters[sfr.GetName()] = &sfr;
}

int Block::CalculateRemainingTicks()
{
  return std::numeric_limits<int>::max();
}

void Block::ClockEvent()
{
}
