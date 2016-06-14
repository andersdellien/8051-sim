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

class CommandHandler: public UcCallbacks
{
  public:
    CommandHandler();
    void CommandLoop();
    void OnInstructionExecuted();
    void Reset();
  private:
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
    std::set<Block*> blocks;
    int instructionCount;
    int instructionLimit;
    int breakCount;
    int breakLimit;
};

CommandHandler::CommandHandler() :
  alu(1024, 256),
  flash(alu, 8192),
  port0(alu),
  port1(alu),
  port2(alu),
  pca(alu),
  system(alu),
  uart(alu),
  adc(alu),
  timer(alu)
{
  blocks.insert(&alu);
  blocks.insert(&flash);
  blocks.insert(&port0);
  blocks.insert(&port1);
  blocks.insert(&port2);
  blocks.insert(&pca);
  blocks.insert(&system);
  blocks.insert(&uart);
  blocks.insert(&adc);
  blocks.insert(&timer);
  alu.RegisterCallback(this);
}

void CommandHandler::OnInstructionExecuted()
{
  instructionCount++;
  if (breakpoints.find(alu.GetPC()) != breakpoints.end())
  {
     breakCount++;
  }
  if (breakCount == breakLimit)
  {
    std::cout << "break at " << std::hex << alu.GetPC() << std::endl;
  }
  if (traceInstruction.find(alu.flash->Get(alu.GetPC())) != traceInstruction.end() ||
      breakCount == breakLimit || instructionCount == instructionLimit)
  {
    std::cout << std::hex << std::setw(4) << std::setfill('0') << alu.GetPC() << " " << alu.Disassemble(alu.GetPC()) << std::endl;
  }
}

void CommandHandler::Reset()
{
  for (std::set<Block*>::iterator i = blocks.begin(); i != blocks.end(); i++)
  {
    (*i)->Reset();
  }
}

