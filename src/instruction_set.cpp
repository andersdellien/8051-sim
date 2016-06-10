#include <string>
#include <sstream>
#include <iomanip>
#include "instruction.hpp"
#include "instruction_set.hpp"
#include "symbol_table.hpp"
#include "exceptions.hpp"

static void PrintAddress(std::stringstream &ss, std::uint8_t address)
{
  bool found;
  std::string name;

  SymbolTable::GetInstance()->LookupAddress(address, name, found);
  if (found)
  {
    ss << name;
  }
  else
  {
    ss << std::setw(2) << (int) address;
  }
}

static void PrintAddress(std::stringstream &ss, std::uint16_t address)
{
  bool found;
  std::string name;

  SymbolTable::GetInstance()->LookupAddress(address, name, found);
  if (found)
  {
    ss << name;
  }
  else
  {
    ss << std::setw(4) << (int) address;
  }
}

INC_7::INC_7(Alu &a) : Instruction(a)
{
  opcode = 7;
  operands = 0;
}

std::string INC_7::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "INC @R0";
}

ACALL_11::ACALL_11(Alu &a) : Instruction(a)
{
  opcode = 0x11;
  operands = 1;
}

std::string ACALL_11::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "ACALL ";
  ss << (int) memory.Get(address+1);
  return ss.str();
}

ACALL_31::ACALL_31(Alu &a) : Instruction(a)
{
  opcode = 0x31;
  operands = 0;
}

std::string ACALL_31::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "ACALL ";
  ss << (int) memory.Get(address+1);
  return ss.str();
}
ACALL_51::ACALL_51(Alu &a) : Instruction(a)
{
  opcode = 0x51;
  operands = 0;
}

std::string ACALL_51::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "ACALL ";
  ss << (int) memory.Get(address+1);
  return ss.str();
}

ACALL_71::ACALL_71(Alu &a) : Instruction(a)
{
  opcode = 0x71;
  operands = 0;
}

std::string ACALL_71::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "ACALL ";
  ss << (int) memory.Get(address+1);
  return ss.str();
}

ACALL_91::ACALL_91(Alu &a) : Instruction(a)
{
  opcode = 0x91;
  operands = 0;
}

std::string ACALL_91::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "ACALL ";
  ss << (int) memory.Get(address+1);
  return ss.str();
}

ACALL_B1::ACALL_B1(Alu &a) : Instruction(a)
{
  opcode = 0xB1;
  operands = 0;
}

std::string ACALL_B1::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "ACALL ";
  ss << (int) memory.Get(address+1);
  return ss.str();
}

ACALL_D1::ACALL_D1(Alu &a) : Instruction(a)
{
  opcode = 0xD1;
  operands = 0;
}

std::string ACALL_D1::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "ACALL ";
  ss << (int) memory.Get(address+1);
  return ss.str();
}

ACALL_F1::ACALL_F1(Alu &a) : Instruction(a)
{
  opcode = 0xF1;
  operands = 0;
}

std::string ACALL_F1::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "ACALL ";
  ss << (int) memory.Get(address+1);
  return ss.str();
}

/* 0x24 and 0x34 */
AddImmediate::AddImmediate(Alu &a, std::uint8_t opcode, bool c) : AdditionHelper(a, opcode, c)
{
  operands = 1;
}

std::string AddImmediate::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "ADD A, #";
  ss << (int) memory.Get(address+1);
  return ss.str();
}

void AddImmediate::Execute() const
{
  Helper(alu.flash.Get(alu.GetPC() + 1));
  alu.SetPC(alu.GetPC() + 1 + operands);
}

AdditionHelper::AdditionHelper(Alu &alu, std::uint8_t opcode, bool c): Instruction(alu, opcode), carry(c)
{
}

void AdditionHelper::Helper(std::uint16_t data) const
{ 
  if (carry && alu.GetC())
  {
    data++;
  }
 
  std::uint16_t result = data + alu.GetA();

  if (result > 255)
  {
    alu.SetC();
  }
  else
  {
    alu.ClrC();
  }

  result = (data & 0xf) + (alu.GetA() & 0xf);
  if (result > 0xf)
  {
    alu.SetAC();
  }
  else
  {
    alu.ClrAC();
  }

  std::int16_t signedResult = (int8_t) data + (int8_t) alu.GetA();
  if (signedResult > 127 || signedResult < -128)
  {
    alu.SetOV();
  }
  else
  {
    alu.ClrOV();
  }

  alu.SetA(data + alu.GetA());
}

/* 0x25 and 0x35 */
AddMemory::AddMemory(Alu &a, std::uint8_t opcode, bool c) : AdditionHelper(a, opcode, c)
{
  operands = 1;
}

std::string AddMemory::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "ADD A";
  if (carry)
  {
    ss << "C";
  }
  ss << ",";
  ss << (int) memory.Get(address+1);
  return ss.str();
}

void AddMemory::Execute() const
{
  Helper(alu.Read(alu.flash.Get(alu.GetPC() + 1)));
  alu.SetPC(alu.GetPC() + 1 + operands);
}

ADD_26::ADD_26(Alu &a) : Instruction(a)
{
  opcode = 0x26;
  operands = 0;
}

std::string ADD_26::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "ADD A, @R0";
}

ADD_27::ADD_27(Alu &a) : Instruction(a)
{
  opcode = 0x27;
  operands = 0;
}

std::string ADD_27::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "ADD A, @R1";
}

AddRegister::AddRegister(Alu &a, std::uint8_t r, std::uint8_t o, bool c) : AdditionHelper(a, r, o), carry(c)
{
  operands = 0;
}

std::string AddRegister::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << "ADD";
  if (carry)
  {
    ss << "C ";
  }
  ss << "A, R" << (int) reg;
  return ss.str();
}

void AddRegister::Execute() const
{
  std::uint16_t data = alu.GetReg(reg);

  Helper(data);
  alu.SetPC(alu.GetPC() + 1 + operands);
}

ADDC_36::ADDC_36(Alu &a) : Instruction(a)
{
  opcode = 0x36;
  operands = 0;
}

std::string ADDC_36::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "ADDC A, @R0";
}

ADDC_37::ADDC_37(Alu &a) : Instruction(a)
{
  opcode = 0x37;
  operands = 0;
}

std::string ADDC_37::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "ADDC A, @R1";
}

AJMP_1::AJMP_1(Alu &a) : Instruction(a)
{
  opcode = 1;
  operands = 1;
}

std::string AJMP_1::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "AJMP ";
  ss << (int) memory.Get(address+1);
  return ss.str();
}

AJMP_21::AJMP_21(Alu &a) : Instruction(a)
{
  opcode = 0x21;
  operands = 1;
}

std::string AJMP_21::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "AJMP ";
  ss << (int) memory.Get(address+1);
  return ss.str();
}

AJMP_41::AJMP_41(Alu &a) : Instruction(a)
{
  opcode = 0x41;
  operands = 1;
}

std::string AJMP_41::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "AJMP ";
  ss << (int) memory.Get(address+1);
  return ss.str();
}

AJMP_61::AJMP_61(Alu &a) : Instruction(a)
{
  opcode = 0x61;
  operands = 1;
}

std::string AJMP_61::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "AJMP ";
  ss << (int) memory.Get(address+1);
  return ss.str();
}

AJMP_81::AJMP_81(Alu &a) : Instruction(a)
{
  opcode = 0x81;
  operands = 1;
}

std::string AJMP_81::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "AJMP ";
  ss << (int) memory.Get(address+1);
  return ss.str();
}

AJMP_A1::AJMP_A1(Alu &a) : Instruction(a)
{
  opcode = 0xA1;
  operands = 1;
}

std::string AJMP_A1::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "AJMP ";
  ss << (int) memory.Get(address+1);
  return ss.str();
}

AJMP_C1::AJMP_C1(Alu &a) : Instruction(a)
{
  opcode = 0xC1;
  operands = 1;
}

std::string AJMP_C1::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "AJMP ";
  ss << (int) memory.Get(address+1);
  return ss.str();
}

AJMP_E1::AJMP_E1(Alu &a) : Instruction(a)
{
  opcode = 0xE1;
  operands = 1;
}

std::string AJMP_E1::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "AJMP ";
  ss << (int) memory.Get(address+1);
  return ss.str();
}

ANL_52::ANL_52(Alu &a) : Instruction(a)
{
  opcode = 0x52;
  operands = 1;
}

std::string ANL_52::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "ANL ";
  ss << (int) memory.Get(address+1) << ", A";
  return ss.str();
}

ANL_53::ANL_53(Alu &a) : Instruction(a)
{
  opcode = 0x53;
  operands = 2;
}

std::string ANL_53::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "ANL ";
  ss << (int) memory.Get(address+1) << " ,#" << (int) memory.Get(address+2);
  return ss.str();
}

void ANL_53::Execute() const
{
  std::uint8_t operand = alu.flash.Get(alu.GetPC() + 2);
  std::uint8_t addr = alu.flash.Get(alu.GetPC() + 1);

  alu.Write(addr, alu.Read(addr) & operand);
  alu.SetPC(alu.GetPC() + 1 + operands);
}

ANL_54::ANL_54(Alu &a) : Instruction(a)
{
  opcode = 0x54;
  operands = 1;
}

std::string ANL_54::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::hex;
  ss << "ANL A, #";
  ss << std::setw(2) << (int) memory.Get(address+1);
  return ss.str();
}

void ANL_54::Execute() const
{
  std::uint8_t operand = alu.flash.Get(alu.GetPC() + 1);
  alu.SetA(operand & alu.GetA());
  alu.SetPC(alu.GetPC() + 1 + operands);
}

ANL_55::ANL_55(Alu &a) : Instruction(a)
{
  opcode = 0x55;
  operands = 1;
}

std::string ANL_55::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::hex;
  ss << "ANL A,";
  ss << std::setw(2) << (int) memory.Get(address+1);
  return ss.str();
}

void ANL_55::Execute() const
{
  std::uint8_t address = alu.flash.Get(alu.GetPC() + 1);
  alu.SetA(alu.iram.Get(address) & alu.GetA());
  alu.SetPC(alu.GetPC() + 1 + operands);
}

ANL_56::ANL_56(Alu &a) : Instruction(a)
{
  opcode = 0x56;
  operands = 0;
}

std::string ANL_56::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "ANL A, @R0";
}

ANL_57::ANL_57(Alu &a) : Instruction(a)
{
  opcode = 0x57;
  operands = 0;
}

std::string ANL_57::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "ANL A, @R1";
}

ANL_58::ANL_58(Alu &a) : Instruction(a)
{
  opcode = 0x58;
  operands = 0;
}

std::string ANL_58::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "ANL A, R0";
}

