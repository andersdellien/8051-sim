#include <string>
#include <sstream>
#include <iomanip>
#include "instruction.hpp"
#include "instruction_set.hpp"

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

ADD_24::ADD_24(Alu &a) : Instruction(a)
{
  opcode = 0x24;
  operands = 1;
}

std::string ADD_24::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "ADD A, #";
  ss << (int) memory.Get(address+1);
  return ss.str();
}

ADD_25::ADD_25(Alu &a) : Instruction(a)
{
  opcode = 0x25;
  operands = 1;
}

std::string ADD_25::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "ADD A,";
  ss << (int) memory.Get(address+1);
  return ss.str();
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

ADD_28::ADD_28(Alu &a) : Instruction(a)
{
  opcode = 0x28;
  operands = 0;
}

std::string ADD_28::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "ADD A, R0";
}

ADD_29::ADD_29(Alu &a) : Instruction(a)
{
  opcode = 0x29;
  operands = 0;
}

std::string ADD_29::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "ADD A, R1";
}

ADD_2A::ADD_2A(Alu &a) : Instruction(a)
{
  opcode = 0x2A;
  operands = 0;
}

std::string ADD_2A::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "ADD A, R2";
}

ADD_2B::ADD_2B(Alu &a) : Instruction(a)
{
  opcode = 0x2B;
  operands = 0;
}

std::string ADD_2B::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "ADD A, R3";
}

ADD_2C::ADD_2C(Alu &a) : Instruction(a)
{
  opcode = 0x2C;
  operands = 0;
}

std::string ADD_2C::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "ADD A, R4";
}

ADD_2D::ADD_2D(Alu &a) : Instruction(a)
{
  opcode = 0x2D;
  operands = 0;
}

std::string ADD_2D::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "ADD A, R5";
}

ADD_2E::ADD_2E(Alu &a) : Instruction(a)
{
  opcode = 0x2E;
  operands = 0;
}

std::string ADD_2E::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "ADD A, R6";
}

ADD_2F::ADD_2F(Alu &a) : Instruction(a)
{
  opcode = 0x2F;
  operands = 0;
}

std::string ADD_2F::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "ADD A, R7";
}

ADDC_34::ADDC_34(Alu &a) : Instruction(a)
{
  opcode = 0x34;
  operands = 1;
}

std::string ADDC_34::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "ADDC A, #";
  ss << (int) memory.Get(address+1);
  return ss.str();
}

ADDC_35::ADDC_35(Alu &a) : Instruction(a)
{
  opcode = 0x35;
  operands = 1;
}

std::string ADDC_35::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "ADDC A,";
  ss << (int) memory.Get(address+1);
  return ss.str();
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

ADDC_38::ADDC_38(Alu &a) : Instruction(a)
{
  opcode = 0x38;
  operands = 0;
}

std::string ADDC_38::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "ADDC A, R0";
}

ADDC_39::ADDC_39(Alu &a) : Instruction(a)
{
  opcode = 0x39;
  operands = 0;
}

std::string ADDC_39::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "ADDC A, R1";
}

ADDC_3A::ADDC_3A(Alu &a) : Instruction(a)
{
  opcode = 0x3A;
  operands = 0;
}

std::string ADDC_3A::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "ADDC A, R2";
}

ADDC_3B::ADDC_3B(Alu &a) : Instruction(a)
{
  opcode = 0x3B;
  operands = 0;
}

std::string ADDC_3B::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "ADDC A, R3";
}

ADDC_3C::ADDC_3C(Alu &a) : Instruction(a)
{
  opcode = 0x3C;
  operands = 0;
}

std::string ADDC_3C::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "ADDC A, R4";
}

ADDC_3D::ADDC_3D(Alu &a) : Instruction(a)
{
  opcode = 0x3D;
  operands = 0;
}

std::string ADDC_3D::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "ADDC A, R5";
}

ADDC_3E::ADDC_3E(Alu &a) : Instruction(a)
{
  opcode = 0x3E;
  operands = 0;
}

std::string ADDC_3E::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "ADDC A, R6";
}

ADDC_3F::ADDC_3F(Alu &a) : Instruction(a)
{
  opcode = 0x3F;
  operands = 0;
}

std::string ADDC_3F::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "ADDC A, R7";
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

