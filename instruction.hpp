#ifndef _INSTRUCTION_HPP
#define _INSTRUCTION_HPP

#include <cstdint>
#include <string>
#include "memory.hpp"
#include "alu.hpp"

class Instruction
{
  protected:
    int operands;
    int opcode;
    Alu &alu;
  public:
    Instruction(Alu&);
    virtual std::string Disassemble(const Memory& memory, std::uint16_t address) const = 0;
    virtual void Execute() const;
    std::uint8_t GetOperands() const;
    std::uint8_t GetOpcode() const;
};

#endif