void ANL_58::Execute() const
{
  alu.SetA(alu.GetR0() & alu.GetA());
  alu.SetPC(alu.GetPC() + 1 + operands);
}

ANL_59::ANL_59(Alu &a) : Instruction(a)
{
  opcode = 0x59;
  operands = 0;
}

std::string ANL_59::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "ANL A, R1";
}

void ANL_59::Execute() const
{
  alu.SetA(alu.GetR1() & alu.GetA());
  alu.SetPC(alu.GetPC() + 1 + operands);
}

ANL_5A::ANL_5A(Alu &a) : Instruction(a)
{
  opcode = 0x5A;
  operands = 0;
}

std::string ANL_5A::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "ANL A, R2";
}

void ANL_5A::Execute() const
{
  alu.SetA(alu.GetR0() & alu.GetA());
  alu.SetPC(alu.GetPC() + 1 + operands);
}

ANL_5B::ANL_5B(Alu &a) : Instruction(a)
{
  opcode = 0x5B;
  operands = 0;
}

std::string ANL_5B::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "ANL A, R3";
}

void ANL_5B::Execute() const
{
  alu.SetA(alu.GetR3() & alu.GetA());
  alu.SetPC(alu.GetPC() + 1 + operands);
}

ANL_5C::ANL_5C(Alu &a) : Instruction(a)
{
  opcode = 0x5C;
  operands = 0;
}

std::string ANL_5C::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "ANL A, R4";
}

void ANL_5C::Execute() const
{
  alu.SetA(alu.GetR4() & alu.GetA());
  alu.SetPC(alu.GetPC() + 1 + operands);
}

ANL_5D::ANL_5D(Alu &a) : Instruction(a)
{
  opcode = 0x5D;
  operands = 0;
}

std::string ANL_5D::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "ANL A, R5";
}

void ANL_5D::Execute() const
{
  alu.SetA(alu.GetR5() & alu.GetA());
  alu.SetPC(alu.GetPC() + 1 + operands);
}

ANL_5E::ANL_5E(Alu &a) : Instruction(a)
{
  opcode = 0x5E;
  operands = 0;
}

std::string ANL_5E::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "ANL A, R6";
}

void ANL_5E::Execute() const
{
  alu.SetA(alu.GetR6() & alu.GetA());
  alu.SetPC(alu.GetPC() + 1 + operands);
}

ANL_5F::ANL_5F(Alu &a) : Instruction(a)
{
  opcode = 0x5F;
  operands = 0;
}

std::string ANL_5F::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "ANL A, R7";
}

void ANL_5F::Execute() const
{
  alu.SetA(alu.GetR7() & alu.GetA());
  alu.SetPC(alu.GetPC() + 1 + operands);
}

ANL_82::ANL_82(Alu &a) : Instruction(a)
{
  opcode = 0x82;
  operands = 1;
}

std::string ANL_82::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "ANL C, ";
  ss << (int) memory.Get(address+1);
  return ss.str();
}

ANL_B0::ANL_B0(Alu &a) : Instruction(a)
{
  opcode = 0xB0;
  operands = 1;
}

std::string ANL_B0::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "ANL C, ";
  ss << (int) memory.Get(address+1);
  return ss.str();
}

CJNE_B4::CJNE_B4(Alu &a) : Instruction(a)
{
  opcode = 0xB4;
  operands = 2;
}

std::string CJNE_B4::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "CJNE A, #";
  ss << (int) memory.Get(address+1) << ", " << (int) memory.Get(address+2);
  return ss.str();
}

CJNE_B5::CJNE_B5(Alu &a) : Instruction(a)
{
  opcode = 0xB5;
  operands = 2;
}

std::string CJNE_B5::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "CJNE A, ";
  ss << (int) memory.Get(address+1) << ", " << (int) memory.Get(address+2);
  return ss.str();
}

void CJNE_B5::Execute() const
{
  std::uint8_t addr = alu.flash.Get(alu.GetPC() + 1);
  std::int8_t reladdr = alu.flash.Get(alu.GetPC() + 2);

  if (alu.GetA() != alu.Read(addr))
  {
    alu.SetPC(alu.GetPC() + 1 + operands + reladdr);
  }
  else
  {
    alu.SetPC(alu.GetPC() + 1 + operands);
  }

  if (alu.GetA() < alu.Read(addr))
  {
    alu.SetC();
  }
}

CJNE_B6::CJNE_B6(Alu &a) : Instruction(a)
{
  opcode = 0xB6;
  operands = 2;
}

std::string CJNE_B6::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::hex;
  ss << "CJNE @R0, #";
  ss << std::setw(2) << (int) memory.Get(address+1) << ", " << std::setw(2) << (int) memory.Get(address+2);
  return ss.str();
}

CJNE_B7::CJNE_B7(Alu &a) : Instruction(a)
{
  opcode = 0xB7;
  operands = 2;
}

std::string CJNE_B7::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "CJNE @R1, #";
  ss << (int) memory.Get(address+1) << ", " << (int) memory.Get(address+2);
  return ss.str();
}

CJNE_B8::CJNE_B8(Alu &a) : Instruction(a)
{
  opcode = 0xB8;
  operands = 2;
}

std::string CJNE_B8::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::hex;
  ss << "CJNE R0, #";
  ss << std::setw(2) << (int) memory.Get(address+1) << ", " << std::setw(2) << (int) memory.Get(address+2);
  return ss.str();
}

void CJNE_B8::Execute() const
{
  std::uint8_t operand = alu.flash.Get(alu.GetPC() + 1);
  std::int8_t reladdr = alu.flash.Get(alu.GetPC() + 2);

  if (alu.GetR0() != operand)
  {
    alu.SetPC(alu.GetPC() + 1 + operands + reladdr);
  }
  else
  {
    alu.SetPC(alu.GetPC() + 1 + operands);
  }

  if (alu.GetR0() < operand)
  {
    alu.SetC();
  }
}

CJNE_B9::CJNE_B9(Alu &a) : Instruction(a)
{
  opcode = 0xB9;
  operands = 2;
}

std::string CJNE_B9::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "CJNE R1, #";
  ss << std::setw(2) << (int) memory.Get(address+1) << ", " << std::setw(2) << (int) memory.Get(address+2);
  return ss.str();
}

void CJNE_B9::Execute() const
{
  std::uint8_t operand = alu.flash.Get(alu.GetPC() + 1);
  std::int8_t reladdr = alu.flash.Get(alu.GetPC() + 2);

  if (alu.GetR1() != operand)
  {
    alu.SetPC(alu.GetPC() + 1 + operands + reladdr);
  }
  else
  {
    alu.SetPC(alu.GetPC() + 1 + operands);
  }

  if (alu.GetR1() < operand)
  {
    alu.SetC();
  }
}

CJNE_BA::CJNE_BA(Alu &a) : Instruction(a)
{
  opcode = 0xBA;
  operands = 2;
}

std::string CJNE_BA::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "CJNE R2, #";
  ss << std::setw(2) << (int) memory.Get(address+1) << ", " << std::setw(2) << (int) memory.Get(address+2);
  return ss.str();
}

void CJNE_BA::Execute() const
{
  std::uint8_t operand = alu.flash.Get(alu.GetPC() + 1);
  std::int8_t reladdr = alu.flash.Get(alu.GetPC() + 2);

  if (alu.GetR2() != operand)
  {
    alu.SetPC(alu.GetPC() + 1 + operands + reladdr);
  }
  else
  {
    alu.SetPC(alu.GetPC() + 1 + operands);
  }

  if (alu.GetR2() < operand)
  {
    alu.SetC();
  }
}

CJNE_BB::CJNE_BB(Alu &a) : Instruction(a)
{
  opcode = 0xBB;
  operands = 2;
}

std::string CJNE_BB::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "CJNE ";
  ss << std::setw(2) << (int) memory.Get(address+1) << ", " << std::setw(2) << (int) memory.Get(address+2);
  return ss.str();
}

void CJNE_BB::Execute() const
{
  std::uint8_t operand = alu.flash.Get(alu.GetPC() + 1);
  std::int8_t reladdr = alu.flash.Get(alu.GetPC() + 2);

  if (alu.GetR3() != operand)
  {
    alu.SetPC(alu.GetPC() + 1 + operands + reladdr);
  }
  else
  {
    alu.SetPC(alu.GetPC() + 1 + operands);
  }

  if (alu.GetR3() < operand)
  {
    alu.SetC();
  }
}

CJNE_BC::CJNE_BC(Alu &a) : Instruction(a)
{
  opcode = 0xBC;
  operands = 2;
}

std::string CJNE_BC::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "CJNE R4, #";
  ss << std::setw(2) << (int) memory.Get(address+1) << ", " << std::setw(2) << (int) memory.Get(address+2);
  return ss.str();
}

void CJNE_BC::Execute() const
{
  std::uint8_t operand = alu.flash.Get(alu.GetPC() + 1);
  std::int8_t reladdr = alu.flash.Get(alu.GetPC() + 2);

  if (alu.GetR4() != operand)
  {
    alu.SetPC(alu.GetPC() + 1 + operands + reladdr);
  }
  else
  {
    alu.SetPC(alu.GetPC() + 1 + operands);
  }

  if (alu.GetR4() < operand)
  {
    alu.SetC();
  }
}

CJNE_BD::CJNE_BD(Alu &a) : Instruction(a)
{
  opcode = 0xBD;
  operands = 2;
}

std::string CJNE_BD::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "CJNE R5, #";
  ss << std::setw(2) << (int) memory.Get(address+1) << ", " << std::setw(2) << (int) memory.Get(address+2);
  return ss.str();
}

void CJNE_BD::Execute() const
{
  std::uint8_t operand = alu.flash.Get(alu.GetPC() + 1);
  std::int8_t reladdr = alu.flash.Get(alu.GetPC() + 2);

  if (alu.GetR5() != operand)
  {
    alu.SetPC(alu.GetPC() + 1 + operands + reladdr);
  }
  else
  {
    alu.SetPC(alu.GetPC() + 1 + operands);
  }

  if (alu.GetR5() < operand)
  {
    alu.SetC();
  }
}

CJNE_BE::CJNE_BE(Alu &a) : Instruction(a)
{
  opcode = 0xBE;
  operands = 2;
}

std::string CJNE_BE::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "CJNE R6, #";
  ss << std::setw(2) << (int) memory.Get(address+1) << ", " << std::setw(2) << (int) memory.Get(address+2);
  return ss.str();
}

void CJNE_BE::Execute() const
{
  std::uint8_t operand = alu.flash.Get(alu.GetPC() + 1);
  std::int8_t reladdr = alu.flash.Get(alu.GetPC() + 2);

  if (alu.GetR6() != operand)
  {
    alu.SetPC(alu.GetPC() + 1 + operands + reladdr);
  }
  else
  {
    alu.SetPC(alu.GetPC() + 1 + operands);
  }

  if (alu.GetR6() < operand)
  {
    alu.SetC();
  }
}

