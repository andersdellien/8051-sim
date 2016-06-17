#include <string>
#include <iostream>
#include "port0.hpp"
#include "sfr.hpp"
#include "port.hpp"

P0::P0(std::string name, Block &block, std::uint8_t address, std::uint8_t resetValue, std::set<std::uint8_t> pages):
  SfrBitAddressable(name, block, address, resetValue, pages)
{
}

bool P0::ReadBit(std::uint8_t bit)
{
  return block.alu.GetCallback()->OnGPIORead(0, bit);
}

Port0::Port0(Alu &a) :
  Port(a),
  p0mdin("P0MDIN", *this, 0xf1, 0xff, {0x0}),
  p0mdout("P0MDOUT", *this, 0xa4, 0x00, {0x0}),
  p0("P0", *this, 0x80, 0xff, {0x0, 0xf}),
  p0skip("P0SKIP", *this, 0xd4, 0x00, {0x0}),
  xbr0("XBR0", *this, 0xe1, 0x00, {0x0})
{
}
