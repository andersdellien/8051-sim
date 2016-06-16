#include <iostream>
#include <stdexcept>
#include "timer.hpp"
#include "sfr.hpp"
#include "block.hpp"

#define T0M 4
#define SCA 3
#define TR0 16
#define TR0_BIT 4

TCON::TCON(std::string name, Block &block, std::uint8_t address, std::uint8_t resetValue, std::set<std::uint8_t> pages):
  SfrBitAddressable(name, block, address, resetValue, pages)
{
}

void TCON::Write(std::uint8_t value)
{
  if (!(data & TR0) & (value & TR0))
  {
    // If we're enabling the timer, we need to report that we have an upcoming event
    block.ConfigurationChanged();
  }
  Sfr::Write(value);
}

void TCON::WriteBit(std::uint8_t bit, bool value)
{
  if (!(data & TR0) && (bit == TR0_BIT) && value)
  {
    // If we're enabling the timer, we need to report that we have an upcoming event
    block.ConfigurationChanged();
  }  
  SfrBitAddressable::WriteBit(bit, value);
}

Timer::Timer(Alu &a) :
  Block(a),
  ckcon("CKCON", *this, 0x8e, 0, {0x0}),
  th1("TH1", *this, 0x8d, 0, {0x0}),
  th0("TH0", *this, 0x8c, 0, {0x0}),
  tl1("TL1", *this, 0x8b, 0, {0x0}),
  tl0("TL0", *this, 0x8a, 0, {0x0}),
  tmod("TMOD", *this, 0x89, 0, {0x0}),
  tcon("TCON", *this, 0x88, 0, {0x0}),
  tmr2rll("TMR2RLL", *this, 0xca, 0, {0x0}),
  tmr2rlh("TMR2RLH", *this, 0xcb, 0, {0x0}),
  tmr2l("TMR2L", *this, 0xcc, 0, {0x0}),
  tmr2h("TMR2H", *this, 0xcd, 0, {0x0}),
  tmr2cn("TMR2CN", *this, 0xc8, 0, {0x0})
{
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
