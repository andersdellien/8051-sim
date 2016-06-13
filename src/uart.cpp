#include <iostream>
#include "uart.hpp"
#include "sfr.hpp"
#include "block.hpp"

Uart::Uart(Alu *a) : Block(a)
{
  a->RegisterSfr(0x98, new Sfr("SCON0", a, 0x98), 0x00);
}

