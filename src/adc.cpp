#include <iostream>
#include "adc.hpp"
#include "sfr.hpp"

Adc::Adc(Alu &a)
{
  a.RegisterSfr(0x8d, new Sfr("TOFFL"), 0x0f);
  a.RegisterSfr(0x97, new Sfr("ADC0CF"), 0x00);
  a.RegisterSfr(0xbb, new Sfr("ADC0PWR"));
  a.RegisterSfr(0xba, new Sfr("ADC0AC"));
}

