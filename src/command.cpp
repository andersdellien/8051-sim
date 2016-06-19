#include "command.hpp"

std::set<Command*> Command::commands;

Command::Command()
{
  commands.insert(this);
}

bool Command::dispatchCommand(CommandHandler &handler, std::vector<std::string>& tokens)
{
  int cmdHandled = 0;

  for (std::set<Command*>::iterator i = commands.begin(); i != commands.end(); i++)
  {
    cmdHandled |= (*i)->executeCommand(handler, tokens);
  }

  if (!cmdHandled)
  {
    std::cout << "Command not recognized" << std::endl;
  }

  return cmdHandled;
}

BlockCommand::BlockCommand() : Command() {}

bool BlockCommand::executeCommand(CommandHandler& handler, std::vector<std::string>& tokens)
{
  bool retVal = false;

  if (tokens[0] == "block")
  {
    retVal = true;
    for (std::set<Block*>::iterator i = handler.blocks.begin(); i != handler.blocks.end(); i++)
    {
      int t = (*i)->GetRemainingTicks();
      std::cout << (*i)->GetName();
      if (t < std::numeric_limits<int>::max())
      {
        std::cout << " " << (*i)->GetRemainingTicks() << std::endl;
      }
      else
      {
        std::cout << " idle" << std::endl;
      }
    }
  }

  return retVal;
}

BreakCommand::BreakCommand() : Command() {}

bool BreakCommand::executeCommand(CommandHandler& handler, std::vector<std::string>& tokens)
{
  bool retVal = false;

  if (tokens[0] == "break") {
    if (tokens[1] == "list")
    {
      for (std::set<std::uint16_t>::iterator i = handler.breakpoints.begin();
           i != handler.breakpoints.end();
           i++)
      {
        std::cout << std::hex << *i << std::endl;
      }
    }
    else if (tokens[1] == "clear")
    {
      handler.breakpoints.clear();
    }
    else if (tokens[1] == "set")
    {
      handler.breakpoints.insert(stoi(tokens[2], nullptr, 16));
    }
  }

  return retVal;
}

TraceCommand::TraceCommand() : Command() {}

bool TraceCommand::executeCommand(CommandHandler& handler, std::vector<std::string>& tokens)
{
  bool retVal = false;

  if (tokens[0] == "trace")
  {
    if (tokens[1] == "sfr")
    {
      if (tokens[2] == "on")
      {
        handler.alu.SetTraceSfr(true);
      }
      else if (tokens[2] == "off")
      {
        handler.alu.SetTraceSfr(false);
      }
    }
    else if (tokens[1] == "all")
    {
      for (std::uint16_t i = 0x00; i <= 0x255; i++)
      {
        handler.traceInstruction.insert((uint8_t) i);
      }
    }
    else if (tokens[1] == "none")
    {
      handler.traceInstruction.clear();
    }
    else
    {
      handler.traceInstruction.insert(stoi(tokens[1], nullptr, 16));
    }
  }
  return retVal;
}

MiscCommand::MiscCommand() : Command() {}

