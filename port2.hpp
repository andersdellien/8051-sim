#ifndef _PORT2_HPP
#define _PORT2_HPP

#include "port.hpp"
#include "alu.hpp"

class Port2 : public Port
{
  public:
    Port2(Alu &alu);
};

#endif

