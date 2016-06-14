#ifndef _PORT1_HPP
#define _PORT1_HPP

#include "port.hpp"
#include "alu.hpp"

class Port1 : public Port
{
  public:
    Port1(Alu &alu);
  private:
    Sfr p1mdin;
    Sfr p1mdout;
    SfrBitAddressable p1;
    Sfr p1skip;
};

#endif
