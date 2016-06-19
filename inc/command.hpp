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
#include "cpu8051.hpp"

class Command
{
  public:
    Command();
    virtual bool executeCommand(Cpu8051 &handler, std::vector<std::string>& tokens) = 0;
    static bool dispatchCommand(Cpu8051 &handler, std::vector<std::string>& tokens);
  private:
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
};

#endif
