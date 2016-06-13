#include <iostream>
#include "adc.hpp"
#include "sfr.hpp"
#include "alu.hpp"

Adc::Adc(Alu *a): Block(a)
{
  a->RegisterSfr(0x8e, new Sfr("TOFFH", a, 0x8e), 0x0f);
  a->RegisterSfr(0x8d, new Sfr("TOFFL", a, 0x8d), 0x0f);
  a->RegisterSfr(0x97, new Sfr("ADC0CF", a, 0x97), 0x00);
  a->RegisterSfr(0xbb, new Sfr("ADC0PWR", a, 0xbb));
  a->RegisterSfr(0xba, new Sfr("ADC0AC", a, 0xba));
}

