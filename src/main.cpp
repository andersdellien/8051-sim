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

CommandHandler::CommandHandler() :
  blockCommand(),
  breakCommand(),

  alu("Alu", 1024, 256),
  flash("Flash", alu, 8192),
  port0("Port0", alu),
  port1("Port1", alu),
  port2("Port2", alu),
  pca("Pca", alu),
  system("System", alu),
  uart("Uart", alu),
  adc("Adc", alu),
  timer("Timer", alu)
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

void CommandHandler::OnGPIOWrite(std::uint8_t port, std::uint8_t bit, bool value)
{
  std::cout << "Write " << value << " to port " << (int) port << " bit " << (int) bit << std::endl;
}

bool CommandHandler::OnGPIORead(std::uint8_t port, std::uint8_t bit)
{
  std::string line;

  std::cout << "Read of GPIO port " << (int) port << " bit " << (int) bit << std::endl;
  std::getline(std::cin, line);

  if (line[0] == '1')
  {
    std::cout << "Logic high" << std::endl;
    return true;
  }
  else
  {
    std::cout << "Logic low" << std::endl;
    return false;
  }
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
      breakCount == breakLimit || instructionLimit > 0)
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
    std::vector<std::string> tokens;
    std::string token;
    std::string line;

    do
    {
      std::getline(std::cin, line);
      std::stringstream ss(line);
      while (std::getline(ss, token, ' '))
      {
        tokens.push_back(token);
      }
    }
    while(tokens.size() == 0);

    Command::dispatchCommand(*this, tokens);
  }
}

int main(int argc, char **argv)
{
  CommandHandler commandHandler;

  commandHandler.CommandLoop();
}
