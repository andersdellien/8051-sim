#include <iostream>
#include "port0.hpp"
#include "sfr.hpp"

Port0::Port0(Alu &a) : Port(a)
{
  a.RegisterSfr(0xf1, new Sfr("P0MDIN"), 0x00);
  a.RegisterSfr(0xa4, new Sfr("P0MDOUT"), 0x00);
  a.RegisterSfrBitAddressable(0x80, new Sfr("P0"));
  a.RegisterSfr(0xd4, new Sfr("P0SKIP"), 0x00);
  a.RegisterSfr(0xe1, new Sfr("XBR0"), 0x00);
}

