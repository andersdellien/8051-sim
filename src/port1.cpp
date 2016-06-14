#include <iostream>
#include "port.hpp"
#include "port1.hpp"
#include "sfr.hpp"

Port1::Port1(Alu &a) :
  Port(a),
  p1mdin("P1MDIN", a, 0xf2),
  p1mdout("P1MDOUT", a, 0xa5),
  p1("P1", a, 0x90),
  p1skip("P1SKIP", a, 0xd5)
{
  a.RegisterSfr(0xf2, p1mdin, 0x00);
  a.RegisterSfr(0xa5, p1mdout, 0x00);
  a.RegisterSfr(0x90, p1);
  a.RegisterSfr(0xd5, p1skip, 0x00);
}