ANL_54::ANL_54(Alu &a) : Instruction(a)
{
  opcode = 0x54;
  operands = 1;
}

std::string ANL_54::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "ANL A,";
  ss << (int) memory.Get(address+1);
  return ss.str();
}

ANL_55::ANL_55(Alu &a) : Instruction(a)
{
  opcode = 0x55;
  operands = 1;
}

std::string ANL_55::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "ANL A,";
  ss << (int) memory.Get(address+1);
  return ss.str();
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

ANL_59::ANL_59(Alu &a) : Instruction(a)
{
  opcode = 0x59;
  operands = 0;
}

std::string ANL_59::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "ANL A, R1";
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

ANL_5B::ANL_5B(Alu &a) : Instruction(a)
{
  opcode = 0x5B;
  operands = 0;
}

std::string ANL_5B::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "ANL A, R3";
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

ANL_5D::ANL_5D(Alu &a) : Instruction(a)
{
  opcode = 0x5D;
  operands = 0;
}

std::string ANL_5D::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "ANL A, R5";
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

ANL_5F::ANL_5F(Alu &a) : Instruction(a)
{
  opcode = 0x5F;
  operands = 0;
}

std::string ANL_5F::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "ANL A, R7";
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

CJNE_B6::CJNE_B6(Alu &a) : Instruction(a)
{
  opcode = 0xB6;
  operands = 2;
}

std::string CJNE_B6::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "CJNE @R0, #";
  ss << (int) memory.Get(address+1) << ", " << (int) memory.Get(address+2);
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
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "CJNE R0, #";
  ss << (int) memory.Get(address+1) << ", " << (int) memory.Get(address+2);
  return ss.str();
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
  ss << (int) memory.Get(address+1) << ", " << (int) memory.Get(address+2);
  return ss.str();
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
  ss << (int) memory.Get(address+1) << ", " << (int) memory.Get(address+2);
  return ss.str();
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
  ss << (int) memory.Get(address+1) << " " << (int) memory.Get(address+2);
  return ss.str();
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
  ss << (int) memory.Get(address+1) << ", " << (int) memory.Get(address+2);
  return ss.str();
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
  ss << memory.Get(address+1) << ", " << (int) memory.Get(address+2);
  return ss.str();
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
  ss << memory.Get(address+1) << ", " << (int) memory.Get(address+2);
  return ss.str();
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
  ss << memory.Get(address+1) << ", " << (int) memory.Get(address+2);
  return ss.str();
}

CLR_C2::CLR_C2(Alu &a) : Instruction(a)
{
  opcode = 0xC2;
  operands = 1;
}

std::string CLR_C2::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "CLR ";
  ss << (int) memory.Get(address+1);
  return ss.str();
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

CLR_E4::CLR_E4(Alu &a) : Instruction(a)
{
  opcode = 0xE4;
  operands = 0;
}

std::string CLR_E4::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "CLR A";
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

DEC_19::DEC_19(Alu &a) : Instruction(a)
{
  opcode = 0x19;
  operands = 0;
}

std::string DEC_19::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "DEC R1";
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

DEC_1B::DEC_1B(Alu &a) : Instruction(a)
{
  opcode = 0x1B;
  operands = 0;
}

std::string DEC_1B::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "DEC R3";
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

DEC_1D::DEC_1D(Alu &a) : Instruction(a)
{
  opcode = 0x1D;
  operands = 0;
}

std::string DEC_1D::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "DEC R5";
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

DEC_1F::DEC_1F(Alu &a) : Instruction(a)
{
  opcode = 0x1F;
  operands = 0;
}

std::string DEC_1F::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "DEC R7";
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
  ss << memory.Get(address+1);
  return ss.str();
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
  ss << memory.Get(address+1);
  return ss.str();
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
  ss << memory.Get(address+1);
  return ss.str();
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
  ss << memory.Get(address+1);
  return ss.str();
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
  ss << memory.Get(address+1);
  return ss.str();
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

INC_8::INC_8(Alu &a) : Instruction(a)
{
  opcode = 8;
  operands = 0;
}

std::string INC_8::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "INC R0";
}

INC_9::INC_9(Alu &a) : Instruction(a)
{
  opcode = 9;
  operands = 0;
}

std::string INC_9::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "INC R1";
}

