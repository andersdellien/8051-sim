#include <iostream>
#include "timer.hpp"
#include "sfr.hpp"
#include "block.hpp"

Timer::Timer(Alu *a) : Block(a)
{
  RegisterSfr(new Sfr("CKCON", a, 0x8e, 0), 0x00);
  RegisterSfr(new Sfr("TH1", a, 0x8d, 0), 0x00);
  RegisterSfr(new Sfr("TH0", a, 0x8c, 0), 0x00);
  RegisterSfr(new Sfr("TL1", a, 0x8b, 0), 0x00);
  RegisterSfr(new Sfr("TL0", a, 0x8a, 0), 0x00);
  RegisterSfr(new Sfr("TMOD", a, 0x89, 0), 0x00);
  RegisterSfr(new SfrBitAddressable("TCON", a, 0x88, 0), 0x00);
  RegisterSfr(new Sfr("TMR2RLL", a, 0xca, 0), 0x00);
  RegisterSfr(new Sfr("TMR2RLH", a, 0xcb, 0), 0x00);
  RegisterSfr(new Sfr("TMR2L", a, 0xcc, 0), 0x00);
  RegisterSfr(new Sfr("TMR2H", a, 0xcd, 0), 0x00);
  RegisterSfr(new SfrBitAddressable("TMR2CN", a, 0xc8, 0), 0x00);
}