CJNE_BF::CJNE_BF(Alu &a) : Instruction(a)
{
  opcode = 0xBF;
  operands = 2;
}

std::string CJNE_BF::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "CJNE R7, #";
  ss << std::setw(2) << (int) memory.Get(address+1) << ", " << std::setw(2) << (int) memory.Get(address+2);
  return ss.str();
}

void CJNE_BF::Execute() const
{
  std::uint8_t operand = alu.flash.Get(alu.GetPC() + 1);
  std::int8_t reladdr = alu.flash.Get(alu.GetPC() + 2);

  if (alu.GetR7() != operand)
  {
    alu.SetPC(alu.GetPC() + 1 + operands + reladdr);
  }
  else
  {
    alu.SetPC(alu.GetPC() + 1 + operands);
  }

  if (alu.GetR7() < operand)
  {
    alu.SetC();
  }
}

CLR_C2::CLR_C2(Alu &a) : Instruction(a)
{
  opcode = 0xC2;
  operands = 1;
}

std::string CLR_C2::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::hex;
  ss << "CLR ";
  ss << std::setw(2) << (int) memory.Get(address+1);
  return ss.str();
}

void CLR_C2::Execute(void) const
{
  std::uint8_t bitAddr = alu.flash.Get(alu.GetPC() + 1);

  alu.WriteBit(bitAddr, false);
  alu.SetPC(alu.GetPC() + 1 + operands);
}

CLR_C3::CLR_C3(Alu &a) : Instruction(a)
{
  opcode = 0xC3;
  operands = 0;
}

std::string CLR_C3::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "CLR C";
}

void CLR_C3::Execute() const
{
  alu.ClrC();
  alu.SetPC(alu.GetPC() + 1 + operands);
}

CLR_E4::CLR_E4(Alu &a) : Instruction(a)
{
  opcode = 0xE4;
  operands = 0;
}

std::string CLR_E4::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "CLR A";
}

void CLR_E4::Execute(void) const
{
  alu.SetA(0);
  alu.SetPC(alu.GetPC() + 1 + operands);
}

CPL_F4::CPL_F4(Alu &a) : Instruction(a)
{
  opcode = 0xF4;
  operands = 0;
}

std::string CPL_F4::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "CPL A";
}

CPL_B3::CPL_B3(Alu &a) : Instruction(a)
{
  opcode = 0xB3;
  operands = 0;
}

std::string CPL_B3::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "CPL C";
}

void CPL_B3::Execute() const
{
  if (alu.GetC())
  {
    alu.ClrC();
  }
  else
  {
    alu.SetC();
  }
  alu.SetPC(alu.GetPC() + 1 + operands);
}

CPL_B2::CPL_B2(Alu &a) : Instruction(a)
{
  opcode = 0xB2;
  operands = 1;
}

std::string CPL_B2::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "CPL ";
  ss << memory.Get(address+1);
  return ss.str();
}

DA_D4::DA_D4(Alu &a) : Instruction(a)
{
  opcode = 0xD4;
  operands = 0;
}

std::string DA_D4::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "DA";
}

DEC_15::DEC_15(Alu &a) : Instruction(a)
{
  opcode = 0x15;
  operands = 1;
}

std::string DEC_15::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "DEC ";
  ss << memory.Get(address+1);
  return ss.str();
}

DEC_14::DEC_14(Alu &a) : Instruction(a)
{
  opcode = 0x14;
  operands = 0;
}

std::string DEC_14::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "DEC A";
}

void DEC_14::Execute() const
{
  alu.SetA(alu.GetA() + 1);
  alu.SetPC(alu.GetPC() + 1 + operands);
}

DEC_16::DEC_16(Alu &a) : Instruction(a)
{
  opcode = 0x16;
  operands = 0;
}

std::string DEC_16::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "DEC @R0";
}

DEC_17::DEC_17(Alu &a) : Instruction(a)
{
  opcode = 0x17;
  operands = 0;
}

std::string DEC_17::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "DEC @R1";
}

DEC_18::DEC_18(Alu &a) : Instruction(a)
{
  opcode = 0x18;
  operands = 0;
}

std::string DEC_18::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "DEC R0";
}

void DEC_18::Execute() const
{
  alu.SetR0(alu.GetR0() - 1);
  alu.SetPC(alu.GetPC() + 1 + operands);
}

DEC_19::DEC_19(Alu &a) : Instruction(a)
{
  opcode = 0x19;
  operands = 0;
}

std::string DEC_19::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "DEC R1";
}

void DEC_19::Execute() const
{
  alu.SetR1(alu.GetR1() - 1);
  alu.SetPC(alu.GetPC() + 1 + operands);
}

DEC_1A::DEC_1A(Alu &a) : Instruction(a)
{
  opcode = 0x1A;
  operands = 0;
}

std::string DEC_1A::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "DEC R2";
}

void DEC_1A::Execute() const
{
  alu.SetR2(alu.GetR2() - 1);
  alu.SetPC(alu.GetPC() + 1 + operands);
}

DEC_1B::DEC_1B(Alu &a) : Instruction(a)
{
  opcode = 0x1B;
  operands = 0;
}

std::string DEC_1B::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "DEC R3";
}

void DEC_1B::Execute() const
{
  alu.SetR3(alu.GetR3() - 1);
  alu.SetPC(alu.GetPC() + 1 + operands);
}

DEC_1C::DEC_1C(Alu &a) : Instruction(a)
{
  opcode = 0x1C;
  operands = 0;
}

std::string DEC_1C::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "DEC R4";
}

void DEC_1C::Execute() const
{
  alu.SetR4(alu.GetR4() - 1);
  alu.SetPC(alu.GetPC() + 1 + operands);
}

DEC_1D::DEC_1D(Alu &a) : Instruction(a)
{
  opcode = 0x1D;
  operands = 0;
}

std::string DEC_1D::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "DEC R5";
}

void DEC_1D::Execute() const
{
  alu.SetR5(alu.GetR5() - 1);
  alu.SetPC(alu.GetPC() + 1 + operands);
}

DEC_1E::DEC_1E(Alu &a) : Instruction(a)
{
  opcode = 0x1E;
  operands = 0;
}

std::string DEC_1E::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "DEC R6";
}

void DEC_1E::Execute() const
{
  alu.SetR6(alu.GetR6() - 1);
  alu.SetPC(alu.GetPC() + 1 + operands);
}

DEC_1F::DEC_1F(Alu &a) : Instruction(a)
{
  opcode = 0x1F;
  operands = 0;
}

std::string DEC_1F::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "DEC R7";
}

void DEC_1F::Execute() const
{
  alu.SetR7(alu.GetR7() - 1);
  alu.SetPC(alu.GetPC() + 1 + operands);
}

DIV_84::DIV_84(Alu &a) : Instruction(a)
{
  opcode = 0x84;
  operands = 0;
}

std::string DIV_84::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "DIV AB";
}

DJNZ_D5::DJNZ_D5(Alu &a) : Instruction(a)
{
  opcode = 0xD5;
  operands = 2;
}

std::string DJNZ_D5::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "DJNZ ";
  ss << memory.Get(address+1) << ", " << (int) memory.Get(address+2);
  return ss.str();
}

DJNZ_D8::DJNZ_D8(Alu &a) : Instruction(a)
{
  opcode = 0xD8;
  operands = 1;
}

std::string DJNZ_D8::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "DJNZ R0, ";
  ss << (int) memory.Get(address+1);
  return ss.str();
}

void DJNZ_D8::Execute() const
{
  std::int8_t reladdr = alu.flash.Get(alu.GetPC() + 1);

  alu.SetR0(alu.GetR0() - 1);

  if (alu.GetR0())
  {
    alu.SetPC(alu.GetPC() + 1 + operands + reladdr);
  }
  else
  {
    alu.SetPC(alu.GetPC() + 1 + operands);
  }
}

DJNZ_D9::DJNZ_D9(Alu &a) : Instruction(a)
{
  opcode = 0xD9;
  operands = 1;
}

std::string DJNZ_D9::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "DJNZ R1, ";
  ss << (int) memory.Get(address+1);
  return ss.str();
}

void DJNZ_D9::Execute() const
{
  std::int8_t reladdr = alu.flash.Get(alu.GetPC() + 1);

  alu.SetR1(alu.GetR1() - 1);

  if (alu.GetR1())
  {
    alu.SetPC(alu.GetPC() + 1 + operands + reladdr);
  }
  else
  {
    alu.SetPC(alu.GetPC() + 1 + operands);
  }
}

DJNZ_DA::DJNZ_DA(Alu &a) : Instruction(a)
{
  opcode = 0xDA;
  operands = 1;
}

std::string DJNZ_DA::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "DJNZ R2, ";
  ss << (int) memory.Get(address+1);
  return ss.str();
}

void DJNZ_DA::Execute() const
{
  std::int8_t reladdr = alu.flash.Get(alu.GetPC() + 1);

  alu.SetR2(alu.GetR2() - 1);

  if (alu.GetR2())
  {
    alu.SetPC(alu.GetPC() + 1 + operands + reladdr);
  }
  else
  {
    alu.SetPC(alu.GetPC() + 1 + operands);
  }
}

DJNZ_DB::DJNZ_DB(Alu &a) : Instruction(a)
{
  opcode = 0xDB;
  operands = 1;
}

std::string DJNZ_DB::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "DJNZ R3, ";
  ss << (int) memory.Get(address+1);
  return ss.str();
}

void DJNZ_DB::Execute() const
{
  std::int8_t reladdr = alu.flash.Get(alu.GetPC() + 1);

  alu.SetR3(alu.GetR3() - 1);

  if (alu.GetR3())
  {
    alu.SetPC(alu.GetPC() + 1 + operands + reladdr);
  }
  else
  {
    alu.SetPC(alu.GetPC() + 1 + operands);
  }
}

DJNZ_DC::DJNZ_DC(Alu &a) : Instruction(a)
{
  opcode = 0xDC;
  operands = 1;
}

std::string DJNZ_DC::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "DJNZ R4, ";
  ss << (int) memory.Get(address+1);
  return ss.str();
}

void DJNZ_DC::Execute() const
{
  std::int8_t reladdr = alu.flash.Get(alu.GetPC() + 1);

  alu.SetR4(alu.GetR4() - 1);

  if (alu.GetR4())
  {
    alu.SetPC(alu.GetPC() + 1 + operands + reladdr);
  }
  else
  {
    alu.SetPC(alu.GetPC() + 1 + operands);
  }
}