INC_A::INC_A(Alu &a) : Instruction(a)
{
  opcode = 0xA;
  operands = 0;
}

std::string INC_A::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "INC R2";
}

INC_B::INC_B(Alu &a) : Instruction(a)
{
  opcode = 0xB;
  operands = 0;
}

std::string INC_B::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "INC R3";
}

INC_C::INC_C(Alu &a) : Instruction(a)
{
  opcode = 0xC;
  operands = 0;
}

std::string INC_C::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "INC R4";
}

INC_D::INC_D(Alu &a) : Instruction(a)
{
  opcode = 0xD;
  operands = 0;
}

std::string INC_D::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "INC R5";
}

INC_E::INC_E(Alu &a) : Instruction(a)
{
  opcode = 0xE;
  operands = 0;
}

std::string INC_E::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "INC R6";
}

INC_F::INC_F(Alu &a) : Instruction(a)
{
  opcode = 0xF;
  operands = 0;
}

std::string INC_F::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "INC R7";
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
  ss << (int) memory.Get(address+1) << ", " << (int) memory.Get(address+2);
  return ss.str();
}

LJMP_2::LJMP_2(Alu &a) : Instruction(a)
{
  opcode = 0x2;
  operands = 2;
}

std::string LJMP_2::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "LJMP ";
  ss << (int) memory.Get(address+1) << ", " << (int) memory.Get(address+2);
  return ss.str();
}

MOV_90::MOV_90(Alu &a) : Instruction(a)
{
  opcode = 0x90;
  operands = 2;
}

std::string MOV_90::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "MOV DPTR, #";
  ss << (int) memory.Get(address+1) << (int) memory.Get(address+2);
  return ss.str();
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
  ss << (int) memory.Get(address+1) << ", #" << (int) memory.Get(address+2);
  return ss.str();
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
  ss << (int) memory.Get(address+1) << ", " << (int) memory.Get(address+2);
  return ss.str();
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
  ss << (int) memory.Get(address+1);
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
  ss << (int) memory.Get(address+1);
  return ss.str();
}

MOV_A6::MOV_A6(Alu &a) : Instruction(a)
{
  opcode = 0xA6;
  operands = 1;
}

std::string MOV_A6::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "MOV @R0, ";
  ss << (int) memory.Get(address+1);
  return ss.str();
}

MOV_A7::MOV_A7(Alu &a) : Instruction(a)
{
  opcode = 0xA7;
  operands = 1;
}

std::string MOV_A7::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "MOV @R1, ";
  ss << (int) memory.Get(address+1);
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
  ss << (int) memory.Get(address+1);
  return ss.str();
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
  ss << (int) memory.Get(address+1);
  return ss.str();
}

MOV_78::MOV_78(Alu &a) : Instruction(a)
{
  opcode = 0x78;
  operands = 1;
}

std::string MOV_78::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "MOV R0, #";
  ss << (int) memory.Get(address+1);
  return ss.str();
}

MOV_79::MOV_79(Alu &a) : Instruction(a)
{
  opcode = 0x79;
  operands = 1;
}

std::string MOV_79::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "MOV R1, #";
  ss << (int) memory.Get(address+1);
  return ss.str();
}

MOV_7A::MOV_7A(Alu &a) : Instruction(a)
{
  opcode = 0x7A;
  operands = 1;
}

std::string MOV_7A::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "MOV R2, #";
  ss << (int) memory.Get(address+1);
  return ss.str();
}

MOV_7B::MOV_7B(Alu &a) : Instruction(a)
{
  opcode = 0x7B;
  operands = 1;
}

std::string MOV_7B::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "MOV R3, #";
  ss << (int) memory.Get(address+1);
  return ss.str();
}

MOV_7C::MOV_7C(Alu &a) : Instruction(a)
{
  opcode = 0x7C;
  operands = 1;
}

std::string MOV_7C::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "MOV R4, #";
  ss << (int) memory.Get(address+1);
  return ss.str();
}

MOV_7D::MOV_7D(Alu &a) : Instruction(a)
{
  opcode = 0x7D;
  operands = 1;
}

std::string MOV_7D::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "MOV R5, #";
  ss << (int) memory.Get(address+1);
  return ss.str();
}

