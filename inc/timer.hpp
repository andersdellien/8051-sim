#ifndef _TIMER_HPP
#define _TIMER_HPP

#include "alu.hpp"
#include "block.hpp"
#include "sfr.hpp"

class TCON: public SfrBitAddressable
{
  public:
    TCON(std::string name, Block &b, std::uint8_t address, std::uint8_t resetValue, std::set<std::uint8_t> pages);
    void Write(std::uint8_t value);
    void WriteBit(std::uint8_t bit, bool value);
};

class Timer: public Block
{
  public:
    Timer(std::string name, Alu &alu);
    int CalculateRemainingTicks();
    void ClockEvent();
  private:
    Sfr ckcon;
    Sfr th1;
    Sfr th0;
    Sfr tl1;
    Sfr tl0;
    Sfr tmod;
    TCON tcon;
    Sfr tmr2rll;
    Sfr tmr2rlh;
    Sfr tmr2l;
    Sfr tmr2h;
    SfrBitAddressable tmr2cn;
};

#endif
