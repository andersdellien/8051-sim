#ifndef _CPU8051_HPP
#define _CPU8051_HPP

#include <iostream>
#include <stdexcept>
#include <limits>
#include <vector>
#include <string>
#include <sstream>
#include <iomanip>
#include <set>

#include "flash.hpp"
#include "memory.hpp"
#include "alu.hpp"
#include "symbol_table.hpp"
#include "port0.hpp"
#include "port1.hpp"
#include "port2.hpp"
#include "pca.hpp"
#include "system.hpp"
#include "uart.hpp"
#include "adc.hpp"
#include "timer.hpp"

class Cpu8051Callbacks
{
  public:
    virtual void OnInstructionExecuted(Cpu8051 &handler) = 0;
    virtual bool OnGPIORead(Cpu8051 &handler, std::uint8_t port, std::uint8_t bit) = 0;
    virtual void OnGPIOWrite(Cpu8051 &handler, std::uint8_t port, std::uint8_t bit, bool value) = 0;
};

class Cpu8051
{
  public:
    Cpu8051();
    void Reset();

    std::set<Block*> blocks;
    std::set<std::uint16_t> breakpoints;

    Alu alu;
    Flash flash;
    Port0 port0;
    Port1 port1;
    Port2 port2;
    Pca pca;
    System system;
    Uart uart;
    Adc adc;
    Timer timer;
};

#endif
