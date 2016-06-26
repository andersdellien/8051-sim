/*
 * Copyright (C) 2016 Sensative AB
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef _INSTRUCTION_SET_HPP
#define _INSTRUCTION_SET_HPP

#include <string>
#include "instruction.hpp"

class NOP: public Instruction
{
  public:
    NOP(Alu&);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class AJMP: public Instruction
{
  public:
    AJMP(Alu&, std::uint8_t opcode);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class LJMP_2: public Instruction
{
  public:
    LJMP_2(Alu&);
    std::string Disassemble(std::uint16_t address) const;
    bool IsJump() const;
    void Execute() const;
    std::set<std::uint16_t> GetNextAddresses(std::uint16_t address) const;
};

class RR_3: public Instruction
{
  public:
    RR_3(Alu&);
    std::string Disassemble(std::uint16_t address) const;
};

class INC_4: public Instruction
{
  public:
    INC_4(Alu&);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class INC_5: public Instruction
{
  public:
    INC_5(Alu&);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class INC_6: public Instruction
{
  public:
    INC_6(Alu&);
    std::string Disassemble(std::uint16_t address) const;
};

class INC_7: public Instruction
{
  public:
    INC_7(Alu&);
    std::string Disassemble(std::uint16_t address) const;
};

class IncRegister: public Instruction
{
  public:
    IncRegister(Alu&, std::uint8_t opcode, std::uint8_t reg);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class DecRegister: public Instruction
{
  public:
    DecRegister(Alu&, std::uint8_t opcode, std::uint8_t reg);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class CondJump: public Instruction
{
  public:
    CondJump(Alu&, std::uint8_t opcode);
    bool IsJump() const;
    std::set<std::uint16_t> GetNextAddresses(std::uint16_t address) const;
};

class JBC_10: public CondJump
{
  public:
    JBC_10(Alu&, std::uint8_t opcode);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class ACALL: public Instruction
{
  public:
    ACALL(Alu&, std::uint8_t opcode);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class LCALL_12: public Instruction
{
  public:
    LCALL_12(Alu&);
    std::string Disassemble(std::uint16_t address) const;
    bool IsJump() const;
    void Execute() const;
    std::set<std::uint16_t> GetNextAddresses(std::uint16_t address) const;
};

class RRC_13: public Instruction
{
  public:
    RRC_13(Alu&);
    std::string Disassemble(std::uint16_t address) const;
};

class DEC_14: public Instruction
{
  public:
    DEC_14(Alu&);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class DEC_15: public Instruction
{
  public:
    DEC_15(Alu&);
    std::string Disassemble(std::uint16_t address) const;
};

class DEC_16: public Instruction
{
  public:
    DEC_16(Alu&);
    std::string Disassemble(std::uint16_t address) const;
};

class DEC_17: public Instruction
{
  public:
    DEC_17(Alu&);
    std::string Disassemble(std::uint16_t address) const;
};

class DEC_18: public Instruction
{
  public:
    DEC_18(Alu&);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class DEC_19: public Instruction
{
  public:
    DEC_19(Alu&);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class DEC_1A: public Instruction
{
  public:
    DEC_1A(Alu&);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class DEC_1B: public Instruction
{
  public:
    DEC_1B(Alu&);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class DEC_1C: public Instruction
{
  public:
    DEC_1C(Alu&);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class DEC_1D: public Instruction
{
  public:
    DEC_1D(Alu&);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class DEC_1E: public Instruction
{
  public:
    DEC_1E(Alu&);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class DEC_1F: public Instruction
{
  public:
    DEC_1F(Alu&);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class JB_20: public CondJump
{
  public:
    JB_20(Alu&, std::uint8_t opcode);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class RET_22: public Instruction
{
  public:
    RET_22(Alu&);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
    bool IsJump() const;
    std::set<std::uint16_t> GetNextAddresses(std::uint16_t address) const;
};

class RL_23: public Instruction
{
  public:
    RL_23(Alu&);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class AdditionHelper: public Instruction
{
  public:
    AdditionHelper(Alu& alu, std::uint8_t opcode, std::uint8_t reg, bool carry);
  protected:
    void Helper(std::uint16_t operand) const;
    bool carry;
};

// 0x24 and 0x34
class AddImmediate: public AdditionHelper
{
  public:
    AddImmediate(Alu&, std::uint8_t opcode, bool carry);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
    void UpdateConstraints(RegisterConstraints &c, std::uint16_t address, std::uint16_t destination);
};

// 0x25 and 0x35
class AddMemory: public AdditionHelper
{
  public:
    AddMemory(Alu&, std::uint8_t opcode, bool carry);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

// 0x26, 0x27 (ADD A, @R{n}) and 0x36, 0x37 (ADDC A, @R{n})
class AddIndirectRegister: public AdditionHelper
{
  public:
    AddIndirectRegister(Alu&, std::uint8_t opcode, std::uint8_t reg, bool carry);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

/* Instructions 0x28 - 0x2f ADD A, R{n}*/
/* Instructions 0x38 - 0x3f ADDC A, R{n}*/
class AddRegister: public AdditionHelper
{
  public:
    AddRegister(Alu&, std::uint8_t opcode, std::uint8_t reg, bool carry);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class JNB_30: public CondJump
{
  public:
    JNB_30(Alu&, std::uint8_t opcode);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class RETI_32: public Instruction
{
  public:
    RETI_32(Alu&);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
    bool IsJump() const;
    std::set<std::uint16_t> GetNextAddresses(std::uint16_t address) const;
};

class RLC_33: public Instruction
{
  public:
    RLC_33(Alu&);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class ADDC_34: public Instruction
{
  public:
    ADDC_34(Alu&);
    std::string Disassemble(std::uint16_t address) const;
};

class JC_40: public CondJump
{
  public:
    JC_40(Alu&, std::uint8_t opcode);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class ORL_42: public Instruction
{
  public:
    ORL_42(Alu&);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class ORL_43: public Instruction
{
  public:
    ORL_43(Alu&);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class ORL_44: public Instruction
{
  public:
    ORL_44(Alu&);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class ORL_45: public Instruction
{
  public:
    ORL_45(Alu&);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class ORL_46: public Instruction
{
  public:
    ORL_46(Alu&);
    std::string Disassemble(std::uint16_t address) const;
};

class ORL_47: public Instruction
{
  public:
    ORL_47(Alu&);
    std::string Disassemble(std::uint16_t address) const;
};

class OrARegister: public Instruction
{
  public:
    OrARegister(Alu&, std::uint8_t opcode, std::uint8_t reg);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class AndARegister: public Instruction
{
  public:
    AndARegister(Alu&, std::uint8_t opcode, std::uint8_t reg);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class XorARegister: public Instruction
{
  public:
    XorARegister(Alu&, std::uint8_t opcode, std::uint8_t reg);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class JNC_50: public CondJump
{
  public:
    JNC_50(Alu&, std::uint8_t opcode);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
    void UpdateConstraints(RegisterConstraints &c, std::uint16_t address, std::uint16_t destination);
};

class ANL_52: public Instruction
{
  public:
    ANL_52(Alu&);
    std::string Disassemble(std::uint16_t address) const;
};

class ANL_53: public Instruction
{
  public:
    ANL_53(Alu&);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class ANL_54: public Instruction
{
  public:
    ANL_54(Alu&);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class ANL_55: public Instruction
{
  public:
    ANL_55(Alu&);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class ANL_56: public Instruction
{
  public:
    ANL_56(Alu&);
    std::string Disassemble(std::uint16_t address) const;
};

class ANL_57: public Instruction
{
  public:
    ANL_57(Alu&);
    std::string Disassemble(std::uint16_t address) const;
};

class ANL_58: public Instruction
{
  public:
    ANL_58(Alu&);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class ANL_59: public Instruction
{
  public:
    ANL_59(Alu&);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class ANL_5A: public Instruction
{
  public:
    ANL_5A(Alu&);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class ANL_5B: public Instruction
{
  public:
    ANL_5B(Alu&);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class ANL_5C: public Instruction
{
  public:
    ANL_5C(Alu&);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class ANL_5D: public Instruction
{
  public:
    ANL_5D(Alu&);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class ANL_5E: public Instruction
{
  public:
    ANL_5E(Alu&);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class ANL_5F: public Instruction
{
  public:
    ANL_5F(Alu&);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class JZ_60: public CondJump
{
  public:
    JZ_60(Alu&, std::uint8_t opcode);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class XRL_62: public Instruction
{
  public:
    XRL_62(Alu&);
    std::string Disassemble(std::uint16_t address) const;
};

class XRL_63: public Instruction
{
  public:
    XRL_63(Alu&);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class XRL_64: public Instruction
{
  public:
    XRL_64(Alu&);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class XRL_65: public Instruction
{
  public:
    XRL_65(Alu&);
    std::string Disassemble(std::uint16_t address) const;
};

class XRL_66: public Instruction
{
  public:
    XRL_66(Alu&);
    std::string Disassemble(std::uint16_t address) const;
};

class XRL_67: public Instruction
{
  public:
    XRL_67(Alu&);
    std::string Disassemble(std::uint16_t address) const;
};

class XRL_68: public Instruction
{
  public:
    XRL_68(Alu&);
    std::string Disassemble(std::uint16_t address) const;
};

class XRL_69: public Instruction
{
  public:
    XRL_69(Alu&);
    std::string Disassemble(std::uint16_t address) const;
};

class XRL_6A: public Instruction
{
  public:
    XRL_6A(Alu&);
    std::string Disassemble(std::uint16_t address) const;
};

class XRL_6B: public Instruction
{
  public:
    XRL_6B(Alu&);
    std::string Disassemble(std::uint16_t address) const;
};

class XRL_6C: public Instruction
{
  public:
    XRL_6C(Alu&);
    std::string Disassemble(std::uint16_t address) const;
};

class XRL_6D: public Instruction
{
  public:
    XRL_6D(Alu&);
    std::string Disassemble(std::uint16_t address) const;
};

class XRL_6E: public Instruction
{
  public:
    XRL_6E(Alu&);
    std::string Disassemble(std::uint16_t address) const;
};

class XRL_6F: public Instruction
{
  public:
    XRL_6F(Alu&);
    std::string Disassemble(std::uint16_t address) const;
};

class JNZ_70: public CondJump
{
  public:
    JNZ_70(Alu&, std::uint8_t opcode);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class ORL_72: public Instruction
{
  public:
    ORL_72(Alu&);
    std::string Disassemble(std::uint16_t address) const;
};

class JMP_73: public Instruction
{
  public:
    JMP_73(Alu&);
    std::string Disassemble(std::uint16_t address) const;
    bool IsJump() const;
    void Execute() const;
    std::set<std::uint16_t> GetNextAddresses(std::uint16_t address) const;
};

class MOV_74: public Instruction
{
  public:
    MOV_74(Alu&);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class MOV_75: public Instruction
{
  public:
    MOV_75(Alu&);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

// 0x76 and 0x77 
class MovRegisterIndirectImmediate: public Instruction
{
  public:
    MovRegisterIndirectImmediate(Alu&, std::uint8_t opcode, std::uint8_t reg);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class MovRegisterImmediate: public Instruction
{
  public:
    MovRegisterImmediate(Alu&, std::uint8_t opcode, std::uint8_t reg);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class MovRegisterA: public Instruction
{
  public:
    MovRegisterA(Alu&, std::uint8_t opcode, std::uint8_t reg);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
    void UpdateConstraints(RegisterConstraints &c, std::uint16_t address, std::uint16_t destination);
};

class SJMP_80: public Instruction
{
  public:
    SJMP_80(Alu&);
    std::string Disassemble(std::uint16_t address) const;
    bool IsJump() const;
    void Execute() const;
    std::set<std::uint16_t> GetNextAddresses(std::uint16_t address) const;
};

class ANL_82: public Instruction
{
  public:
    ANL_82(Alu&);
    std::string Disassemble(std::uint16_t address) const;
};

class MOVC_83: public Instruction
{
  public:
    MOVC_83(Alu&);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
    void UpdateConstraints(RegisterConstraints &c, std::uint16_t address, std::uint16_t destination);
};

class DIV_84: public Instruction
{
  public:
    DIV_84(Alu&);
    std::string Disassemble(std::uint16_t address) const;
};

class MOV_85: public Instruction
{
  public:
    MOV_85(Alu&);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class MovMemoryIndirectRegister: public Instruction
{
  public:
    MovMemoryIndirectRegister(Alu&, std::uint8_t opcode, std::uint8_t reg);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class MovARegister: public Instruction
{
  public:
    MovARegister(Alu&, std::uint8_t opcode, std::uint8_t reg);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
    void UpdateConstraints(RegisterConstraints &c, std::uint16_t address, std::uint16_t destination);
};

class MovAddressRegister: public Instruction
{
  public:
    MovAddressRegister(Alu&, std::uint8_t opcode, std::uint8_t reg);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class MOV_90: public Instruction
{
  public:
    MOV_90(Alu&);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
    void UpdateConstraints(RegisterConstraints &c, std::uint16_t address, std::uint16_t destination);
};

class MOV_92: public Instruction
{
  public:
    MOV_92(Alu&);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class MOVC_93: public Instruction
{
  public:
    MOVC_93(Alu&);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class SubtractionHelper: public Instruction
{
  public:
    SubtractionHelper(Alu& alu, std::uint8_t opcode, std::uint8_t reg);
  protected:
    void Helper(std::uint16_t operand) const;
};

class SUBB_94: public SubtractionHelper
{
  public:
    SUBB_94(Alu&, std::uint8_t opcode);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class SUBB_95: public SubtractionHelper
{
  public:
    SUBB_95(Alu&, std::uint8_t opcode);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class SUBB_96: public Instruction
{
  public:
    SUBB_96(Alu&);
    std::string Disassemble(std::uint16_t address) const;
};

class SUBB_97: public Instruction
{
  public:
    SUBB_97(Alu&);
    std::string Disassemble(std::uint16_t address) const;
};

// 0x98 - 0x9f
class SubARegister: public SubtractionHelper
{
  public:
    SubARegister(Alu&, std::uint8_t opcode, std::uint8_t reg);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class ORL_A0: public Instruction
{
  public:
    ORL_A0(Alu&);
    std::string Disassemble(std::uint16_t address) const;
};

class MOV_A2: public Instruction
{
  public:
    MOV_A2(Alu&);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class INC_A3: public Instruction
{
  public:
    INC_A3(Alu&);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class MUL_A4: public Instruction
{
  public:
    MUL_A4(Alu&);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class MOV_A6: public Instruction
{
  public:
    MOV_A6(Alu&);
    std::string Disassemble(std::uint16_t address) const;
};

class MOV_A7: public Instruction
{
  public:
    MOV_A7(Alu&);
    std::string Disassemble(std::uint16_t address) const;
};

class MovRegisterAddress: public Instruction
{
  public:
    MovRegisterAddress(Alu&, std::uint8_t opcode, std::uint8_t reg);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class ANL_B0: public Instruction
{
  public:
    ANL_B0(Alu&);
    std::string Disassemble(std::uint16_t address) const;
};

class CPL_B2: public Instruction
{
  public:
    CPL_B2(Alu&);
    std::string Disassemble(std::uint16_t address) const;
};

class CPL_B3: public Instruction
{
  public:
    CPL_B3(Alu&);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class CJNE_B4: public Instruction
{
  public:
    CJNE_B4(Alu&);
    std::string Disassemble(std::uint16_t address) const;
};

class CJNE_B5: public Instruction
{
  public:
    CJNE_B5(Alu&);
    std::string Disassemble(std::uint16_t address) const;
    bool IsJump() const;
    void Execute() const;
    std::set<std::uint16_t> GetNextAddresses(std::uint16_t address) const;
};

class CJNE_B6: public Instruction
{
  public:
    CJNE_B6(Alu&);
    std::string Disassemble(std::uint16_t address) const;
};

class CJNE_B7: public Instruction
{
  public:
    CJNE_B7(Alu&);
    std::string Disassemble(std::uint16_t address) const;
};

class CJNERegister: public Instruction
{
  public:
    CJNERegister(Alu&, std::uint8_t opcode, std::uint8_t reg);
    std::string Disassemble(std::uint16_t address) const;
    bool IsJump() const;
    void Execute() const;
    std::set<std::uint16_t> GetNextAddresses(std::uint16_t address) const;
};

class PUSH_C0: public Instruction
{
  public:
    PUSH_C0(Alu&);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class CLR_C2: public Instruction
{
  public:
    CLR_C2(Alu&);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class CLR_C3: public Instruction
{
  public:
    CLR_C3(Alu&);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class SWAP_C4: public Instruction
{
  public:
    SWAP_C4(Alu&, std::uint8_t opcode, std::uint8_t reg);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class XCH_C5: public Instruction
{
  public:
    XCH_C5(Alu&);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class XCH_C6: public Instruction
{
  public:
    XCH_C6(Alu&);
    std::string Disassemble(std::uint16_t address) const;
};

class XCH_C7: public Instruction
{
  public:
    XCH_C7(Alu&);
    std::string Disassemble(std::uint16_t address) const;
};

class XCHRegister: public Instruction
{
  public:
    XCHRegister(Alu&, std::uint8_t opcode, std::uint8_t reg);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class POP_D0: public Instruction
{
  public:
    POP_D0(Alu&);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class SETB_D2: public Instruction
{
  public:
    SETB_D2(Alu&);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class SETB_D3: public Instruction
{
  public:
    SETB_D3(Alu&);
    std::string Disassemble(std::uint16_t address) const;
};

class DA_D4: public Instruction
{
  public:
    DA_D4(Alu&);
    std::string Disassemble(std::uint16_t address) const;
};

class DJNZ_D5: public Instruction
{
  public:
    DJNZ_D5(Alu&);
    std::string Disassemble(std::uint16_t address) const;
};

class XCHD_D6: public Instruction
{
  public:
    XCHD_D6(Alu&);
    std::string Disassemble(std::uint16_t address) const;
};

class XCHD_D7: public Instruction
{
  public:
    XCHD_D7(Alu&);
    std::string Disassemble(std::uint16_t address) const;
};

class DJNZRegister: public Instruction
{
  public:
    DJNZRegister(Alu&, std::uint8_t opcode, std::uint8_t reg);
    std::string Disassemble(std::uint16_t address) const;
    bool IsJump() const;
    void Execute() const;
    std::set<std::uint16_t> GetNextAddresses(std::uint16_t address) const;
};

class MOVX_E0: public Instruction
{
  public:
    MOVX_E0(Alu&);
    std::string Disassemble(std::uint16_t address) const;
};

class MOVX_E2: public Instruction
{
  public:
    MOVX_E2(Alu&);
    std::string Disassemble(std::uint16_t address) const;
};

class MOVX_E3: public Instruction
{
  public:
    MOVX_E3(Alu&);
    std::string Disassemble(std::uint16_t address) const;
};

class CLR_E4: public Instruction
{
  public:
    CLR_E4(Alu&);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
    void UpdateConstraints(RegisterConstraints &c, std::uint16_t address, std::uint16_t destination);
};

class MOV_E5: public Instruction
{
  public:
    MOV_E5(Alu&);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class MovIndirectRegister: public Instruction
{
  public:
    MovIndirectRegister(Alu&, std::uint8_t opcode, std::uint8_t reg);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class MOVX_F0: public Instruction
{
  public:
    MOVX_F0(Alu&);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class MOVX_F2: public Instruction
{
  public:
    MOVX_F2(Alu&);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

class MOVX_F3: public Instruction
{
  public:
    MOVX_F3(Alu&);
    std::string Disassemble(std::uint16_t address) const;
};

class CPL_F4: public Instruction
{
  public:
    CPL_F4(Alu&);
    std::string Disassemble(std::uint16_t address) const;
};

class MOV_F5: public Instruction
{
  public:
    MOV_F5(Alu&);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
    void UpdateConstraints(RegisterConstraints &c, std::uint16_t address, std::uint16_t destination);
};

// 0xf6 and 0xf7
class MovIndirect: public Instruction
{
  public:
    MovIndirect(Alu&, std::uint8_t opcode, std::uint8_t reg);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

// 0xa6 and 0xa7
class MovIndirectFromMem: public Instruction
{
  public:
    MovIndirectFromMem(Alu&, std::uint8_t opcode, std::uint8_t reg);
    std::string Disassemble(std::uint16_t address) const;
    void Execute() const;
};

#endif