DJNZ_DD::DJNZ_DD(Alu &a) : Instruction(a)
{
  opcode = 0xDD;
  operands = 1;
}

std::string DJNZ_DD::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "DJNZ R5, ";
  ss << (int) memory.Get(address+1);
  return ss.str();
}

void DJNZ_DD::Execute() const
{
  std::int8_t reladdr = alu.flash.Get(alu.GetPC() + 1);

  alu.SetR5(alu.GetR5() - 1);

  if (alu.GetR5())
  {
    alu.SetPC(alu.GetPC() + 1 + operands + reladdr);
  }
  else
  {
    alu.SetPC(alu.GetPC() + 1 + operands);
  }
}

DJNZ_DE::DJNZ_DE(Alu &a) : Instruction(a)
{
  opcode = 0xDE;
  operands = 1;
}

std::string DJNZ_DE::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "DJNZ R6, r";
  ss << (int) memory.Get(address+1);
  return ss.str();
}

void DJNZ_DE::Execute() const
{
  std::int8_t reladdr = alu.flash.Get(alu.GetPC() + 1);

  alu.SetR6(alu.GetR6() - 1);

  if (alu.GetR6())
  {
    alu.SetPC(alu.GetPC() + 1 + operands + reladdr);
  }
  else
  {
    alu.SetPC(alu.GetPC() + 1 + operands);
  }
}

DJNZ_DF::DJNZ_DF(Alu &a) : Instruction(a)
{
  opcode = 0xDF;
  operands = 1;
}

std::string DJNZ_DF::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "DJNZ R7, ";
  ss << (int) memory.Get(address+1);
  return ss.str();
}

void DJNZ_DF::Execute() const
{
  std::int8_t reladdr = alu.flash.Get(alu.GetPC() + 1);

  alu.SetR7(alu.GetR7() - 1);

  if (alu.GetR7())
  {
    alu.SetPC(alu.GetPC() + 1 + operands + reladdr);
  }
  else
  {
    alu.SetPC(alu.GetPC() + 1 + operands);
  }
}

INC_5::INC_5(Alu &a) : Instruction(a)
{
  opcode = 5;
  operands = 1;
}

std::string INC_5::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "INC ";
  ss << (int) memory.Get(address+1);
  return ss.str();
}

void INC_5::Execute() const
{
  std::uint8_t address = alu.flash.Get(alu.GetPC() + 1);

  alu.Write(address, alu.Read(address) + 1);
  alu.SetPC(alu.GetPC() + 1 + operands);
}

INC_4::INC_4(Alu &a) : Instruction(a)
{
  opcode = 4;
  operands = 0;
}

std::string INC_4::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "INC A";
}

INC_6::INC_6(Alu &a) : Instruction(a)
{
  opcode = 6;
  operands = 0;
}

std::string INC_6::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "INC @R0";
}

IncRegister::IncRegister(Alu &a, std::uint8_t opcode, std::uint8_t r): Instruction(a, opcode), reg(r)
{
}

std::string IncRegister::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << "INC R" << (int) reg;
  return ss.str();
}

void IncRegister::Execute() const
{
  alu.SetReg(reg, alu.GetReg(reg) + 1);
  alu.SetPC(alu.GetPC() + 1 + operands);
}

INC_A3::INC_A3(Alu &a) : Instruction(a)
{
  opcode = 0xA3;
  operands = 0;
}

std::string INC_A3::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "INC DPTR";
}

void INC_A3::Execute() const
{
  alu.SetDPTR(alu.GetDPTR() + 1);
  alu.SetPC(alu.GetPC() + 1 + operands);
}

JB_20::JB_20(Alu &a) : Instruction(a)
{
  opcode = 0x20;
  operands = 2;
}

std::string JB_20::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "JB ";
  ss << (int) memory.Get(address+1) << ", " << (int) memory.Get(address+2);
  return ss.str();
}

void JB_20::Execute() const
{
  std::uint8_t bitAddr = alu.flash.Get(alu.GetPC() + 1);
  std::int8_t relAddr = alu.flash.Get(alu.GetPC() + 2);

  if (alu.ReadBit(bitAddr))
  {
    alu.SetPC(alu.GetPC() + 1 + operands + relAddr);
  }
  else
  {
    alu.SetPC(alu.GetPC() + 1 + operands);
  }
}

JBC_10::JBC_10(Alu &a) : Instruction(a)
{
  opcode = 0x10;
  operands = 2;
}

std::string JBC_10::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "JBC ";
  ss << (int) memory.Get(address+1) << ", " << (int) memory.Get(address+2);
  return ss.str();
}

JC_40::JC_40(Alu &a) : Instruction(a)
{
  opcode = 0x40;
  operands = 1;
}

std::string JC_40::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "JC ";
  ss << (int) memory.Get(address+1);
  return ss.str();
}

void JC_40::Execute() const
{
  if (alu.GetC())
  {
    std::int8_t reladdr = alu.flash.Get(alu.GetPC() + 1);
    alu.SetPC(alu.GetPC() + 1 + operands + reladdr);
  }
  else
  {
    alu.SetPC(alu.GetPC() + 1 + operands);
  }
}

JMP_73::JMP_73(Alu &a) : Instruction(a)
{
  opcode = 0x73;
  operands = 1;
}

std::string JMP_73::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "JMP ";
  ss << (int) memory.Get(address+1);
  return ss.str();
}

JNB_30::JNB_30(Alu &a) : Instruction(a)
{
  opcode = 0x30;
  operands = 2;
}

std::string JNB_30::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "JNB ";
  ss << (int) memory.Get(address+1) << ", " << (int) memory.Get(address+2);
  return ss.str();
}

void JNB_30::Execute() const
{
  std::uint8_t bitAddr = alu.flash.Get(alu.GetPC() + 1);
  std::int8_t relAddr = alu.flash.Get(alu.GetPC() + 2);

  if (!(alu.ReadBit(bitAddr)))
  {
    alu.SetPC(alu.GetPC() + 1 + operands + relAddr);
  }
  else
  {
    alu.SetPC(alu.GetPC() + 1 + operands);
  }
}

JNC_50::JNC_50(Alu &a) : Instruction(a)
{
  opcode = 0x50;
  operands = 1;
}

std::string JNC_50::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "JNC ";
  ss << (int) memory.Get(address+1);
  return ss.str();
}

void JNC_50::Execute() const
{
  if (!alu.GetC())
  {
    std::int8_t reladdr = alu.flash.Get(alu.GetPC() + 1);
    alu.SetPC(alu.GetPC() + 1 + operands + reladdr);
  }
  else
  {
    alu.SetPC(alu.GetPC() + 1 + operands);
  }
}

JNZ_70::JNZ_70(Alu &a) : Instruction(a)
{
  opcode = 0x70;
  operands = 1;
}

std::string JNZ_70::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "JNZ ";
  ss << (int) memory.Get(address+1);
  return ss.str();
}

void JNZ_70::Execute() const
{
  if (alu.GetA() != 0)
  {
    std::int8_t reladdr = alu.flash.Get(alu.GetPC() + 1);
    alu.SetPC(alu.GetPC() + 1 + operands + reladdr);
  }
  else
  {
    alu.SetPC(alu.GetPC() + 1 + operands);
  }
}

JZ_60::JZ_60(Alu &a) : Instruction(a)
{
  opcode = 0x60;
  operands = 1;
}

std::string JZ_60::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "JZ ";
  ss << (int) memory.Get(address+1);
  return ss.str();
}

void JZ_60::Execute() const
{
  if (alu.GetA() == 0)
  {
    std::int8_t reladdr = alu.flash.Get(alu.GetPC() + 1);
    alu.SetPC(alu.GetPC() + 1 + operands + reladdr);
  }
  else
  {
    alu.SetPC(alu.GetPC() + 1 + operands);
  }
}

LCALL_12::LCALL_12(Alu &a) : Instruction(a)
{
  opcode = 0x12;
  operands = 2;
}

std::string LCALL_12::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "LCALL ";
  PrintAddress(ss, (uint16_t) (memory.Get(address + 1) * 256 + memory.Get(address + 2)));
  return ss.str();
}

#include <iostream>

void LCALL_12::Execute() const
{
  std::uint8_t sp = alu.GetSP();
  std::uint8_t high = alu.flash.Get(alu.GetPC() + 1);
  std::uint8_t low = alu.flash.Get(alu.GetPC() + 2);

  alu.iram.Set(sp + 1, (alu.GetPC() + 3) % 256);
  alu.iram.Set(sp + 2, (alu.GetPC() + 3) / 256);
  alu.SetSP(sp + 2);

  alu.SetPC(low + 256 * high);
}

LJMP_2::LJMP_2(Alu &a) : Instruction(a)
{
  opcode = 0x2;
  operands = 2;
}

std::string LJMP_2::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::hex;
  ss << "LJMP ";
  PrintAddress(ss, (uint16_t) (memory.Get(address + 1) * 256 + memory.Get(address + 2)));
  return ss.str();
}

void LJMP_2::Execute() const
{
  alu.SetPC(256 * alu.flash.Get(alu.GetPC() + 1) + alu.flash.Get(alu.GetPC() + 2));
}

MOV_90::MOV_90(Alu &a) : Instruction(a)
{
  opcode = 0x90;
  operands = 2;
}

std::string MOV_90::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::hex;
  ss << "MOV DPTR, #";
  ss << std::setw(2) << (int) memory.Get(address+1);
  ss << std::setw(2) << (int) memory.Get(address+2);
  return ss.str();
}

void MOV_90::Execute() const
{
  alu.SetDPTR(alu.flash.Get(alu.GetPC() + 1) * 256 + alu.flash.Get(alu.GetPC() + 2));
  alu.SetPC(alu.GetPC() + 1 + operands);
}

MOV_75::MOV_75(Alu &a) : Instruction(a)
{
  opcode = 0x75;
  operands = 2;
}

std::string MOV_75::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;

  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "MOV ";
  PrintAddress(ss, memory.Get(address+1));
  ss << ", #" << std::setw(2) << (int) memory.Get(address+2);
  return ss.str();
}

void MOV_75::Execute() const
{
  std::uint8_t address = alu.flash.Get(alu.GetPC() + 1);
  std::uint8_t data = alu.flash.Get(alu.GetPC() + 2);

  alu.Write(address, data);
  alu.SetPC(alu.GetPC() + operands + 1);
}

MOV_85::MOV_85(Alu &a) : Instruction(a)
{
  opcode = 0x85;
  operands = 2;
}

std::string MOV_85::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "MOV ";
  ss << std::setw(2) << (int) memory.Get(address+1) << ", " << std::setw(2) << (int) memory.Get(address+2);
  return ss.str();
}

