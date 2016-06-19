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
  alu.SetFlash(&flash);
}


void Cpu8051::Reset()
{
  for (std::set<Block*>::iterator i = blocks.begin(); i != blocks.end(); i++)
  {
    (*i)->Reset();
  }
}
