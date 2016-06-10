#include <iostream>
#include "port1.hpp"
#include "sfr.hpp"

Port1::Port1(Alu &a) : Port(a)
{
  a.RegisterSfr(0xf2, new Sfr("P1MDIN"), 0x00);
  a.RegisterSfr(0xa5, new Sfr("P1MDOUT"), 0x00);
  a.RegisterSfrBitAddressable(0x90, new Sfr("P1"));
  a.RegisterSfr(0xd5, new Sfr("P1SKIP"), 0x00);
}