void MOV_85::Execute() const
{
  std::uint8_t data = alu.Read(alu.flash.Get(alu.GetPC() + 1));

  alu.Write(alu.flash.Get(alu.GetPC() + 2), data);
  alu.SetPC(alu.GetPC() + 1 + operands);
}

MOV_76::MOV_76(Alu &a) : Instruction(a)
{
  opcode = 0x76;
  operands = 1;
}

std::string MOV_76::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "MOV @R0, #";
  PrintAddress(ss, memory.Get(address+1));
  return ss.str();
}

MOV_77::MOV_77(Alu &a) : Instruction(a)
{
  opcode = 0x77;
  operands = 1;
}

std::string MOV_77::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "MOV @R1, #";
  PrintAddress(ss, memory.Get(address+1));
  return ss.str();
}

MOV_74::MOV_74(Alu &a) : Instruction(a)
{
  opcode = 0x74;
  operands = 1;
}

std::string MOV_74::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "MOV A, #";
  ss << (int) memory.Get(address+1);
  return ss.str();
}

void MOV_74::Execute() const
{
  alu.SetA(alu.flash.Get(alu.GetPC() + 1));
  alu.SetPC(alu.GetPC() + 1 + operands);
}

MOV_E5::MOV_E5(Alu &a) : Instruction(a)
{
  opcode = 0xE5;
  operands = 1;
}

std::string MOV_E5::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "MOV A, ";
  PrintAddress(ss, memory.Get(address+1));
  return ss.str();
}

void MOV_E5::Execute() const
{
  std::uint8_t address = alu.flash.Get(alu.GetPC() + 1);

  alu.SetA(alu.Read(address));
  alu.SetPC(alu.GetPC() + operands + 1);
}

MOV_A2::MOV_A2(Alu &a) : Instruction(a)
{
  opcode = 0xA2;
  operands = 1;
}

std::string MOV_A2::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "MOV C, ";
  PrintAddress(ss, memory.Get(address+1));
  return ss.str();
}

void MOV_A2::Execute(void) const
{
  std::uint8_t bitAddr = alu.flash.Get(alu.GetPC() + 1);

  if (alu.ReadBit(bitAddr))
  {
    alu.SetC();
  }
  else
  {
    alu.ClrC();
  }
  alu.SetPC(alu.GetPC() + 1 + operands);
}

MOV_78::MOV_78(Alu &a) : Instruction(a)
{
  opcode = 0x78;
  operands = 1;
}

std::string MOV_78::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::hex;
  ss << "MOV R0, #";
  ss << std::setw(2) << (int) memory.Get(address+1);
  return ss.str();
}

void MOV_78::Execute() const
{
  alu.SetR0(alu.flash.Get(alu.GetPC() + 1));
  alu.SetPC(alu.GetPC() + 1 + operands);
}

MOV_79::MOV_79(Alu &a) : Instruction(a)
{
  opcode = 0x79;
  operands = 1;
}

std::string MOV_79::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::hex;
  ss << "MOV R1, #";
  ss << std::setw(2) << (int) memory.Get(address+1);
  return ss.str();
}

void MOV_79::Execute() const
{
  alu.SetR1(alu.flash.Get(alu.GetPC() + 1));
  alu.SetPC(alu.GetPC() + 1 + operands);
}

MOV_7A::MOV_7A(Alu &a) : Instruction(a)
{
  opcode = 0x7A;
  operands = 1;
}

std::string MOV_7A::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::hex;
  ss << "MOV R2, #";
  ss << std::setw(2) << (int) memory.Get(address+1);
  return ss.str();
}

void MOV_7A::Execute() const
{
  alu.SetR2(alu.flash.Get(alu.GetPC() + 1));
  alu.SetPC(alu.GetPC() + 1 + operands);
}

MOV_7B::MOV_7B(Alu &a) : Instruction(a)
{
  opcode = 0x7B;
  operands = 1;
}

std::string MOV_7B::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::hex;
  ss << "MOV R3, #";
  ss << std::setw(2) << (int) memory.Get(address+1);
  return ss.str();
}

void MOV_7B::Execute() const
{
  alu.SetR3(alu.flash.Get(alu.GetPC() + 1));
  alu.SetPC(alu.GetPC() + 1 + operands);
}

MOV_7C::MOV_7C(Alu &a) : Instruction(a)
{
  opcode = 0x7C;
  operands = 1;
}

std::string MOV_7C::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::hex;
  ss << "MOV R4, #";
  ss << std::setw(2) << (int) memory.Get(address+1);
  return ss.str();
}

void MOV_7C::Execute() const
{
  alu.SetR4(alu.flash.Get(alu.GetPC() + 1));
  alu.SetPC(alu.GetPC() + 1 + operands);
}

MOV_7D::MOV_7D(Alu &a) : Instruction(a)
{
  opcode = 0x7D;
  operands = 1;
}

std::string MOV_7D::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::hex;
  ss << "MOV R5, #";
  ss << std::setw(2) << (int) memory.Get(address+1);
  return ss.str();
}

void MOV_7D::Execute() const
{
  alu.SetR5(alu.flash.Get(alu.GetPC() + 1));
  alu.SetPC(alu.GetPC() + 1 + operands);
}

MOV_7E::MOV_7E(Alu &a) : Instruction(a)
{
  opcode = 0x7E;
  operands = 1;
}

std::string MOV_7E::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::hex;
  ss << "MOV R6, #";
  ss << std::setw(2) << (int) memory.Get(address+1);
  return ss.str();
}

void MOV_7E::Execute() const
{
  alu.SetR6(alu.flash.Get(alu.GetPC() + 1));
  alu.SetPC(alu.GetPC() + 1 + operands);
}

MOV_7F::MOV_7F(Alu &a) : Instruction(a)
{
  opcode = 0x7F;
  operands = 1;
}

std::string MOV_7F::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::hex;
  ss << "MOV R7, #";
  ss << std::setw(2) << (int) memory.Get(address+1);
  return ss.str();
}

void MOV_7F::Execute() const
{
  alu.SetR7(alu.flash.Get(alu.GetPC() + 1));
  alu.SetPC(alu.GetPC() + 1 + operands);
}

MOV_A8::MOV_A8(Alu &a) : Instruction(a)
{
  opcode = 0xA8;
  operands = 1;
}

std::string MOV_A8::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "MOV R0, ";
  PrintAddress(ss, memory.Get(address+1));
  return ss.str();
}

void MOV_A8::Execute() const
{
  std::uint8_t address = alu.flash.Get(alu.GetPC() + 1);

  alu.SetR0(alu.Read(address));
  alu.SetPC(alu.GetPC() + 1 + operands);
}

MOV_A9::MOV_A9(Alu &a) : Instruction(a)
{
  opcode = 0xA9;
  operands = 1;
}

std::string MOV_A9::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "MOV R1, ";
  PrintAddress(ss, memory.Get(address+1));
  return ss.str();
}

void MOV_A9::Execute() const
{
  std::uint8_t address = alu.flash.Get(alu.GetPC() + 1);

  alu.SetR1(alu.Read(address));
  alu.SetPC(alu.GetPC() + 1 + operands);
}

MOV_AA::MOV_AA(Alu &a) : Instruction(a)
{
  opcode = 0xAA;
  operands = 1;
}

std::string MOV_AA::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "MOV R2, ";
  PrintAddress(ss, memory.Get(address+1));
  return ss.str();
}

void MOV_AA::Execute() const
{
  std::uint8_t address = alu.flash.Get(alu.GetPC() + 1);

  alu.SetR2(alu.Read(address));
  alu.SetPC(alu.GetPC() + 1 + operands);
}

MOV_AB::MOV_AB(Alu &a) : Instruction(a)
{
  opcode = 0xAB;
  operands = 1;
}

std::string MOV_AB::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "MOV R3, ";
  PrintAddress(ss, memory.Get(address+1));
  return ss.str();
}

void MOV_AB::Execute() const
{
  std::uint8_t address = alu.flash.Get(alu.GetPC() + 1);

  alu.SetR3(alu.Read(address));
  alu.SetPC(alu.GetPC() + 1 + operands);
}

MOV_AC::MOV_AC(Alu &a) : Instruction(a)
{
  opcode = 0xAC;
  operands = 1;
}

std::string MOV_AC::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "MOV R4, ";
  PrintAddress(ss, memory.Get(address+1));
  return ss.str();
}

void MOV_AC::Execute() const
{
  std::uint8_t address = alu.flash.Get(alu.GetPC() + 1);

  alu.SetR4(alu.Read(address));
  alu.SetPC(alu.GetPC() + 1 + operands);
}

MOV_AD::MOV_AD(Alu &a) : Instruction(a)
{
  opcode = 0xAD;
  operands = 1;
}

std::string MOV_AD::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "MOV R5, ";
  PrintAddress(ss, memory.Get(address+1));
  return ss.str();
}

void MOV_AD::Execute() const
{
  std::uint8_t address = alu.flash.Get(alu.GetPC() + 1);

  alu.SetR5(alu.Read(address));
  alu.SetPC(alu.GetPC() + 1 + operands);
}

MOV_AE::MOV_AE(Alu &a) : Instruction(a)
{
  opcode = 0xAE;
  operands = 1;
}

std::string MOV_AE::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "MOV R6, ";
  PrintAddress(ss, memory.Get(address+1));
  return ss.str();
}

void MOV_AE::Execute() const
{
  std::uint8_t address = alu.flash.Get(alu.GetPC() + 1);

  alu.SetR6(alu.Read(address));
  alu.SetPC(alu.GetPC() + 1 + operands);
}

MOV_AF::MOV_AF(Alu &a) : Instruction(a)
{
  opcode = 0xAF;
  operands = 1;
}

std::string MOV_AF::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "MOV R7, ";
  PrintAddress(ss, memory.Get(address+1));
  return ss.str();
}

void MOV_AF::Execute() const
{
  std::uint8_t address = alu.flash.Get(alu.GetPC() + 1);

  alu.SetR7(alu.Read(address));
  alu.SetPC(alu.GetPC() + 1 + operands);
}

MOV_92::MOV_92(Alu &a) : Instruction(a)
{
  opcode = 0x92;
  operands = 1;
}

std::string MOV_92::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "MOV ";
  ss << (int) memory.Get(address+1) << ", C";
  return ss.str();
}

void MOV_92::Execute(void) const
{
  std::uint8_t bitAddr = alu.flash.Get(alu.GetPC() + 1);

  alu.WriteBit(bitAddr, alu.GetC());
  alu.SetPC(alu.GetPC() + 1 + operands);
}

MOV_86::MOV_86(Alu &a) : Instruction(a)
{
  opcode = 0x86;
  operands = 1;
}

std::string MOV_86::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "MOV ";
  ss << (int) memory.Get(address+1) << ", @R0";
  return ss.str();
}

