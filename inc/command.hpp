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

#ifndef _COMMAND_HPP
#define _COMMAND_HPP

#include <iostream>
#include <stdexcept>
#include <vector>
#include <string>
#include <sstream>
#include <iomanip>
#include <set>

#include "cpu8051.hpp"

class Command : public Cpu8051Callbacks
{
  public:
    Command();
    virtual void OnInstructionExecuted(Cpu8051 &handler);
    virtual bool OnGPIORead(Cpu8051 &handler, std::uint8_t port, std::uint8_t bit);
    virtual void OnGPIOWrite(Cpu8051 &handler, std::uint8_t port, std::uint8_t bit, bool value);
    virtual bool executeCommand(Cpu8051 &handler, std::vector<std::string>& tokens) = 0;
    static bool dispatchCommand(Cpu8051 &handler, std::vector<std::string>& tokens);
  protected:
    int instructionCount;
    int instructionLimit;
    int breakCount;
    int breakLimit;

    static std::set<Command*> commands;
};

class BlockCommand : public Command
{
  public:
    BlockCommand();
    bool executeCommand(Cpu8051& handler, std::vector<std::string>& tokens);
};

class BreakCommand : public Command
{
  public:
    BreakCommand();
    bool executeCommand(Cpu8051& handler, std::vector<std::string>& tokens);
};

class TraceCommand : public Command
{
  public:
    TraceCommand();
    bool executeCommand(Cpu8051& handler, std::vector<std::string>& tokens);
};

class MiscCommand : public Command
{
  public:
    MiscCommand();
    bool executeCommand(Cpu8051& handler, std::vector<std::string>& tokens);
    virtual void OnInstructionExecuted(Cpu8051 &handler);
    virtual bool OnGPIORead(Cpu8051 &handler, std::uint8_t port, std::uint8_t bit);
    virtual void OnGPIOWrite(Cpu8051 &handler, std::uint8_t port, std::uint8_t bit, bool value);
};

#endif
