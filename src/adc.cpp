#include <iostream>
#include "adc.hpp"
#include "sfr.hpp"
#include "alu.hpp"

Adc::Adc(Alu &a):
    Block(a),
    toffh("TOFFH", a, 0x8e),
    toffl("TOFFL", a, 0x8d),
    adc0cf("ADC0CF", a, 0x97),
    adc0pwr("ADC0PWR", a, 0xbb),
    adc0ac("ADC0AC", a, 0xba)
{
  a.RegisterSfr(0x8e, toffh, 0x0f);
  a.RegisterSfr(0x8d, toffl, 0x0f);
  a.RegisterSfr(0x97, adc0cf, 0x00);
  a.RegisterSfr(0xbb, adc0pwr);
  a.RegisterSfr(0xba, adc0ac);
}
