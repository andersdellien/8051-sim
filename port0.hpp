#ifndef _PORT0_HPP
#define _PORT0_HPP

#include "port.hpp"
#include "alu.hpp"

class Port0 : public Port
{
  public:
    Port0(Alu &alu);
};

#endif

