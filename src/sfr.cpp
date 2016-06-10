#include <cstdint>
#include <string>
#include <iostream>
#include "sfr.hpp"
#include "alu.hpp"

Sfr::Sfr(std::string n, Alu &a): name(n), alu(a)
{
}

void Sfr::Write(std::uint8_t d)
{
  if (alu.GetTraceSfr())
  {
    std::cout << name << " write " << (int) d << std::endl;
  }
  data = d;
}

std::uint8_t Sfr::Read()
{
  if (alu.GetTraceSfr())
  {
    std::cout << name << " read" << std::endl;
  }
  return data;
}

