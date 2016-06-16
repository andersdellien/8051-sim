#include <string>
#include <iostream>
#include "port0.hpp"
#include "sfr.hpp"
#include "port.hpp"

P0::P0(std::string name, Alu &alu, std::uint8_t address, std::uint8_t resetValue, std::set<std::uint8_t> pages):
  SfrBitAddressable(name, alu, address, resetValue, pages)
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

Port0::Port0(Alu &a) :
  Port(a),
  p0mdin("P0MDIN", a, 0xf1, 0xff, {0x0}),
  p0mdout("P0MDOUT", a, 0xa4, 0x00, {0x0}),
  p0("P0", a, 0x80, 0xff, {0x0, 0xf}),
  p0skip("P0SKIP", a, 0xd4, 0x00, {0x0}),
  xbr0("XBR0", a, 0xe1, 0x00, {0x0})
{
}
