#ifndef _ADC_HPP
#define _ADC_HPP

#include "block.hpp"

class Adc: public Block
{
  public:
    Adc(Alu *alu);
};

#endif

