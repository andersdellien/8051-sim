#include <iostream>
#include "port2.hpp"
#include "sfr.hpp"

Port2::Port2(Alu &a) :
  Port(a),
  p2("P2", a, 0xa0),
  xbr2("XBR2", a, 0xe3)
{
  a.RegisterSfr(0xa0, p2);
  a.RegisterSfr(0xe3, xbr2, 0x00);
}