MOV_7E::MOV_7E(Alu &a) : Instruction(a)
{
  opcode = 0x7E;
  operands = 1;
}

std::string MOV_7E::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "MOV R6, #";
  ss << (int) memory.Get(address+1);
  return ss.str();
}

MOV_7F::MOV_7F(Alu &a) : Instruction(a)
{
  opcode = 0x7F;
  operands = 1;
}

std::string MOV_7F::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "MOV R7, #";
  ss << (int) memory.Get(address+1);
  return ss.str();
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
  ss << (int) memory.Get(address+1);
  return ss.str();
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
  ss << (int) memory.Get(address+1);
  return ss.str();
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
  ss << (int) memory.Get(address+1);
  return ss.str();
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
  ss << (int) memory.Get(address+1);
  return ss.str();
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
  ss << (int) memory.Get(address+1);
  return ss.str();
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
  ss << (int) memory.Get(address+1);
  return ss.str();
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
  ss << (int) memory.Get(address+1);
  return ss.str();
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
  ss << (int) memory.Get(address+1);
  return ss.str();
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
  ss << (int) memory.Get(address+1) << ", A";
  return ss.str();
}

MOV_F6::MOV_F6(Alu &a) : Instruction(a)
{
  opcode = 0xF6;
  operands = 0;
}

std::string MOV_F6::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "MOV @R0, A";
}

MOV_F7::MOV_F7(Alu &a) : Instruction(a)
{
  opcode = 0xF7;
  operands = 0;
}

std::string MOV_F7::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "MOV @R1, A";
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

MOV_E9::MOV_E9(Alu &a) : Instruction(a)
{
  opcode = 0xE9;
  operands = 0;
}

std::string MOV_E9::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "MOV A, R1";
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

MOV_EB::MOV_EB(Alu &a) : Instruction(a)
{
  opcode = 0xEB;
  operands = 0;
}

std::string MOV_EB::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "MOV A, R3";
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

MOV_ED::MOV_ED(Alu &a) : Instruction(a)
{
  opcode = 0xED;
  operands = 0;
}

std::string MOV_ED::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "MOV A, R5";
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

MOV_EF::MOV_EF(Alu &a) : Instruction(a)
{
  opcode = 0xEF;
  operands = 0;
}

std::string MOV_EF::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "MOV A, R7";
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

MOV_F9::MOV_F9(Alu &a) : Instruction(a)
{
  opcode = 0xF9;
  operands = 0;
}

std::string MOV_F9::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "MOV R1, A";
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

MOV_FB::MOV_FB(Alu &a) : Instruction(a)
{
  opcode = 0xFB;
  operands = 0;
}

std::string MOV_FB::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "MOV R3, A";
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

MOV_FD::MOV_FD(Alu &a) : Instruction(a)
{
  opcode = 0xFD;
  operands = 0;
}

std::string MOV_FD::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "MOV R5, A";
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

MOV_FF::MOV_FF(Alu &a) : Instruction(a)
{
  opcode = 0xFF;
  operands = 0;
}

std::string MOV_FF::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "MOV R7, A";
}

MOVC_93::MOVC_93(Alu &a) : Instruction(a)
{
  opcode = 0x93;
  operands = 0;
}

std::string MOVC_93::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "MOV A, @A+DPTR";
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

MOVX_F2::MOVX_F2(Alu &a) : Instruction(a)
{
  opcode = 0xF2;
  operands = 0;
}

std::string MOVX_F2::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "MOVX @R0, A";
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

ORL_43::ORL_43(Alu &a) : Instruction(a)
{
  opcode = 0x43;
  operands = 2;
}

std::string ORL_43::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "ORL ";
  ss << (int) memory.Get(address+1) << ", #" << (int) memory.Get(address+2);
  return ss.str();
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

ORL_48::ORL_48(Alu &a) : Instruction(a)
{
  opcode = 0x48;
  operands = 0;
}

std::string ORL_48::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "ORL A, R0";
}

ORL_49::ORL_49(Alu &a) : Instruction(a)
{
  opcode = 0x49;
  operands = 0;
}

std::string ORL_49::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "ORL A, R1";
}

ORL_4A::ORL_4A(Alu &a) : Instruction(a)
{
  opcode = 0x4A;
  operands = 0;
}

std::string ORL_4A::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "ORL A, R2";
}

