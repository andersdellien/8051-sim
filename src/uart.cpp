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

#define REN0 16

void Uart::SimulateRx(char c)
{
  if (scon0.data & REN0)
  {
    alu.UartInterrupt();
  }
  else
  {
    std::cout << "UART disabled" << std::endl;
  }
}
