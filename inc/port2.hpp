#ifndef _PORT2_HPP
#define _PORT2_HPP

#include "port.hpp"
#include "alu.hpp"

class Port2 : public Port
{
  public:
    Port2(std::string name, Alu &alu);
  private:
    SfrBitAddressable p2;
    Sfr xbr2;
};

#endif
