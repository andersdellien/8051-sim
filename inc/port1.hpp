#ifndef _PORT1_HPP
#define _PORT1_HPP

#include "port.hpp"
#include "alu.hpp"

class Port1 : public Port
{
  public:
    Port1(Alu *alu);
};

#endif

