#include <iostream>
#include <stdexcept>
#include "timer.hpp"
#include "sfr.hpp"
#include "block.hpp"

#define T0M 4
#define SCA 3
#define TR0 16

Timer::Timer(Alu &a) :
  Block(a),
  ckcon("CKCON", a, 0x8e, 0),
  th1("TH1", a, 0x8d, 0),
  th0("TH0", a, 0x8c, 0),
  tl1("TL1", a, 0x8b, 0),
  tl0("TL0", a, 0x8a, 0),
  tmod("TMOD", a, 0x89, 0),
  tcon("TCON", a, 0x88, 0),
  tmr2rll("TMR2RLL", a, 0xca, 0),
  tmr2rlh("TMR2RLH", a, 0xcb, 0),
  tmr2l("TMR2L", a, 0xcc, 0),
  tmr2h("TMR2H", a, 0xcd, 0),
  tmr2cn("TMR2CN", a, 0xc8, 0)
{
  RegisterSfr(ckcon, 0x00);
  RegisterSfr(th1, 0x00);
  RegisterSfr(th0, 0x00);
  RegisterSfr(tl1, 0x00);
  RegisterSfr(tl0, 0x00);
  RegisterSfr(tmod, 0x00);
  RegisterSfr(tcon, 0x00);
  RegisterSfr(tmr2rll, 0x00);
  RegisterSfr(tmr2rlh, 0x00);
  RegisterSfr(tmr2l, 0x00);
  RegisterSfr(tmr2h, 0x00);
  RegisterSfr(tmr2cn, 0x00);
}

void Timer::ClockEvent()
{
  // One-shot semantics assumed (need to check an actual 8051 here), disable the timer after it has triggered

  tcon.data &= ~TR0;
  alu.TimerInterrupt(0);
}

int Timer::CalculateRemainingTicks()
{
  // Only support Timer0 in 16-bite mode for now

  if (tcon.data & TR0)
  {
    int divisor;
    int timerConfig = tl0.data + 256 * th0.data;
    // Check timer configuration, T0M and SCA bits in CKCON
    if (ckcon.data & T0M)
    {
      divisor = 1;
    }
    else
    {
      int sca = ckcon.data & SCA;
      if (sca == 0)
      {
        divisor = 12;
      }
      else if (sca == 1)
      {
        divisor = 4;
      }
      else if (sca == 2)
      {
        divisor = 48;
      }
      else
      {
        throw new std::runtime_error("illegal timer configuration");
      }
    }
    // Timer counting upwards
    return divisor * (65536 - timerConfig);
  }
  else
  {
    return std::numeric_limits<int>::max();
  }
}