MOV_87::MOV_87(Alu &a) : Instruction(a)
{
  opcode = 0x87;
  operands = 1;
}

std::string MOV_87::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "MOV ";
  ss << (int) memory.Get(address+1) << ", @R1";
  return ss.str();
}

MOV_88::MOV_88(Alu &a) : Instruction(a)
{
  opcode = 0x88;
  operands = 1;
}

std::string MOV_88::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "MOV ";
  ss << (int) memory.Get(address+1) << ", R0";
  return ss.str();
}

void MOV_88::Execute() const
{
  alu.Write(alu.flash.Get(alu.GetPC()+ 1), alu.GetR0());
  alu.SetPC(alu.GetPC() + 1 + operands);
}

MOV_89::MOV_89(Alu &a) : Instruction(a)
{
  opcode = 0x89;
  operands = 1;
}

std::string MOV_89::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "MOV ";
  ss << (int) memory.Get(address+1) << ", R1";
  return ss.str();
}

void MOV_89::Execute() const
{
  alu.Write(alu.flash.Get(alu.GetPC()+ 1), alu.GetR1());
  alu.SetPC(alu.GetPC() + 1 + operands);
}

MOV_8A::MOV_8A(Alu &a) : Instruction(a)
{
  opcode = 0x8A;
  operands = 1;
}

std::string MOV_8A::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "MOV ";
  ss << (int) memory.Get(address+1) << ", R2";
  return ss.str();
}

void MOV_8A::Execute() const
{
  alu.Write(alu.flash.Get(alu.GetPC()+ 1), alu.GetR2());
  alu.SetPC(alu.GetPC() + 1 + operands);
}

MOV_8B::MOV_8B(Alu &a) : Instruction(a)
{
  opcode = 0x8B;
  operands = 1;
}

std::string MOV_8B::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "MOV ";
  ss << (int) memory.Get(address+1) << ", R3";
  return ss.str();
}

void MOV_8B::Execute() const
{
  alu.Write(alu.flash.Get(alu.GetPC()+ 1), alu.GetR3());
  alu.SetPC(alu.GetPC() + 1 + operands);
}

MOV_8C::MOV_8C(Alu &a) : Instruction(a)
{
  opcode = 0x8C;
  operands = 1;
}

std::string MOV_8C::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "MOV ";
  ss << (int) memory.Get(address+1) << ", R4";
  return ss.str();
}

void MOV_8C::Execute() const
{
  alu.Write(alu.flash.Get(alu.GetPC()+ 1), alu.GetR4());
  alu.SetPC(alu.GetPC() + 1 + operands);
}

MOV_8D::MOV_8D(Alu &a) : Instruction(a)
{
  opcode = 0x8D;
  operands = 1;
}

std::string MOV_8D::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "MOV ";
  ss << (int) memory.Get(address+1) << ", R5";
  return ss.str();
}

void MOV_8D::Execute() const
{
  alu.Write(alu.flash.Get(alu.GetPC()+ 1), alu.GetR5());
  alu.SetPC(alu.GetPC() + 1 + operands);
}

MOV_8E::MOV_8E(Alu &a) : Instruction(a)
{
  opcode = 0x8E;
  operands = 1;
}

std::string MOV_8E::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "MOV ";
  ss << (int) memory.Get(address+1) << ", R6";
  return ss.str();
}

void MOV_8E::Execute() const
{
  alu.Write(alu.flash.Get(alu.GetPC()+ 1), alu.GetR6());
  alu.SetPC(alu.GetPC() + 1 + operands);
}

MOV_8F::MOV_8F(Alu &a) : Instruction(a)
{
  opcode = 0x8F;
  operands = 1;
}

std::string MOV_8F::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "MOV ";
  ss << (int) memory.Get(address+1) << ", R7";
  return ss.str();
}

void MOV_8F::Execute() const
{
  alu.Write(alu.flash.Get(alu.GetPC()+ 1), alu.GetR7());
  alu.SetPC(alu.GetPC() + 1 + operands);
}

MOV_F5::MOV_F5(Alu &a) : Instruction(a)
{
  opcode = 0xF5;
  operands = 1;
}

std::string MOV_F5::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "MOV ";
  PrintAddress(ss, memory.Get(address+1));
  ss << ", A";
  return ss.str();
}

void MOV_F5::Execute() const
{
  std::uint8_t addr = alu.flash.Get(alu.GetPC() + 1);

  alu.Write(addr, alu.GetA());
  alu.SetPC(alu.GetPC() + 1 + operands);
}

MovIndirect::MovIndirect(Alu &a, std::uint8_t opcode, std::uint8_t r) : Instruction(a, opcode), reg(r)
{
  operands = 0;
}

std::string MovIndirect::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << "MOV @R";
  ss << (int) reg;
  ss << ", A";
  return ss.str();
}

void MovIndirect::Execute() const
{
  alu.iram.Set(alu.GetReg(reg), alu.GetA());
  alu.SetPC(alu.GetPC() + 1 + operands);
}

MovIndirectFromMem::MovIndirectFromMem(Alu &a, std::uint8_t opcode, std::uint8_t r) : Instruction(a, opcode), reg(r)
{
  operands = 1;
}

std::string MovIndirectFromMem::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << "MOV @R";
  ss << (int) reg;
  ss << ", ";
  ss << std::hex << std::setw(2) << (int) alu.flash.Get(alu.GetPC() + 1);
  return ss.str();
}

void MovIndirectFromMem::Execute() const
{
  alu.iram.Set(alu.GetReg(reg), alu.iram.Get(alu.flash.Get(alu.GetPC() + 1)));
  alu.SetPC(alu.GetPC() + 1 + operands);
}

MOV_E6::MOV_E6(Alu &a) : Instruction(a)
{
  opcode = 0xE6;
  operands = 0;
}

std::string MOV_E6::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "MOV A, @R0";
}

MOV_E7::MOV_E7(Alu &a) : Instruction(a)
{
  opcode = 0xE7;
  operands = 0;
}

std::string MOV_E7::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "MOV A, @R1";
}

MOV_E8::MOV_E8(Alu &a) : Instruction(a)
{
  opcode = 0xE8;
  operands = 0;
}

std::string MOV_E8::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "MOV A, R0";
}

void MOV_E8::Execute() const
{
  alu.SetA(alu.GetR0());
  alu.SetPC(alu.GetPC() + 1 + operands);
}

MOV_E9::MOV_E9(Alu &a) : Instruction(a)
{
  opcode = 0xE9;
  operands = 0;
}

std::string MOV_E9::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "MOV A, R1";
}

void MOV_E9::Execute() const
{
  alu.SetA(alu.GetR1());
  alu.SetPC(alu.GetPC() + 1 + operands);
}

MOV_EA::MOV_EA(Alu &a) : Instruction(a)
{
  opcode = 0xEA;
  operands = 0;
}

std::string MOV_EA::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "MOV A, R2";
}

void MOV_EA::Execute() const
{
  alu.SetA(alu.GetR2());
  alu.SetPC(alu.GetPC() + 1 + operands);
}

MOV_EB::MOV_EB(Alu &a) : Instruction(a)
{
  opcode = 0xEB;
  operands = 0;
}

std::string MOV_EB::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "MOV A, R3";
}

void MOV_EB::Execute() const
{
  alu.SetA(alu.GetR3());
  alu.SetPC(alu.GetPC() + 1 + operands);
}

MOV_EC::MOV_EC(Alu &a) : Instruction(a)
{
  opcode = 0xEC;
  operands = 0;
}

std::string MOV_EC::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "MOV A, R4";
}

void MOV_EC::Execute() const
{
  alu.SetA(alu.GetR4());
  alu.SetPC(alu.GetPC() + 1 + operands);
}

MOV_ED::MOV_ED(Alu &a) : Instruction(a)
{
  opcode = 0xED;
  operands = 0;
}

std::string MOV_ED::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "MOV A, R5";
}

void MOV_ED::Execute() const
{
  alu.SetA(alu.GetR5());
  alu.SetPC(alu.GetPC() + 1 + operands);
}

MOV_EE::MOV_EE(Alu &a) : Instruction(a)
{
  opcode = 0xEE;
  operands = 0;
}

std::string MOV_EE::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "MOV A, R6";
}

void MOV_EE::Execute() const
{
  alu.SetA(alu.GetR6());
  alu.SetPC(alu.GetPC() + 1 + operands);
}

MOV_EF::MOV_EF(Alu &a) : Instruction(a)
{
  opcode = 0xEF;
  operands = 0;
}

std::string MOV_EF::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "MOV A, R7";
}

void MOV_EF::Execute() const
{
  alu.SetA(alu.GetR7());
  alu.SetPC(alu.GetPC() + 1 + operands);
}

MOV_F8::MOV_F8(Alu &a) : Instruction(a)
{
  opcode = 0xF8;
  operands = 0;
}

std::string MOV_F8::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "MOV R0, A";
}

void MOV_F8::Execute() const
{
  alu.SetR0(alu.GetA());
  alu.SetPC(alu.GetPC() + 1 + operands);
}

MOV_F9::MOV_F9(Alu &a) : Instruction(a)
{
  opcode = 0xF9;
  operands = 0;
}

std::string MOV_F9::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "MOV R1, A";
}

void MOV_F9::Execute() const
{
  alu.SetR1(alu.GetA());
  alu.SetPC(alu.GetPC() + 1 + operands);
}

MOV_FA::MOV_FA(Alu &a) : Instruction(a)
{
  opcode = 0xFA;
  operands = 0;
}

std::string MOV_FA::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "MOV R2, A";
}

void MOV_FA::Execute() const
{
  alu.SetR2(alu.GetA());
  alu.SetPC(alu.GetPC() + 1 + operands);
}

MOV_FB::MOV_FB(Alu &a) : Instruction(a)
{
  opcode = 0xFB;
  operands = 0;
}

std::string MOV_FB::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "MOV R3, A";
}

void MOV_FB::Execute() const
{
  alu.SetR3(alu.GetA());
  alu.SetPC(alu.GetPC() + 1 + operands);
}

MOV_FC::MOV_FC(Alu &a) : Instruction(a)
{
  opcode = 0xFC;
  operands = 0;
}

std::string MOV_FC::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "MOV R4, A";
}

void MOV_FC::Execute() const
{
  alu.SetR4(alu.GetA());
  alu.SetPC(alu.GetPC() + 1 + operands);
}

MOV_FD::MOV_FD(Alu &a) : Instruction(a)
{
  opcode = 0xFD;
  operands = 0;
}

std::string MOV_FD::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "MOV R5, A";
}

void MOV_FD::Execute() const
{
  alu.SetR5(alu.GetA());
  alu.SetPC(alu.GetPC() + 1 + operands);
}

