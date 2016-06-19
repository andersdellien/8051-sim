#include <iostream>
#include "port2.hpp"
#include "sfr.hpp"
#include "command.hpp"

P2::P2(std::string name, Block &block, std::uint8_t address, std::uint8_t resetValue, std::set<std::uint8_t> pages):
  SfrBitAddressable(name, block, address, resetValue, pages)
{
}

void P2::WriteBit(std::uint8_t bit, bool value)
{
  return block.alu.GetCallback()->OnGPIOWrite(*block.alu.GetCallbackCpu(), 2, bit, value);
}

Port2::Port2(std::string name, Alu &a) :
  Port(name, a),
  p2("P2", *this, 0xa0, 0x80, {0x0, 0xf}),
  xbr2("XBR2", *this, 0xe3, 0x00, {0x0})
{
}
