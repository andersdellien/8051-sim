#ifndef _PORT_HPP
#define _PORT_HPP

#include "alu.hpp"

class Port
{
  public:
    Port(Alu &a);
  private:
    Alu &alu;
};

#endif
