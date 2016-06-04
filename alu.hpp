#ifndef _ALU_HPP
#define _ALU_HPP

#include <cstdint>
#include <map>
#include <string>
#include "flash.hpp"

class Instruction;

class Alu
{
  public:
    std::string Disassemble(std::uint16_t address);
    std::uint8_t GetOperands(std::uint16_t address);
    Alu(Flash &f);
  private:
    std::map<std::uint8_t, Instruction*> instructionSet;
    Flash &flash;
};

#endif
