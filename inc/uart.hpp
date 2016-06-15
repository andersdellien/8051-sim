#ifndef _UART_HPP
#define _UART_HPP

#include "uart.hpp"
#include "alu.hpp"
#include "block.hpp"

class Uart: public Block
{
  public:
    Uart(Alu &alu);
    void SimulateRx(char c);
  private:
    Sfr scon0;
};

#endif
