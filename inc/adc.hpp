#ifndef _ADC_HPP
#define _ADC_HPP

#include "block.hpp"

class Adc: public Block
{
  public:
    Adc(Alu &alu);
  private:
    Sfr toffh;
    Sfr toffl;
    Sfr adc0cf;
    Sfr adc0pwr;
    Sfr adc0ac;
};

#endif
