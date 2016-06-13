#ifndef _TIMER_HPP
#define _TIMER_HPP

#include "alu.hpp"
#include "block.hpp"

class Timer: public Block
{
  public:
    Timer(Alu *alu);
};

#endif

