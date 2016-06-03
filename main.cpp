#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include "flash.hpp"
#include "memory.hpp"

int main(int argc, char **argv)
{
  Flash flash(8192);
  Memory ram(256);

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
    if (tokens[0] == "loadfile")
    {
      flash.ParseHex(tokens[1]);
    }
    else if (tokens[0] == "ram" || tokens[0] == "flash")
    {
      std::uint16_t address = stoi(tokens[1], nullptr, 16);
      std::uint16_t length = stoi(tokens[2], nullptr, 16);
      bool newline = false;
      Memory *mem;
      if (tokens[0] == "ram")
      {
        mem = &ram;
      }
      else if (tokens[0] == "flash")
      {
        mem = &flash;
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