bool MiscCommand::executeCommand(CommandHandler& handler, std::vector<std::string>& tokens)
{
  bool retVal = false;

  if (tokens[0] == "uart")
  {
    retVal = true;
    if (tokens[1] == "rx")
    {
      handler.uart.SimulateRx(tokens[2][0]);
    }
  }
  else if (tokens[0] == "reset")
  {
    retVal = true;
    handler.Reset();
  }
  else if (tokens[0] == "reg")
  {
    retVal = true;
    std::cout << std::hex << "PC:" << std::setw(4) << (int) handler.alu.GetPC();
    std::cout << " SP:" << std::setw(2) << (int) handler.alu.GetSP();
    std::cout << " A:" << std::setw(2) << (int) handler.alu.GetA();
    std::cout << " DPTR:" << std::setw(4) << (int) handler.alu.GetDPTR() << std::endl;
    for (int i = 0; i < 8; i++)
    {
      std::cout << "R" << i << ":" << std::setw(2) << (int) handler.alu.GetReg(i) << " ";
    }
    std::cout << std::endl;
  }
  else if (tokens[0] == "step")
  {
    retVal = true;
    handler.instructionLimit = 1;
    handler.breakLimit = -1;
    handler.instructionCount = 0;
    handler.breakCount = 0;
    if (tokens.size() > 1)
    {
      handler.instructionLimit = stoi(tokens[1], nullptr, 16);
    }
    while (handler.instructionCount != handler.instructionLimit)
    {
      int smallestTick = std::numeric_limits<int>::max();
      for (std::set<Block*>::iterator i = handler.blocks.begin(); i != handler.blocks.end(); i++)
      {
        if ((*i)->GetRemainingTicks() < smallestTick)
        {
          smallestTick = (*i)->GetRemainingTicks();
        }
      }
      if (smallestTick == 0 || smallestTick == std::numeric_limits<int>::max())
      {
        throw new std::runtime_error("No next event");
      }
      for (std::set<Block*>::iterator i = handler.blocks.begin(); i != handler.blocks.end(); i++)
      {
        (*i)->Tick(smallestTick);
      }
    }
  }
  else if (tokens[0] == "go")
  {
    retVal = true;
    handler.instructionLimit = -1;
    handler.breakLimit = 1;
    handler.instructionCount = 0;
    handler.breakCount = 0;
    if (tokens.size() > 1)
    {
      handler.breakLimit = stoi(tokens[1], nullptr, 16);
    }
    while (handler.breakCount != handler.breakLimit)
    {
      int smallestTick = std::numeric_limits<int>::max();
      for (std::set<Block*>::iterator i = handler.blocks.begin(); i != handler.blocks.end(); i++)
      {
        if ((*i)->GetRemainingTicks() < smallestTick)
        {
          smallestTick = (*i)->GetRemainingTicks();
        }
      }
      if (smallestTick == 0 || smallestTick == std::numeric_limits<int>::max())
      {
        throw new std::runtime_error("No next event");
      }
      for (std::set<Block*>::iterator i = handler.blocks.begin(); i != handler.blocks.end(); i++)
      {
        (*i)->Tick(smallestTick);
      }
    }
  }
  else if (tokens[0] == "load")
  {
    retVal = true;
    std::string hex = "hex";
    std::string sym = "rst";
    if (tokens[1].rfind(hex) + hex.length() == tokens[1].length())
    {
      handler.flash.ParseHex(tokens[1]);
    }
    else if (tokens[1].rfind(sym) + sym.length() == tokens[1].length())
    {
      SymbolTable::GetInstance()->ParseFile(tokens[1]);
    }
    else
    {
      std::cout << "Unknown file " << tokens[1] << std::endl;
    }
  }
  else if (tokens[0] == "disassemble")
  {
    retVal = true;
    std::uint16_t address = stoi(tokens[1], nullptr, 16);
    std::uint16_t length = stoi(tokens[2], nullptr, 16);
    std::uint16_t limit = address + length;
    while (address <= limit)
    {
      std::cout << handler.alu.Disassemble(address) << std::endl;
      address += 1 + handler.alu.GetOperands(address);
    }
  }
  else if (tokens[0] == "flash" || tokens[0] == "iram")
  {
    retVal = true;
    std::uint16_t address = stoi(tokens[1], nullptr, 16);
    std::uint16_t length = stoi(tokens[2], nullptr, 16);
    bool newline = false;
    Memory *mem;
    if (tokens[0] == "flash")
    {
      mem = &handler.flash;
    }
    else
    {
      mem = &handler.alu.iram;
    }
    for (int i = 0; i < length; i++)
    {
      const int itemsPerLine = 16;
      if (i % itemsPerLine == 0)
      {
        std::cout << std::hex << std::setfill('0') << std::setw(4) << address + i << " ";
      }
      std::cout << std::hex << std::setw(2) << (int) mem->Get(address + i);
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

  return retVal;
}
