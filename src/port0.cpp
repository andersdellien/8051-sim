#include <string>
#include <iostream>
#include "port0.hpp"
#include "sfr.hpp"

class P0: public SfrBitAddressable
{
  public:
   P0(std::string name, Alu& alu, std::uint8_t address);
   bool ReadBit(std::uint8_t bit);
};

P0::P0(std::string name, Alu &alu, std::uint8_t address) : SfrBitAddressable(name, alu, address)
{
}

bool P0::ReadBit(std::uint8_t bit)
{
  std::string line;

  std::cout << "Read of " << name << " bit " << (int) bit << std::endl;
  std::getline(std::cin, line);

  if (line[0] == '1')
  {
    std::cout << "Logic high" << std::endl;
    return true;
  }
  else
  {
    std::cout << "Logic low" << std::endl;
    return false;
  }
}

Port0::Port0(Alu &a) : Port(a)
{
  a.RegisterSfr(0xf1, new Sfr("P0MDIN", a, 0xf1), 0x00);
  a.RegisterSfr(0xa4, new Sfr("P0MDOUT", a, 0xa4), 0x00);
  a.RegisterSfr(0x80, new P0("P0", a, 0x80));
  a.RegisterSfr(0xd4, new Sfr("P0SKIP", a, 0xd4), 0x00);
  a.RegisterSfr(0xe1, new Sfr("XBR0", a, 0xe1), 0x00);
}

