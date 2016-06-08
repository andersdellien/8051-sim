#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <iomanip>
#include "flash.hpp"
#include "memory.hpp"
#include "alu.hpp"
#include "symbol_table.hpp"
#include "port2.hpp"

int main(int argc, char **argv)
{
  Flash flash(8192);
  Memory xram(1024);
  Alu alu(flash, xram, 256);
  Port2 port2(alu);

  alu.Reset();
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
    if (tokens[0] == "reset")
    {
      alu.Reset();
    } else if (tokens[0] == "reg")
    {
      std::cout << std::hex << "PC:" << (int) alu.GetPC() << " SP:" << (int) alu.GetSP() << " A:" << (int) alu.GetA();
      std::cout << "R0:" << (int) alu.GetR0() << " ";
      std::cout << "R1:" << (int) alu.GetR1() << " ";
      std::cout << "R2:" << (int) alu.GetR2() << " ";
      std::cout << "R3:" << (int) alu.GetR3() << " ";
      std::cout << "R4:" << (int) alu.GetR4() << " ";
      std::cout << "R5:" << (int) alu.GetR5() << " ";
      std::cout << "R6:" << (int) alu.GetR6() << " ";
      std::cout << "R7:" << (int) alu.GetR7();
      std::cout << std::endl;
    }
    else if (tokens[0] == "step")
    {
      int limit = 1;
      if (tokens.size() > 1)
      {
        limit = stoi(tokens[1], nullptr, 16);
      }
      for (int i = 0; i < limit; i++)
      {
        std::cout << std::hex << std::setw(4) << std::setfill('0') << alu.GetPC() << " " << alu.Disassemble(alu.GetPC()) << std::endl;
        alu.Step();
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
    else if (tokens[0] == "flash")
    {
      std::uint16_t address = stoi(tokens[1], nullptr, 16);
      std::uint16_t length = stoi(tokens[2], nullptr, 16);
      bool newline = false;
      Memory *mem = &flash;
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
