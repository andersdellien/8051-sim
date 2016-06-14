#ifndef _TIMER_HPP
#define _TIMER_HPP

#include "alu.hpp"
#include "block.hpp"

class Timer: public Block
{
  public:
    Timer(Alu &alu);
  private:
    Sfr ckcon;
    Sfr th1;
    Sfr th0;
    Sfr tl1;
    Sfr tl0;
    Sfr tmod;
    SfrBitAddressable tcon;
    Sfr tmr2rll;
    Sfr tmr2rlh;
    Sfr tmr2l;
    Sfr tmr2h;
    SfrBitAddressable tmr2cn;

};

#endif