void CommandHandler::CommandLoop()
{

  alu.SetFlash(&flash);
  Reset();
  while (1)
  {
    std::string line;
    std::getline(std::cin, line);
    std::stringstream ss(line);
    std::vector<std::string> tokens;
    std::string token;
    while (std::getline(ss, token, ' '))
    {
      tokens.push_back(token);
    }
    if (tokens[0] == "break")
    {
      if (tokens[1] == "list")
      {
        for (std::set<std::uint16_t>::iterator i = breakpoints.begin();
             i != breakpoints.end();
             i++)
        {
          std::cout << std::hex << *i << std::endl;
        }
      }
      else if (tokens[1] == "clear")
      {
        breakpoints.clear();
      }
      else if (tokens[1] == "set")
      {
        breakpoints.insert(stoi(tokens[2], nullptr, 16));
      }
    }
    else if (tokens[0] == "trace")
    {
      if (tokens[1] == "sfr")
      {
        if (tokens[2] == "on")
        {
          alu.SetTraceSfr(true);
        }
        else if (tokens[2] == "off")
        {
          alu.SetTraceSfr(false);
        }
      }
      else if (tokens[1] == "all")
      {
        for (std::uint16_t i = 0x00; i <= 0x255; i++)
        {
          traceInstruction.insert((uint8_t) i);
        }
      }
      else if (tokens[1] == "none")
      {
        traceInstruction.clear();
      }
      else
      {
        traceInstruction.insert(stoi(tokens[1], nullptr, 16));
      }
    }
    else if (tokens[0] == "reset")
    {
      Reset();
    }
    else if (tokens[0] == "reg")
    {
      std::cout << std::hex << "PC:" << std::setw(4) << (int) alu.GetPC();
      std::cout << " SP:" << std::setw(2) << (int) alu.GetSP();
      std::cout << " A:" << std::setw(2) << (int) alu.GetA();
      std::cout << " DPTR:" << std::setw(4) << (int) alu.GetDPTR() << std::endl;
      std::cout << "R0:" << std::setw(2) << (int) alu.GetR0() << " ";
      std::cout << "R1:" << std::setw(2) << (int) alu.GetR1() << " ";
      std::cout << "R2:" << std::setw(2) << (int) alu.GetR2() << " ";
      std::cout << "R3:" << std::setw(2) << (int) alu.GetR3() << " ";
      std::cout << "R4:" << std::setw(2) << (int) alu.GetR4() << " ";
      std::cout << "R5:" << std::setw(2) << (int) alu.GetR5() << " ";
      std::cout << "R6:" << std::setw(2) << (int) alu.GetR6() << " ";
      std::cout << "R7:" << std::setw(2) << (int) alu.GetR7();
      std::cout << std::endl;
    }
    else if (tokens[0] == "step")
    {
      instructionLimit = 1;
      breakLimit = -1;
      instructionCount = 0;
      breakCount = 0;
      if (tokens.size() > 1)
      {
        instructionLimit = stoi(tokens[1], nullptr, 16);
      }
      while (instructionCount != instructionLimit)
      {
        int smallestTick = std::numeric_limits<int>::max();
        for (std::set<Block*>::iterator i = blocks.begin(); i != blocks.end(); i++)
        {
          if ((*i)->GetRemainingTicks() < smallestTick)
          {
            smallestTick = (*i)->GetRemainingTicks();
          }
        }
        if (smallestTick == std::numeric_limits<int>::max())
        {
          throw new std::runtime_error("No next event");
        }
        for (std::set<Block*>::iterator i = blocks.begin(); i != blocks.end(); i++)
        {
          (*i)->Tick(smallestTick);
        }
      }
    }
    else if (tokens[0] == "go")
    {
      instructionLimit = -1;
      breakLimit = 1;
      instructionCount = 0;
      breakCount = 0;
      if (tokens.size() > 1)
      {
        breakLimit = stoi(tokens[1], nullptr, 16);
      }
      while (breakCount != breakLimit)
      {
        int smallestTick = std::numeric_limits<int>::max();
        for (std::set<Block*>::iterator i = blocks.begin(); i != blocks.end(); i++)
        {
          if ((*i)->GetRemainingTicks() < smallestTick)
          {
            smallestTick = (*i)->GetRemainingTicks();
          }
        }
        if (smallestTick == std::numeric_limits<int>::max())
        {
          throw new std::runtime_error("No next event");
        }
        for (std::set<Block*>::iterator i = blocks.begin(); i != blocks.end(); i++)
        {
          (*i)->Tick(smallestTick);
        }
      }
    }
    else if (tokens[0] == "loadsym")
    {
      SymbolTable::GetInstance()->ParseFile(tokens[1]);
    }
    else if (tokens[0] == "loadfile")
    {
      flash.ParseHex(tokens[1]);
    }
    else if (tokens[0] == "disassemble")
    {
      std::uint16_t address = stoi(tokens[1], nullptr, 16);
      std::uint16_t length = stoi(tokens[2], nullptr, 16);
      std::uint16_t limit = address + length;
      while (address <= limit)
      {
        std::cout << alu.Disassemble(address) << std::endl;
        address += 1 + alu.GetOperands(address);
      }
    }
    else if (tokens[0] == "flash" || tokens[0] == "iram")
    {
      std::uint16_t address = stoi(tokens[1], nullptr, 16);
      std::uint16_t length = stoi(tokens[2], nullptr, 16);
      bool newline = false;
      Memory *mem;
      if (tokens[0] == "flash")
      {
        mem = &flash;
      }
      else
      {
        mem = &alu.iram;
      }
      for (int i = 0; i < length; i++)
      {
        const int itemsPerLine = 16;
        if (i % itemsPerLine == 0)
        {
          std::cout << address + i << " ";
        }
        std::cout << (int) mem->Get(address + i);
        if (i % itemsPerLine == itemsPerLine - 1)
        {
          std::cout << std::endl;
          newline = true;
        }
        else
        {
          std::cout << ' ';
          newline = false;
        }
      }
      if (!newline)
      {
        std::cout << std::endl;
      }
    }
  }
}

int main(int argc, char **argv)
{
  CommandHandler commandHandler;

  commandHandler.CommandLoop();
}
