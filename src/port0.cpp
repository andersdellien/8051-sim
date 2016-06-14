#include <string>
#include <iostream>
#include "port0.hpp"
#include "sfr.hpp"
#include "port.hpp"

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

Port0::Port0(Alu &a) :
  Port(a),
  p0mdin("P0MDIN", a, 0xf1),
  p0mdout("P0MDOUT", a, 0xa4),
  p0("P0", a, 0x80),
  p0skip("P0SKIP", a, 0xd4),
  xbr0("XBR0", a, 0xe1)
{
  a.RegisterSfr(0xf1, p0mdin, 0x00);
  a.RegisterSfr(0xa4, p0mdout, 0x00);
  a.RegisterSfr(0x80, p0);
  a.RegisterSfr(0xd4, p0skip, 0x00);
  a.RegisterSfr(0xe1, xbr0, 0x00);
}
