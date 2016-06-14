#include <iostream>
#include "uart.hpp"
#include "sfr.hpp"
#include "block.hpp"

Uart::Uart(Alu &a) :
  Block(a),
  scon0("SCON0", a, 0x98)
{
  a.RegisterSfr(0x98, scon0, 0x00);
}
