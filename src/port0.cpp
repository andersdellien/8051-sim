#include <iostream>
#include "port0.hpp"
#include "sfr.hpp"

Port0::Port0(Alu &a) : Port(a)
{
  a.RegisterSfr(0xf1, new Sfr("P0MDIN", a, 0xf1), 0x00);
  a.RegisterSfr(0xa4, new Sfr("P0MDOUT", a, 0xa4), 0x00);
  a.RegisterSfr(0x80, new SfrBitAddressable("P0", a, 0x80));
  a.RegisterSfr(0xd4, new Sfr("P0SKIP", a, 0xd4), 0x00);
  a.RegisterSfr(0xe1, new Sfr("XBR0", a, 0xe1), 0x00);
}

