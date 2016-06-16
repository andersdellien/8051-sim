#include <iostream>
#include <cstdint>
#include "memory.hpp"
#include "exceptions.hpp"
#include "block.hpp"

Memory::Memory(Alu &alu, std::uint16_t s): Block(alu)
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
