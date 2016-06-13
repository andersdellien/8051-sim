#include <cstdint>
#include <string>
#include <iostream>
#include "sfr.hpp"
#include "alu.hpp"
#include "symbol_table.hpp"

Sfr::Sfr(std::string n, Alu *a, std::uint8_t addr): name(n), alu(a), address(addr)
{
  SymbolTable::GetInstance()->RegisterSymbol(address, name);
}

Sfr::Sfr(std::string n, Alu *a, std::uint8_t addr, std::uint8_t r): name(n), alu(a), address(addr), resetValue(r)
{
  SymbolTable::GetInstance()->RegisterSymbol(address, name);
}

std::string Sfr::GetName() const
{
  return name;
}

void Sfr::Write(std::uint8_t d)
{
  if (alu->GetTraceSfr())
  {
    std::cout << name << " write " << (int) d << std::endl;
  }
  data = d;
}

std::uint8_t Sfr::Read()
{
  if (alu->GetTraceSfr())
  {
    std::cout << name << " read " << (int) data << std::endl;
  }
  return data;
}

void Sfr::Reset()
{
  data = resetValue;
}

SfrBitAddressable::SfrBitAddressable(std::string name, Alu *alu, std::uint8_t address) : Sfr(name, alu, address)
{
}

SfrBitAddressable::SfrBitAddressable(std::string name, Alu *alu, std::uint8_t address, std::uint8_t resetValue) : Sfr(name, alu, address, resetValue)
{
}

void SfrBitAddressable::WriteBit(std::uint8_t bit, bool value)
{
  std::uint8_t bitShifted = 1 << bit;

  if (alu->GetTraceSfr())
  {
    std::cout << name << " write bit " << (int) bit << " " << (int) value << std::endl;
  }

  data &= ~bitShifted;
  if (value)
  {
    data |= bitShifted;
  }
}

bool SfrBitAddressable::ReadBit(std::uint8_t bit)
{
  std::uint8_t bitShifted = 1 << bit;

  if (alu->GetTraceSfr())
  {
    std::cout << name << " read bit " << (int) bit << " " << (int) (data & bitShifted) << std::endl;
  }

  return data & bitShifted;
}
