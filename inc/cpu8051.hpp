/*
 * Copyright (C) 2016 Sensative AB
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

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
#include <queue>

#include "alu.hpp"
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

typedef std::pair<int,char> ExternalEvent;

class Cpu8051
{
  public:
    Cpu8051();
    void Reset();
    void Tick();
    int GetTicks();
    void InjectEvent(int deltaTicks, char c);
    std::set<Block*> blocks;
    std::set<std::uint16_t> breakpoints;

    Alu alu;
    Port0 port0;
    Port1 port1;
    Port2 port2;
    Pca pca;
    System system;
    Uart uart;
    Adc adc;
    Timer timer;
  private:
    std::priority_queue<ExternalEvent, std::vector<ExternalEvent>, std::greater<ExternalEvent> > externalEvents;
    int ticks;
};

#endif
