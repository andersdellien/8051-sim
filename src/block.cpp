#include "block.hpp"
#include "alu.hpp"

Block::Block(Alu *a) : alu(a)
{
}

void Block::Tick()
{
}

void Block::Reset()
{
  for (std::map<std::string,Sfr*>::iterator i = sfrRegisters.begin(); i != sfrRegisters.end(); i++)
  {
    i->second->Reset();
  }
}

void Block::RegisterSfr(Sfr *sfr, std::uint8_t page)
{
  alu->RegisterSfr(sfr->address, sfr, page);
  sfrRegisters[sfr->GetName()] = sfr;
}
