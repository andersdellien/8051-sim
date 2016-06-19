#include "cpu8051.hpp"

Cpu8051::Cpu8051() :
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
  alu.SetFlash(&flash);
}

void Cpu8051::OnGPIOWrite(std::uint8_t port, std::uint8_t bit, bool value)
{
  std::cout << "Write " << value << " to port " << (int) port << " bit " << (int) bit << std::endl;
}

bool Cpu8051::OnGPIORead(std::uint8_t port, std::uint8_t bit)
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

void Cpu8051::OnInstructionExecuted()
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

void Cpu8051::Reset()
{
  for (std::set<Block*>::iterator i = blocks.begin(); i != blocks.end(); i++)
  {
    (*i)->Reset();
  }
}