MOV_FE::MOV_FE(Alu &a) : Instruction(a)
{
  opcode = 0xFE;
  operands = 0;
}

std::string MOV_FE::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "MOV R6, A";
}

void MOV_FE::Execute() const
{
  alu.SetR6(alu.GetA());
  alu.SetPC(alu.GetPC() + 1 + operands);
}

MOV_FF::MOV_FF(Alu &a) : Instruction(a)
{
  opcode = 0xFF;
  operands = 0;
}

std::string MOV_FF::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "MOV R7, A";
}

void MOV_FF::Execute() const
{
  alu.SetR7(alu.GetA());
  alu.SetPC(alu.GetPC() + 1 + operands);
}

MOVC_93::MOVC_93(Alu &a) : Instruction(a)
{
  opcode = 0x93;
  operands = 0;
}

std::string MOVC_93::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "MOVC A, @A+DPTR";
}

void MOVC_93::Execute() const
{
  std::uint16_t address = alu.GetA() + alu.GetDPTR();

  alu.SetA(alu.flash.Get(address));
  alu.SetPC(alu.GetPC() + 1 + operands);
}

MOVC_83::MOVC_83(Alu &a) : Instruction(a)
{
  opcode = 0x83;
  operands = 0;
}

std::string MOVC_83::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "MOVC A, @A+PC";
}

MOVX_F0::MOVX_F0(Alu &a) : Instruction(a)
{
  opcode = 0xF0;
  operands = 0;
}

std::string MOVX_F0::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "MOVX @DPTR, A";
}

void MOVX_F0::Execute() const
{
  alu.xram.Set(alu.GetDPTR(), alu.GetA());
  alu.SetPC(alu.GetPC() + 1 + operands);
}

MOVX_F2::MOVX_F2(Alu &a) : Instruction(a)
{
  opcode = 0xF2;
  operands = 0;
}

std::string MOVX_F2::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "MOVX @R0, A";
}

void MOVX_F2::Execute() const
{
  alu.xram.Set(alu.GetR0(), alu.GetA());
  alu.SetPC(alu.GetPC() + 1);
}

MOVX_F3::MOVX_F3(Alu &a) : Instruction(a)
{
  opcode = 0xF3;
  operands = 0;
}

std::string MOVX_F3::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "MOVX @R1, A";
}

MOVX_E0::MOVX_E0(Alu &a) : Instruction(a)
{
  opcode = 0xE0;
  operands = 0;
}

std::string MOVX_E0::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "MOVX A, @DPTR";
}

MOVX_E2::MOVX_E2(Alu &a) : Instruction(a)
{
  opcode = 0xE2;
  operands = 0;
}

std::string MOVX_E2::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "MOVX A, @R0";
}

MOVX_E3::MOVX_E3(Alu &a) : Instruction(a)
{
  opcode = 0xE3;
  operands = 0;
}

std::string MOVX_E3::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "MOVX A, @R1";
}

MUL_A4::MUL_A4(Alu &a) : Instruction(a)
{
  opcode = 0xA4;
  operands = 0;
}

std::string MUL_A4::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "MUL AB";
}

NOP::NOP(Alu &a) : Instruction(a)
{
  opcode = 0;
  operands = 0;
}

std::string NOP::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "NOP";
}

void NOP::Execute() const
{
  alu.SetPC(alu.GetPC() + 1);
}

ORL_43::ORL_43(Alu &a) : Instruction(a)
{
  opcode = 0x43;
  operands = 2;
}

std::string ORL_43::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::hex;
  ss << "ORL ";
  PrintAddress(ss, memory.Get(address + 1));
  ss << ", #" << std::setw(2) << (int) memory.Get(address+2);
  return ss.str();
}

void ORL_43::Execute() const
{
  std::uint8_t address = alu.flash.Get(alu.GetPC() + 1);
  std::uint8_t data = alu.Read(address);

  alu.Write(address, data | alu.flash.Get(alu.GetPC() + 2));
  alu.SetPC(alu.GetPC() + 1 + operands);
}

ORL_42::ORL_42(Alu &a) : Instruction(a)
{
  opcode = 0x42;
  operands = 1;
}

std::string ORL_42::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "ORL ";
  ss << (int) memory.Get(address+1) << ", A";
  return ss.str();
}

void ORL_42::Execute() const
{
  std::uint8_t addr = alu.flash.Get(alu.GetPC() + 1);
  alu.Write(addr, alu.GetA() | alu.Read(addr));
  alu.SetPC(alu.GetPC() + 1 + operands);
}

ORL_44::ORL_44(Alu &a) : Instruction(a)
{
  opcode = 0x44;
  operands = 1;
}

std::string ORL_44::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "ORL A, #";
  ss << (int) memory.Get(address+1);
  return ss.str();
}

void ORL_44::Execute() const
{
  alu.SetA(alu.GetA() | alu.flash.Get(alu.GetPC() + 1));
  alu.SetPC(alu.GetPC() + 1 + operands);
}

ORL_45::ORL_45(Alu &a) : Instruction(a)
{
  opcode = 0x45;
  operands = 1;
}

std::string ORL_45::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "ORL A, ";
  ss << (int) memory.Get(address+1);
  return ss.str();
}

void ORL_45::Execute() const
{
  std::uint8_t addr = alu.flash.Get(alu.GetPC() + 1);

  alu.SetA(alu.GetA() | alu.flash.Get(addr));
  alu.SetPC(alu.GetPC() + 1 + operands);
}

ORL_72::ORL_72(Alu &a) : Instruction(a)
{
  opcode = 0x72;
  operands = 1;
}

std::string ORL_72::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "ORL C, ";
  ss << (int) memory.Get(address+1);
  return ss.str();
}

ORL_A0::ORL_A0(Alu &a) : Instruction(a)
{
  opcode = 0xA0;
  operands = 1;
}

std::string ORL_A0::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "ORL C, ";
  ss << (int) memory.Get(address+1);
  return ss.str();
}

ORL_46::ORL_46(Alu &a) : Instruction(a)
{
  opcode = 0x46;
  operands = 0;
}

std::string ORL_46::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "ORL A, @R0";
}

ORL_47::ORL_47(Alu &a) : Instruction(a)
{
  opcode = 0x47;
  operands = 0;
}

std::string ORL_47::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "ORL A, @R1";
}

OrARegister::OrARegister(Alu &a, std::uint8_t opcode, std::uint8_t r) : Instruction(a, opcode), reg(r)
{
}

std::string OrARegister::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << "ORL A, R";
  ss << (int) reg;
  return ss.str();
}

void OrARegister::Execute() const
{
  alu.SetA(alu.GetA() | alu.GetReg(reg));
  alu.SetPC(alu.GetPC() + 1 + operands);
}

POP_D0::POP_D0(Alu &a) : Instruction(a)
{
  opcode = 0xD0;
  operands = 1;
}

std::string POP_D0::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "POP ";
  ss << (int) memory.Get(address+1);
  return ss.str();
}

void POP_D0::Execute() const
{
  alu.iram.Set(alu.flash.Get(alu.GetPC() + 1), alu.iram.Get(alu.GetSP()));
  alu.SetSP(alu.GetSP() - 1);
  alu.SetPC(alu.GetPC() + 1 + operands);
}

PUSH_C0::PUSH_C0(Alu &a) : Instruction(a)
{
  opcode = 0xC0;
  operands = 1;
}

std::string PUSH_C0::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::hex;
  ss << "PUSH ";
  ss << std::setw(2) << (int) memory.Get(address+1);
  return ss.str();
}

void PUSH_C0::Execute() const
{
  alu.SetSP(alu.GetSP() + 1);
  alu.iram.Set(alu.GetSP(), alu.iram.Get(alu.flash.Get(alu.GetPC() + 1)));
  alu.SetPC(alu.GetPC() + 1 + operands);
}

RET_22::RET_22(Alu &a) : Instruction(a)
{
  opcode = 0x22;
  operands = 0;
}

std::string RET_22::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "RET";
}

#include <iostream>

void RET_22::Execute() const
{
  std::uint8_t sp = alu.GetSP();
  std::uint8_t high = alu.iram.Get(sp);
  std::uint8_t low = alu.iram.Get(sp-1);

  alu.SetPC(low + high * 256);
  alu.SetSP(sp - 2);
}

RETI_32::RETI_32(Alu &a) : Instruction(a)
{
  opcode = 0x32;
  operands = 0;
}

std::string RETI_32::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "RETI";
}

RL_23::RL_23(Alu &a) : Instruction(a)
{
  opcode = 0x23;
  operands = 0;
}

std::string RL_23::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "RL A";
}

void RL_23::Execute() const
{
  std::uint16_t result = alu.GetA() << 1;

  if (result & 0x100)
  {
    result |= 0x01;
  }
  result = result & 0xff;
  alu.SetA((uint8_t) result);
  alu.SetPC(alu.GetPC() + 1 + operands);
}

RLC_33::RLC_33(Alu &a) : Instruction(a)
{
  opcode = 0x33;
  operands = 0;
}

std::string RLC_33::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "RLC A";
}

void RLC_33::Execute() const
{
  std::uint16_t result = alu.GetA() << 1;
  bool c = alu.GetC();

  if (result & 0x100)
  {
    alu.SetC();
  }
  else
  {
    alu.ClrC();
  }

  result = result & 0xff;
  if (c)
  {
    result |= 0x01;
  }
  alu.SetA((uint8_t) result);
  alu.SetPC(alu.GetPC() + 1 + operands);
}

RR_3::RR_3(Alu &a) : Instruction(a)
{
  opcode = 3;
  operands = 0;
}

std::string RR_3::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "RR A";
}

RRC_13::RRC_13(Alu &a) : Instruction(a)
{
  opcode = 0x13;
  operands = 0;
}

std::string RRC_13::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "RRC A";
}

SETB_D3::SETB_D3(Alu &a) : Instruction(a)
{
  opcode = 0xD3;
  operands = 0;
}

std::string SETB_D3::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "SETB C";
}

SETB_D2::SETB_D2(Alu &a) : Instruction(a)
{
  opcode = 0xD2;
  operands = 1;
}

std::string SETB_D2::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "SETB ";
  ss << (int) memory.Get(address+1);
  return ss.str();
}

void SETB_D2::Execute(void) const
{
  std::uint8_t bitAddr = alu.flash.Get(alu.GetPC() + 1);

  alu.WriteBit(bitAddr, true);
  alu.SetPC(alu.GetPC() + 1 + operands);
}

SJMP_80::SJMP_80(Alu &a) : Instruction(a)
{
  opcode = 0x80;
  operands = 1;
}

std::string SJMP_80::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "SJMP ";
  ss << (int) memory.Get(address+1);
  return ss.str();
}

