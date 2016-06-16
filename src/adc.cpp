#include <iostream>
#include "adc.hpp"
#include "sfr.hpp"
#include "alu.hpp"

Adc::Adc(Alu &a):
    Block(a),
    toffh("TOFFH", *this, 0x8e, 0x17, {0xf}), // Need to find reasonable reset value from an actual 8051
    toffl("TOFFL", *this, 0x8d, 0x37, {0xf}), // Need to find reasonable reset value from an actual 8051
    adc0cf("ADC0CF", *this, 0x97, 0xf8, {0x0}),
    adc0pwr("ADC0PWR", *this, 0xbb, 0x0f, {0x0, 0xf}),
    adc0ac("ADC0AC", *this, 0xba, 0x00, {0x0})
{
}