ORL_4B::ORL_4B(Alu &a) : Instruction(a)
{
  opcode = 0x4B;
  operands = 0;
}

std::string ORL_4B::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "ORL A, R3";
}

ORL_4C::ORL_4C(Alu &a) : Instruction(a)
{
  opcode = 0x4C;
  operands = 0;
}

std::string ORL_4C::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "ORL A, R4";
}

ORL_4D::ORL_4D(Alu &a) : Instruction(a)
{
  opcode = 0x4D;
  operands = 0;
}

std::string ORL_4D::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "ORL A, R5";
}

ORL_4E::ORL_4E(Alu &a) : Instruction(a)
{
  opcode = 0x4E;
  operands = 0;
}

std::string ORL_4E::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "ORL A, R6";
}

ORL_4F::ORL_4F(Alu &a) : Instruction(a)
{
  opcode = 0x4F;
  operands = 0;
}

std::string ORL_4F::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "ORL A, R7";
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

PUSH_C0::PUSH_C0(Alu &a) : Instruction(a)
{
  opcode = 0xC0;
  operands = 1;
}

std::string PUSH_C0::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "PUSH ";
  ss << (int) memory.Get(address+1);
  return ss.str();
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

RLC_33::RLC_33(Alu &a) : Instruction(a)
{
  opcode = 0x33;
  operands = 0;
}

std::string RLC_33::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "RLC A";
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

SJMP_80::SJMP_80(Alu &a) : Instruction(a)
{
  opcode = 0x80;
  operands = 2;
}

std::string SJMP_80::Disassemble(const Memory& memory, std::uint16_t address) const
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex;
  ss << "SJMP ";
  ss << (int) memory.Get(address+1);
  return ss.str();
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

SUBB_95::SUBB_95(Alu &a) : Instruction(a)
{
  opcode = 0x95;
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

SUBB_98::SUBB_98(Alu &a) : Instruction(a)
{
  opcode = 0x98;
  operands = 0;
}

std::string SUBB_98::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "SUBB A, R0";
}

SUBB_99::SUBB_99(Alu &a) : Instruction(a)
{
  opcode = 0x99;
  operands = 0;
}

std::string SUBB_99::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "SUBB A, R1";
}

SUBB_9A::SUBB_9A(Alu &a) : Instruction(a)
{
  opcode = 0x9A;
  operands = 0;
}

std::string SUBB_9A::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "SUBB A, R2";
}

SUBB_9B::SUBB_9B(Alu &a) : Instruction(a)
{
  opcode = 0x9B;
  operands = 0;
}

std::string SUBB_9B::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "SUBB A, R3";
}

SUBB_9C::SUBB_9C(Alu &a) : Instruction(a)
{
  opcode = 0x9C;
  operands = 0;
}

std::string SUBB_9C::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "SUBB A, R4";
}

SUBB_9D::SUBB_9D(Alu &a) : Instruction(a)
{
  opcode = 0x9D;
  operands = 0;
}

std::string SUBB_9D::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "SUBB_A, R5";
}

SUBB_9E::SUBB_9E(Alu &a) : Instruction(a)
{
  opcode = 0x9E;
  operands = 0;
}

std::string SUBB_9E::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "SUBB A, R6";
}

SUBB_9F::SUBB_9F(Alu &a) : Instruction(a)
{
  opcode = 0x9F;
  operands = 0;
}

std::string SUBB_9F::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "SUBB A, R7";
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

XCH_C9::XCH_C9(Alu &a) : Instruction(a)
{
  opcode = 0xC9;
  operands = 0;
}

std::string XCH_C9::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "XCH A, R1";
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

XCH_CB::XCH_CB(Alu &a) : Instruction(a)
{
  opcode = 0xCB;
  operands = 0;
}

std::string XCH_CB::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "XCH A, R3";
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

XCH_CD::XCH_CD(Alu &a) : Instruction(a)
{
  opcode = 0xCD;
  operands = 0;
}

std::string XCH_CD::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "XCH A, R5";
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

XCH_CF::XCH_CF(Alu &a) : Instruction(a)
{
  opcode = 0xCF;
  operands = 0;
}

std::string XCH_CF::Disassemble(const Memory& memory, std::uint16_t address) const
{
  return "XCH A, R7";
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