void SJMP_80::Execute() const
{
  std::int8_t reladdr = alu.flash.Get(alu.GetPC() + 1);
  alu.SetPC(alu.GetPC() + 1 + operands + reladdr);
}

SubtractionHelper::SubtractionHelper(Alu &alu, std::uint8_t opcode): Instruction(alu, opcode)
{
}

void SubtractionHelper::Helper(std::uint8_t operand) const
{
  if (operand > alu.GetA())
  {
    alu.SetC();
  }
  else
  {
    alu.ClrC();
  }

  if ((operand & 0xf) > (alu.GetA() & 0xf))
  {
    alu.SetAC();
  }
  else
  {
    alu.ClrAC();
  }

  std::int16_t signedResult = (int8_t) alu.GetA() - (int8_t) operand;
  if (signedResult > 127 || signedResult < -128)
  {
    alu.SetOV();
  }
  else
  {
    alu.ClrOV();
  }

  alu.SetA(alu.GetA() - operand);
  alu.SetPC(alu.GetPC() + 1 + operands);
}

SUBB_94::SUBB_94(Alu &a) : Instruction(a)
{
  opcode = 0x94;
  operands = 1;
}

std::string SUBB_94::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "SUBB A, #";
  ss << (int) memory.Get(address+1);
  return ss.str();
}

SUBB_95::SUBB_95(Alu &a, std::uint8_t opcode) : SubtractionHelper(a, opcode)
{
  operands = 1;
}

std::string SUBB_95::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "SUBB A, ";
  ss << (int) memory.Get(address+1);
  return ss.str();
}

void SUBB_95::Execute() const
{
  std::uint8_t operand = alu.Read(alu.flash.Get(alu.GetPC() + 1));

  Helper(operand);
}

SUBB_96::SUBB_96(Alu &a) : Instruction(a)
{
  opcode = 0x96;
  operands = 0;
}

std::string SUBB_96::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "SUBB A, @R0";
}

SUBB_97::SUBB_97(Alu &a) : Instruction(a)
{
  opcode = 0x97;
  operands = 0;
}

std::string SUBB_97::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "SUBB A, @R0";
}

SubARegister::SubARegister(Alu &a, std::uint8_t opcode, std::uint8_t r) : SubtractionHelper(a, opcode), reg(r)
{
  operands = 0;
}

std::string SubARegister::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << "SUBB A, R";
  ss << (int) reg;
  return ss.str();
}

void SubARegister::Execute() const
{
  Helper(alu.GetReg(reg));
}

SWAP_C4::SWAP_C4(Alu &a) : Instruction(a)
{
  opcode = 0xC4;
  operands = 0;
}

std::string SWAP_C4::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "SWAP A";
}

XCH_C5::XCH_C5(Alu &a) : Instruction(a)
{
  opcode = 0xC5;
  operands = 1;
}

std::string XCH_C5::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "XCH A, ";
  ss << (int) memory.Get(address+1);
  return ss.str();
}

void XCH_C5::Execute() const
{
  std::uint8_t addr = alu.flash.Get(alu.GetPC() + 1);
  std::uint8_t temp = alu.GetA();

  alu.SetA(alu.Read(addr));
  alu.Write(addr, temp);
  alu.SetPC(alu.GetPC() + 1 + operands);
}

XCH_C6::XCH_C6(Alu &a) : Instruction(a)
{
  opcode = 0xC6;
  operands = 0;
}

std::string XCH_C6::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "XCH A, @R0";
}

XCH_C7::XCH_C7(Alu &a) : Instruction(a)
{
  opcode = 0xC7;
  operands = 0;
}

std::string XCH_C7::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "XCH A, @R1";
}

XCH_C8::XCH_C8(Alu &a) : Instruction(a)
{
  opcode = 0xC8;
  operands = 0;
}

std::string XCH_C8::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "XCH A, R0";
}

void XCH_C8::Execute() const
{
  std::uint8_t temp = alu.GetR0();

  alu.SetR0(alu.GetA());
  alu.SetA(temp);
  alu.SetPC(alu.GetPC() + 1 + operands);
}

XCH_C9::XCH_C9(Alu &a) : Instruction(a)
{
  opcode = 0xC9;
  operands = 0;
}

std::string XCH_C9::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "XCH A, R1";
}

void XCH_C9::Execute() const
{
  std::uint8_t temp = alu.GetR1();

  alu.SetR1(alu.GetA());
  alu.SetA(temp);
  alu.SetPC(alu.GetPC() + 1 + operands);
}

XCH_CA::XCH_CA(Alu &a) : Instruction(a)
{
  opcode = 0xCA;
  operands = 0;
}

std::string XCH_CA::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "XCH A, R2";
}

void XCH_CA::Execute() const
{
  std::uint8_t temp = alu.GetR2();

  alu.SetR2(alu.GetA());
  alu.SetA(temp);
  alu.SetPC(alu.GetPC() + 1 + operands);
}

XCH_CB::XCH_CB(Alu &a) : Instruction(a)
{
  opcode = 0xCB;
  operands = 0;
}

std::string XCH_CB::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "XCH A, R3";
}

void XCH_CB::Execute() const
{
  std::uint8_t temp = alu.GetR3();

  alu.SetR3(alu.GetA());
  alu.SetA(temp);
  alu.SetPC(alu.GetPC() + 1 + operands);
}

XCH_CC::XCH_CC(Alu &a) : Instruction(a)
{
  opcode = 0xCC;
  operands = 0;
}

std::string XCH_CC::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "XCH A, R4";
}

void XCH_CC::Execute() const
{
  std::uint8_t temp = alu.GetR4();

  alu.SetR4(alu.GetA());
  alu.SetA(temp);
  alu.SetPC(alu.GetPC() + 1 + operands);
}

XCH_CD::XCH_CD(Alu &a) : Instruction(a)
{
  opcode = 0xCD;
  operands = 0;
}

std::string XCH_CD::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "XCH A, R5";
}

void XCH_CD::Execute() const
{
  std::uint8_t temp = alu.GetR5();

  alu.SetR5(alu.GetA());
  alu.SetA(temp);
  alu.SetPC(alu.GetPC() + 1 + operands);
}

XCH_CE::XCH_CE(Alu &a) : Instruction(a)
{
  opcode = 0xCE;
  operands = 0;
}

std::string XCH_CE::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "XCH A, R6";
}

void XCH_CE::Execute() const
{
  std::uint8_t temp = alu.GetR6();

  alu.SetR6(alu.GetA());
  alu.SetA(temp);
  alu.SetPC(alu.GetPC() + 1 + operands);
}

XCH_CF::XCH_CF(Alu &a) : Instruction(a)
{
  opcode = 0xCF;
  operands = 0;
}

std::string XCH_CF::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "XCH A, R7";
}

void XCH_CF::Execute() const
{
  std::uint8_t temp = alu.GetR7();

  alu.SetR7(alu.GetA());
  alu.SetA(temp);
  alu.SetPC(alu.GetPC() + 1 + operands);
}

XCHD_D6::XCHD_D6(Alu &a) : Instruction(a)
{
  opcode = 0xD6;
  operands = 0;
}

std::string XCHD_D6::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "XCHD A, @R0";
}

XCHD_D7::XCHD_D7(Alu &a) : Instruction(a)
{
  opcode = 0xD7;
  operands = 0;
}

std::string XCHD_D7::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "XCHD A, @R1";
}

XRL_66::XRL_66(Alu &a) : Instruction(a)
{
  opcode = 0x66;
  operands = 0;
}

std::string XRL_66::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "XRL A, @R0";
}

XRL_67::XRL_67(Alu &a) : Instruction(a)
{
  opcode = 0x67;
  operands = 0;
}

std::string XRL_67::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "XRL A, @R1";
}

XRL_68::XRL_68(Alu &a) : Instruction(a)
{
  opcode = 0x68;
  operands = 0;
}

std::string XRL_68::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "XRL A, R0";
}

XRL_69::XRL_69(Alu &a) : Instruction(a)
{
  opcode = 0x69;
  operands = 0;
}

std::string XRL_69::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "XRL A, R1";
}

XRL_6A::XRL_6A(Alu &a) : Instruction(a)
{
  opcode = 0x6A;
  operands = 0;
}

std::string XRL_6A::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "XRL A, R2";
}

XRL_6B::XRL_6B(Alu &a) : Instruction(a)
{
  opcode = 0x6B;
  operands = 0;
}

std::string XRL_6B::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "XRL A, R3";
}

XRL_6C::XRL_6C(Alu &a) : Instruction(a)
{
  opcode = 0x6C;
  operands = 0;
}

std::string XRL_6C::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "XRL A, R4";
}

XRL_6D::XRL_6D(Alu &a) : Instruction(a)
{
  opcode = 0x6D;
  operands = 0;
}

std::string XRL_6D::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "XRL A, R5";
}

XRL_6E::XRL_6E(Alu &a) : Instruction(a)
{
  opcode = 0x6E;
  operands = 0;
}

std::string XRL_6E::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "XRL A, R6";
}

XRL_6F::XRL_6F(Alu &a) : Instruction(a)
{
  opcode = 0x6F;
  operands = 0;
}

std::string XRL_6F::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "XRL A, R7";
}

XRL_62::XRL_62(Alu &a) : Instruction(a)
{
  opcode = 0x62;
  operands = 1;
}

std::string XRL_62::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "XRL ";
  ss << (int) memory.Get(address+1) << ", A";
  return ss.str();
}

XRL_64::XRL_64(Alu &a) : Instruction(a)
{
  opcode = 0x64;
  operands = 1;
}

std::string XRL_64::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "XRL A, #";
  ss << (int) memory.Get(address+1);
  return ss.str();
}

void XRL_64::Execute() const
{
  std::uint8_t data = alu.flash.Get(alu.GetPC() + 1);

  alu.SetA(alu.GetA() | data);
  alu.SetPC(alu.GetPC() + 1 + operands);
}

XRL_65::XRL_65(Alu &a) : Instruction(a)
{
  opcode = 0x65;
  operands = 1;
}

std::string XRL_65::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "XRL A, ";
  ss << (int) memory.Get(address+1);
  return ss.str();
}

XRL_63::XRL_63(Alu &a) : Instruction(a)
{
  opcode = 0x63;
  operands = 2;
}

std::string XRL_63::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "XRL ";
  ss << (int) memory.Get(address+1) << ", #" << (int) memory.Get(address+2);
  return ss.str();
}

void XRL_63::Execute() const
{
  std::uint8_t addr = alu.flash.Get(alu.GetPC() + 1);
  std::uint8_t data = alu.flash.Get(alu.GetPC() + 2);

  alu.Write(addr, data | alu.Read(addr));
  alu.SetPC(alu.GetPC() + 1 + operands);
}
