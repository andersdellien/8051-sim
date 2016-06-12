#include <cstdint>
#include "instruction.hpp"

Instruction::Instruction(Alu& a, std::uint8_t o, std::uint8_t r) : alu(a), opcode(o), reg(r)
{
}

Instruction::Instruction(Alu& a, std::uint8_t o) : alu(a), opcode(o)
{
}

Instruction::Instruction(Alu& a) : alu(a), opcode(0)
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

void Instruction::IncPC() const
{
  alu.SetPC(alu.GetPC() + 1 + operands);
}
