#ifndef _UART_HPP
#define _UART_HPP

#include <set>
#include "uart.hpp"
#include "alu.hpp"
#include "block.hpp"

class SBUF0: public Sfr
{
  public:
    SBUF0(std::string name, Alu &a, std::uint8_t address, std::uint8_t resetValue, std::set<std::uint8_t> pages);
    void Write(std::uint8_t tx);
};

class Uart: public Block
{
  public:
    Uart(Alu &alu);
    void SimulateRx(char c);
  private:
    SfrBitAddressable scon0;
    SBUF0 sbuf0;
};

#endif
