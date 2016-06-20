#include "command.hpp"

std::set<Command*> Command::commands;

Command::Command()
{
  commands.insert(this);
}

void Command::OnInstructionExecuted(Cpu8051 &handler) {}
bool Command::OnGPIORead(Cpu8051 &handler, std::uint8_t port, std::uint8_t bit) { return false; }
void Command::OnGPIOWrite(Cpu8051 &handler, std::uint8_t port, std::uint8_t bit, bool value) {}

bool Command::dispatchCommand(Cpu8051 &handler, std::vector<std::string>& tokens)
{
  bool cmdHandled = true;

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

bool BlockCommand::executeCommand(Cpu8051& handler, std::vector<std::string>& tokens)
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

bool BreakCommand::executeCommand(Cpu8051& handler, std::vector<std::string>& tokens)
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

bool TraceCommand::executeCommand(Cpu8051& handler, std::vector<std::string>& tokens)
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
  return retVal;
}

MiscCommand::MiscCommand() : Command() {}

bool MiscCommand::executeCommand(Cpu8051& handler, std::vector<std::string>& tokens)
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

void MiscCommand::OnGPIOWrite(Cpu8051 &handler, std::uint8_t port, std::uint8_t bit, bool value)
{
  std::cout << "Write " << value << " to port " << (int) port << " bit " << (int) bit << std::endl;
}

bool MiscCommand::OnGPIORead(Cpu8051 &handler, std::uint8_t port, std::uint8_t bit)
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

void MiscCommand::OnInstructionExecuted(Cpu8051 &handler)
{
  instructionCount++;
  if (handler.breakpoints.find(handler.alu.GetPC()) != handler.breakpoints.end())
  {
     breakCount++;
  }
  if (breakCount == breakLimit)
  {
    std::cout << "break at " << std::hex << handler.alu.GetPC() << std::endl;
  }
  if (traceInstruction.find(handler.alu.flash->Get(handler.alu.GetPC())) != traceInstruction.end() ||
      breakCount == breakLimit || instructionLimit > 0)
  {
    std::cout << std::hex << std::setw(4) << std::setfill('0') << handler.alu.GetPC() << " " << handler.alu.Disassemble(handler.alu.GetPC()) << std::endl;
  }
}