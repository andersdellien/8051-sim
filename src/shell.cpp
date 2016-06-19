#include "shell.hpp"

void Shell::CommandLoop()
{
  cpu.alu.RegisterCallback(&miscCommand, &cpu);
  cpu.Reset();
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

    Command::dispatchCommand(cpu, tokens);
  }
}
