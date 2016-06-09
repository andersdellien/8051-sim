#include <cstdint>
#include "memory.hpp"
#include "exceptions.hpp"

Memory::Memory(std::uint16_t s)
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
    throw new IllegalAddressException();
  }
}
