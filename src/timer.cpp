#include <iostream>
#include "timer.hpp"
#include "sfr.hpp"

Timer::Timer(Alu &a)
{
  a.RegisterSfr(0x8e, new Sfr("CKCON", a, 0x8e), 0x00);
  a.RegisterSfr(0x8d, new Sfr("TH1", a, 0x8d), 0x00);
  a.RegisterSfr(0x8c, new Sfr("TH0", a, 0x8c), 0x00);
  a.RegisterSfr(0x8b, new Sfr("TL1", a, 0x8b), 0x00);
  a.RegisterSfr(0x8a, new Sfr("TL0", a, 0x8a), 0x00);
  a.RegisterSfr(0x89, new Sfr("TMOD", a, 0x89), 0x00);
  a.RegisterSfrBitAddressable(0x88, new Sfr("TCON", a, 0x88), 0x00);
  a.RegisterSfr(0xca, new Sfr("TMR2RLL", a, 0xca), 0x00);
  a.RegisterSfr(0xcb, new Sfr("TMR2RLH", a, 0xcb), 0x00);
  a.RegisterSfr(0xcc, new Sfr("TMR2L", a, 0xcc), 0x00);
  a.RegisterSfr(0xcd, new Sfr("TMR2H", a, 0xcd), 0x00);
  a.RegisterSfrBitAddressable(0xc8, new Sfr("TMR2CN", a, 0xc8), 0x00);
}

