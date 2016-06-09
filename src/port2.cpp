#include <iostream>
#include "port2.hpp"
#include "sfr.hpp"

Port2::Port2(Alu &a) : Port(a)
{
  a.RegisterSfr(0xa0, new Sfr("P2"));
  a.RegisterSfr(0xe3, new Sfr("XBR2"), 0x00);
}
