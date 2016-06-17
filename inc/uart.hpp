#ifndef _UART_HPP
#define _UART_HPP

#include <set>
#include "uart.hpp"
#include "alu.hpp"
#include "block.hpp"

class SBUF0: public Sfr
{
  public:
    SBUF0(std::string name, Block &block, std::uint8_t address, std::uint8_t resetValue, std::set<std::uint8_t> pages);
    void Write(std::uint8_t tx);
};

class SCON0: public SfrBitAddressable
{
  public:
    SCON0(std::string name, Block &block, std::uint8_t address, std::uint8_t resetValue, std::set<std::uint8_t> pages);
    void Write(std::uint8_t value);
    void WriteBit(std::uint8_t bit, bool value);
};

class Uart: public Block
{
  public:
    Uart(std::string name, Alu &alu);
    void SimulateRx(char c);
    bool interruptPending;
  private:
    int CalculateRemainingTicks();
    void ClockEvent();
    SBUF0 sbuf0;
    SCON0 scon0;
};

#endif
