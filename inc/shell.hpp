#ifndef _SHELL_HPP
#define _SHELL_HPP

#include "cpu8051.hpp"
#include "command.hpp"

class Shell
{
  public:
    void CommandLoop();

    Cpu8051 cpu;

    BlockCommand blockCommand;
    BreakCommand breakCommand;
    TraceCommand traceCommand;
    MiscCommand miscCommand;
};

#endif
