#include <cstdint>
#include "instruction.hpp"

Instruction::Instruction(Alu& a) : alu(a)
{
}

std::uint8_t Instruction::GetOpcode() const
{
  return opcode;
}

std::uint8_t Instruction::GetOperands() const
{
  return operands;
}

void Instruction::Execute() const
{
}
