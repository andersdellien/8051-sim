#include <cstdint>
#include <string>
#include <iostream>
#include "sfr.hpp"

Sfr::Sfr(std::string n): name(n)
{
}

void Sfr::Write(std::uint8_t d)
{
  std::cout << name << " write " << (int) d << std::endl;
  data = d;
}

std::uint8_t Sfr::Read()
{
  std::cout << name << " read" << std::endl;
  return data;
}

