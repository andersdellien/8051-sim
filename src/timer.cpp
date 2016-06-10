#include <iostream>
#include "timer.hpp"
#include "sfr.hpp"

Timer::Timer(Alu &a)
{
  a.RegisterSfr(0x8e, new Sfr("CKCON", a), 0x00);
  a.RegisterSfr(0x8d, new Sfr("TH1", a), 0x00);
  a.RegisterSfr(0x8c, new Sfr("TH0", a), 0x00);
  a.RegisterSfr(0x8b, new Sfr("TL1", a), 0x00);
  a.RegisterSfr(0x8a, new Sfr("TL0", a), 0x00);
  a.RegisterSfr(0x89, new Sfr("TMOD", a), 0x00);
  a.RegisterSfrBitAddressable(0x88, new Sfr("TCON", a), 0x00);
  a.RegisterSfr(0xca, new Sfr("TMR2RLL", a), 0x00);
  a.RegisterSfr(0xcb, new Sfr("TMR2RLH", a), 0x00);
  a.RegisterSfr(0xcc, new Sfr("TMR2L", a), 0x00);
  a.RegisterSfr(0xcd, new Sfr("TMR2H", a), 0x00);
  a.RegisterSfrBitAddressable(0xc8, new Sfr("TMR2CN", a), 0x00);
}

