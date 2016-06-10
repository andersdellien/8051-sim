#include <cstdint>
#include <string>
#include <iostream>
#include "sfr.hpp"
#include "alu.hpp"
#include "symbol_table.hpp"

Sfr::Sfr(std::string n, Alu &a, std::uint8_t addr): name(n), alu(a), address(addr)
{
  SymbolTable::GetInstance()->RegisterSymbol(address, name);
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

