#ifndef _COMMAND_HPP
#define _COMMAND_HPP

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
#include "uc.hpp"
#include "command.hpp"


class CommandHandler;

class Command
{
  public:
    Command(std::string command);
    virtual int executeCommand(CommandHandler& handler) = 0;
    static Command* findCommand(std::string command);

    std::string cmd;
  private:
    static std::set<Command*> commands;
};

class BlockCommand : public Command
{
  public:
    BlockCommand();
    int executeCommand(CommandHandler& handler);
};

class CommandHandler: public UcCallbacks
{
  public:
    CommandHandler();
    void CommandLoop();
    void Reset();
    void OnInstructionExecuted();
    bool OnGPIORead(std::uint8_t port, std::uint8_t bit);
    void OnGPIOWrite(std::uint8_t port, std::uint8_t bit, bool value);

    std::set<Block*> blocks;
  private:
    BlockCommand blockCommand;

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
    std::set<std::uint8_t> traceInstruction;
    std::set<std::uint16_t> breakpoints;
    int instructionCount;
    int instructionLimit;
    int breakCount;
    int breakLimit;
};

#endif
