#include <iostream>
#include "timer.hpp"
#include "sfr.hpp"

Timer::Timer(Alu &a)
{
  a.RegisterSfr(0x8e, new Sfr("CKCON"), 0x00);
  a.RegisterSfr(0x8d, new Sfr("TH1"), 0x00);
  a.RegisterSfr(0x8c, new Sfr("TH0"), 0x00);
  a.RegisterSfr(0x8b, new Sfr("TL1"), 0x00);
  a.RegisterSfr(0x8a, new Sfr("TL0"), 0x00);
  a.RegisterSfr(0x89, new Sfr("TMOD"), 0x00);
  a.RegisterSfrBitAddressable(0x88, new Sfr("TCON"), 0x00);
  a.RegisterSfr(0xca, new Sfr("TMR2RLL"), 0x00);
  a.RegisterSfr(0xcb, new Sfr("TMR2RLH"), 0x00);
  a.RegisterSfr(0xcc, new Sfr("TMR2L"), 0x00);
  a.RegisterSfr(0xcd, new Sfr("TMR2H"), 0x00);
  a.RegisterSfrBitAddressable(0xc8, new Sfr("TMR2CN"), 0x00);
}

