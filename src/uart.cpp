#include <iostream>
#include <set>
#include "uart.hpp"
#include "sfr.hpp"
#include "block.hpp"

SBUF0::SBUF0(std::string name, Alu &alu, std::uint8_t address, std::uint8_t resetValue, std::set<std::uint8_t> pages):
  Sfr(name, alu, address, resetValue, pages)
{
}

void SBUF0::Write(std::uint8_t tx)
{
  std::cout << "UART0 output: " << tx << std::endl;
}

Uart::Uart(Alu &a) :
  Block(a),
  scon0("SCON0", a, 0x98, 0x40, {0x0}),
  sbuf0("SBUF0", a, 0x99, 0x00, {0x0})
{
}

#define REN0 16
#define RI0 1

void Uart::SimulateRx(char c)
{
  scon0.data |= RI0;
  sbuf0.data = (uint8_t) c;
  if (scon0.data & REN0)
  {
    alu.UartInterrupt();
  }
  else
  {
    std::cout << "UART disabled" << std::endl;
  }
}
