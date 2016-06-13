#ifndef _SYSTEM_HPP
#define _SYSTEM_HPP

#include "alu.hpp"
#include "block.hpp"

class System: public Block
{
  public:
    System(Alu *alu);
};

#endif

