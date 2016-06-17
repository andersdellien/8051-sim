#include <iostream>
#include "port2.hpp"
#include "sfr.hpp"

Port2::Port2(std::string name, Alu &a) :
  Port(name, a),
  p2("P2", *this, 0xa0, 0x80, {0x0, 0xf}),
  xbr2("XBR2", *this, 0xe3, 0x00, {0x0})
{
}
