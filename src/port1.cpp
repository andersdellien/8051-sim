#include <iostream>
#include "port.hpp"
#include "port1.hpp"
#include "sfr.hpp"

Port1::Port1(Alu &a) :
  Port(a),
  p1mdin("P1MDIN", *this, 0xf2, 0xff, {0x0}),
  p1mdout("P1MDOUT", *this, 0xa5, 0x00, {0x0}),
  p1("P1", *this, 0x90, 0xff, {0x0,0xf}),
  p1skip("P1SKIP", *this, 0xd5, 0x00, {0x0})
{
}
