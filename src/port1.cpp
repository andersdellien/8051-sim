#include <iostream>
#include "port.hpp"
#include "port1.hpp"
#include "sfr.hpp"

P1::P1(std::string name, Block &block, std::uint8_t address, std::uint8_t resetValue, std::set<std::uint8_t> pages):
  SfrBitAddressable(name, block, address, resetValue, pages)
{
}

void P1::WriteBit(std::uint8_t bit, bool value)
{
  return block.alu.GetCallback()->OnGPIOWrite(1, bit, value);
}

Port1::Port1(std::string name, Alu &a) :
  Port(name, a),
  p1mdin("P1MDIN", *this, 0xf2, 0xff, {0x0}),
  p1mdout("P1MDOUT", *this, 0xa5, 0x00, {0x0}),
  p1("P1", *this, 0x90, 0xff, {0x0,0xf}),
  p1skip("P1SKIP", *this, 0xd5, 0x00, {0x0})
{
}
