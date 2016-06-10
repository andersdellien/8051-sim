#ifndef _INSTRUCTION_SET_HPP
#define _INSTRUCTION_SET_HPP

#include <string>
#include "instruction.hpp"

class NOP: public Instruction
{
  public:
    NOP(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class AJMP_1: public Instruction
{
  public:
    AJMP_1(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class LJMP_2: public Instruction
{
  public:
    LJMP_2(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class RR_3: public Instruction
{
  public:
    RR_3(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class INC_4: public Instruction
{
  public:
    INC_4(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class INC_5: public Instruction
{
  public:
    INC_5(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class INC_6: public Instruction
{
  public:
    INC_6(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class INC_7: public Instruction
{
  public:
    INC_7(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class INC_8: public Instruction
{
  public:
    INC_8(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class INC_9: public Instruction
{
  public:
    INC_9(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class INC_A: public Instruction
{
  public:
    INC_A(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class INC_B: public Instruction
{
  public:
    INC_B(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class INC_C: public Instruction
{
  public:
    INC_C(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class INC_D: public Instruction
{
  public:
    INC_D(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class INC_E: public Instruction
{
  public:
    INC_E(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class INC_F: public Instruction
{
  public:
    INC_F(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class JBC_10: public Instruction
{
  public:
    JBC_10(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class ACALL_11: public Instruction
{
  public:
    ACALL_11(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class LCALL_12: public Instruction
{
  public:
    LCALL_12(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class RRC_13: public Instruction
{
  public:
    RRC_13(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class DEC_14: public Instruction
{
  public:
    DEC_14(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class DEC_15: public Instruction
{
  public:
    DEC_15(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class DEC_16: public Instruction
{
  public:
    DEC_16(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class DEC_17: public Instruction
{
  public:
    DEC_17(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class DEC_18: public Instruction
{
  public:
    DEC_18(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class DEC_19: public Instruction
{
  public:
    DEC_19(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class DEC_1A: public Instruction
{
  public:
    DEC_1A(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class DEC_1B: public Instruction
{
  public:
    DEC_1B(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class DEC_1C: public Instruction
{
  public:
    DEC_1C(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class DEC_1D: public Instruction
{
  public:
    DEC_1D(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class DEC_1E: public Instruction
{
  public:
    DEC_1E(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class DEC_1F: public Instruction
{
  public:
    DEC_1F(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class JB_20: public Instruction
{
  public:
    JB_20(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class AJMP_21: public Instruction
{
  public:
    AJMP_21(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class RET_22: public Instruction
{
  public:
    RET_22(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class RL_23: public Instruction
{
  public:
    RL_23(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class AdditionHelper: public Instruction
{
  public:
    AdditionHelper(Alu& alu, std::uint8_t opcode, bool carry);
  protected:
    void Helper(std::uint16_t operand) const;
    bool carry;
};

// 0x24 and 0x34
class AddImmediate: public AdditionHelper
{
  public:
    AddImmediate(Alu&, std::uint8_t opcode, bool carry);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

// 0x25 and 0x35
class AddMemory: public AdditionHelper
{
  public:
    AddMemory(Alu&, std::uint8_t opcode, bool carry);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class ADD_26: public Instruction
{
  public:
    ADD_26(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class ADD_27: public Instruction
{
  public:
    ADD_27(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

/* Instructions 0x28 - 0x2f ADD A, R{n}*/
/* Instructions 0x38 - 0x3f ADDC A, R{n}*/
class AddRegister: public AdditionHelper
{
  public:
    AddRegister(Alu&, uint8_t reg, std::uint8_t opcode, bool carry);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
  private:
    std::uint8_t reg;
    bool carry;
};

class JNB_30: public Instruction
{
  public:
    JNB_30(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class ACALL_31: public Instruction
{
  public:
    ACALL_31(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class RETI_32: public Instruction
{
  public:
    RETI_32(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class RLC_33: public Instruction
{
  public:
    RLC_33(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class ADDC_34: public Instruction
{
  public:
    ADDC_34(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class ADDC_36: public Instruction
{
  public:
    ADDC_36(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class ADDC_37: public Instruction
{
  public:
    ADDC_37(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class JC_40: public Instruction
{
  public:
    JC_40(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class AJMP_41: public Instruction
{
  public:
    AJMP_41(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class ORL_42: public Instruction
{
  public:
    ORL_42(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class ORL_43: public Instruction
{
  public:
    ORL_43(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class ORL_44: public Instruction
{
  public:
    ORL_44(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class ORL_45: public Instruction
{
  public:
    ORL_45(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class ORL_46: public Instruction
{
  public:
    ORL_46(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class ORL_47: public Instruction
{
  public:
    ORL_47(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class ORL_48: public Instruction
{
  public:
    ORL_48(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class ORL_49: public Instruction
{
  public:
    ORL_49(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class ORL_4A: public Instruction
{
  public:
    ORL_4A(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class ORL_4B: public Instruction
{
  public:
    ORL_4B(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class ORL_4C: public Instruction
{
  public:
    ORL_4C(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class ORL_4D: public Instruction
{
  public:
    ORL_4D(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class ORL_4E: public Instruction
{
  public:
    ORL_4E(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class ORL_4F: public Instruction
{
  public:
    ORL_4F(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class JNC_50: public Instruction
{
  public:
    JNC_50(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class ACALL_51: public Instruction
{
  public:
    ACALL_51(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class ANL_52: public Instruction
{
  public:
    ANL_52(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class ANL_53: public Instruction
{
  public:
    ANL_53(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class ANL_54: public Instruction
{
  public:
    ANL_54(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class ANL_55: public Instruction
{
  public:
    ANL_55(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class ANL_56: public Instruction
{
  public:
    ANL_56(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class ANL_57: public Instruction
{
  public:
    ANL_57(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class ANL_58: public Instruction
{
  public:
    ANL_58(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class ANL_59: public Instruction
{
  public:
    ANL_59(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class ANL_5A: public Instruction
{
  public:
    ANL_5A(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class ANL_5B: public Instruction
{
  public:
    ANL_5B(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class ANL_5C: public Instruction
{
  public:
    ANL_5C(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class ANL_5D: public Instruction
{
  public:
    ANL_5D(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class ANL_5E: public Instruction
{
  public:
    ANL_5E(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class ANL_5F: public Instruction
{
  public:
    ANL_5F(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class JZ_60: public Instruction
{
  public:
    JZ_60(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class AJMP_61: public Instruction
{
  public:
    AJMP_61(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class XRL_62: public Instruction
{
  public:
    XRL_62(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class XRL_63: public Instruction
{
  public:
    XRL_63(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class XRL_64: public Instruction
{
  public:
    XRL_64(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class XRL_65: public Instruction
{
  public:
    XRL_65(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class XRL_66: public Instruction
{
  public:
    XRL_66(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class XRL_67: public Instruction
{
  public:
    XRL_67(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class XRL_68: public Instruction
{
  public:
    XRL_68(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class XRL_69: public Instruction
{
  public:
    XRL_69(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class XRL_6A: public Instruction
{
  public:
    XRL_6A(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class XRL_6B: public Instruction
{
  public:
    XRL_6B(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class XRL_6C: public Instruction
{
  public:
    XRL_6C(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class XRL_6D: public Instruction
{
  public:
    XRL_6D(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class XRL_6E: public Instruction
{
  public:
    XRL_6E(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class XRL_6F: public Instruction
{
  public:
    XRL_6F(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class JNZ_70: public Instruction
{
  public:
    JNZ_70(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class ACALL_71: public Instruction
{
  public:
    ACALL_71(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class ORL_72: public Instruction
{
  public:
    ORL_72(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class JMP_73: public Instruction
{
  public:
    JMP_73(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class MOV_74: public Instruction
{
  public:
    MOV_74(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class MOV_75: public Instruction
{
  public:
    MOV_75(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class MOV_76: public Instruction
{
  public:
    MOV_76(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class MOV_77: public Instruction
{
  public:
    MOV_77(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class MOV_78: public Instruction
{
  public:
    MOV_78(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class MOV_79: public Instruction
{
  public:
    MOV_79(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class MOV_7A: public Instruction
{
  public:
    MOV_7A(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class MOV_7B: public Instruction
{
  public:
    MOV_7B(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class MOV_7C: public Instruction
{
  public:
    MOV_7C(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class MOV_7D: public Instruction
{
  public:
    MOV_7D(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class MOV_7E: public Instruction
{
  public:
    MOV_7E(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class MOV_7F: public Instruction
{
  public:
    MOV_7F(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class SJMP_80: public Instruction
{
  public:
    SJMP_80(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class AJMP_81: public Instruction
{
  public:
    AJMP_81(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class ANL_82: public Instruction
{
  public:
    ANL_82(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class MOVC_83: public Instruction
{
  public:
    MOVC_83(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class DIV_84: public Instruction
{
  public:
    DIV_84(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class MOV_85: public Instruction
{
  public:
    MOV_85(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class MOV_86: public Instruction
{
  public:
    MOV_86(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class MOV_87: public Instruction
{
  public:
    MOV_87(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class MOV_88: public Instruction
{
  public:
    MOV_88(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class MOV_89: public Instruction
{
  public:
    MOV_89(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class MOV_8A: public Instruction
{
  public:
    MOV_8A(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class MOV_8B: public Instruction
{
  public:
    MOV_8B(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class MOV_8C: public Instruction
{
  public:
    MOV_8C(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class MOV_8D: public Instruction
{
  public:
    MOV_8D(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class MOV_8E: public Instruction
{
  public:
    MOV_8E(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class MOV_8F: public Instruction
{
  public:
    MOV_8F(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class MOV_90: public Instruction
{
  public:
    MOV_90(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class ACALL_91: public Instruction
{
  public:
    ACALL_91(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class MOV_92: public Instruction
{
  public:
    MOV_92(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class MOVC_93: public Instruction
{
  public:
    MOVC_93(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class SubtractionHelper: public Instruction
{
  public:
    SubtractionHelper(Alu& alu, std::uint8_t opcode);
  protected:
    void Helper(std::uint8_t operand) const;
};

class SUBB_94: public Instruction
{
  public:
    SUBB_94(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class SUBB_95: public SubtractionHelper
{
  public:
    SUBB_95(Alu&, std::uint8_t opcode);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class SUBB_96: public Instruction
{
  public:
    SUBB_96(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class SUBB_97: public Instruction
{
  public:
    SUBB_97(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

// 0x98 - 0x9f
class SubARegister: public SubtractionHelper
{
  public:
    SubARegister(Alu&, std::uint8_t opcode, std::uint8_t reg);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
  private:
    std::uint8_t reg;
};

class ORL_A0: public Instruction
{
  public:
    ORL_A0(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class AJMP_A1: public Instruction
{
  public:
    AJMP_A1(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class MOV_A2: public Instruction
{
  public:
    MOV_A2(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class INC_A3: public Instruction
{
  public:
    INC_A3(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class MUL_A4: public Instruction
{
  public:
    MUL_A4(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class MOV_A6: public Instruction
{
  public:
    MOV_A6(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class MOV_A7: public Instruction
{
  public:
    MOV_A7(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class MOV_A8: public Instruction
{
  public:
    MOV_A8(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class MOV_A9: public Instruction
{
  public:
    MOV_A9(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class MOV_AA: public Instruction
{
  public:
    MOV_AA(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class MOV_AB: public Instruction
{
  public:
    MOV_AB(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class MOV_AC: public Instruction
{
  public:
    MOV_AC(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class MOV_AD: public Instruction
{
  public:
    MOV_AD(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class MOV_AE: public Instruction
{
  public:
    MOV_AE(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class MOV_AF: public Instruction
{
  public:
    MOV_AF(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class ANL_B0: public Instruction
{
  public:
    ANL_B0(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class ACALL_B1: public Instruction
{
  public:
    ACALL_B1(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class CPL_B2: public Instruction
{
  public:
    CPL_B2(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class CPL_B3: public Instruction
{
  public:
    CPL_B3(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class CJNE_B4: public Instruction
{
  public:
    CJNE_B4(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class CJNE_B5: public Instruction
{
  public:
    CJNE_B5(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class CJNE_B6: public Instruction
{
  public:
    CJNE_B6(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class CJNE_B7: public Instruction
{
  public:
    CJNE_B7(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class CJNE_B8: public Instruction
{
  public:
    CJNE_B8(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class CJNE_B9: public Instruction
{
  public:
    CJNE_B9(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class CJNE_BA: public Instruction
{
  public:
    CJNE_BA(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class CJNE_BB: public Instruction
{
  public:
    CJNE_BB(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class CJNE_BC: public Instruction
{
  public:
    CJNE_BC(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class CJNE_BD: public Instruction
{
  public:
    CJNE_BD(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class CJNE_BE: public Instruction
{
  public:
    CJNE_BE(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class CJNE_BF: public Instruction
{
  public:
    CJNE_BF(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class PUSH_C0: public Instruction
{
  public:
    PUSH_C0(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class AJMP_C1: public Instruction
{
  public:
    AJMP_C1(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class CLR_C2: public Instruction
{
  public:
    CLR_C2(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class CLR_C3: public Instruction
{
  public:
    CLR_C3(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class SWAP_C4: public Instruction
{
  public:
    SWAP_C4(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class XCH_C5: public Instruction
{
  public:
    XCH_C5(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class XCH_C6: public Instruction
{
  public:
    XCH_C6(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class XCH_C7: public Instruction
{
  public:
    XCH_C7(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class XCH_C8: public Instruction
{
  public:
    XCH_C8(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class XCH_C9: public Instruction
{
  public:
    XCH_C9(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class XCH_CA: public Instruction
{
  public:
    XCH_CA(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class XCH_CB: public Instruction
{
  public:
    XCH_CB(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class XCH_CC: public Instruction
{
  public:
    XCH_CC(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class XCH_CD: public Instruction
{
  public:
    XCH_CD(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class XCH_CE: public Instruction
{
  public:
    XCH_CE(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class XCH_CF: public Instruction
{
  public:
    XCH_CF(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class POP_D0: public Instruction
{
  public:
    POP_D0(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class ACALL_D1: public Instruction
{
  public:
    ACALL_D1(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class SETB_D2: public Instruction
{
  public:
    SETB_D2(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class SETB_D3: public Instruction
{
  public:
    SETB_D3(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class DA_D4: public Instruction
{
  public:
    DA_D4(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class DJNZ_D5: public Instruction
{
  public:
    DJNZ_D5(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class XCHD_D6: public Instruction
{
  public:
    XCHD_D6(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class XCHD_D7: public Instruction
{
  public:
    XCHD_D7(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class DJNZ_D8: public Instruction
{
  public:
    DJNZ_D8(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class DJNZ_D9: public Instruction
{
  public:
    DJNZ_D9(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class DJNZ_DA: public Instruction
{
  public:
    DJNZ_DA(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class DJNZ_DB: public Instruction
{
  public:
    DJNZ_DB(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class DJNZ_DC: public Instruction
{
  public:
    DJNZ_DC(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class DJNZ_DD: public Instruction
{
  public:
    DJNZ_DD(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class DJNZ_DE: public Instruction
{
  public:
    DJNZ_DE(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class DJNZ_DF: public Instruction
{
  public:
    DJNZ_DF(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class MOVX_E0: public Instruction
{
  public:
    MOVX_E0(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class AJMP_E1: public Instruction
{
  public:
    AJMP_E1(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class MOVX_E2: public Instruction
{
  public:
    MOVX_E2(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class MOVX_E3: public Instruction
{
  public:
    MOVX_E3(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class CLR_E4: public Instruction
{
  public:
    CLR_E4(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class MOV_E5: public Instruction
{
  public:
    MOV_E5(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class MOV_E6: public Instruction
{
  public:
    MOV_E6(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class MOV_E7: public Instruction
{
  public:
    MOV_E7(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class MOV_E8: public Instruction
{
  public:
    MOV_E8(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class MOV_E9: public Instruction
{
  public:
    MOV_E9(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class MOV_EA: public Instruction
{
  public:
    MOV_EA(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class MOV_EB: public Instruction
{
  public:
    MOV_EB(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class MOV_EC: public Instruction
{
  public:
    MOV_EC(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class MOV_ED: public Instruction
{
  public:
    MOV_ED(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class MOV_EE: public Instruction
{
  public:
    MOV_EE(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class MOV_EF: public Instruction
{
  public:
    MOV_EF(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class MOVX_F0: public Instruction
{
  public:
    MOVX_F0(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class ACALL_F1: public Instruction
{
  public:
    ACALL_F1(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class MOVX_F2: public Instruction
{
  public:
    MOVX_F2(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class MOVX_F3: public Instruction
{
  public:
    MOVX_F3(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class CPL_F4: public Instruction
{
  public:
    CPL_F4(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
};

class MOV_F5: public Instruction
{
  public:
    MOV_F5(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

// 0xf6 and 0xf7
class MovIndirect: public Instruction
{
  public:
    MovIndirect(Alu&, std::uint8_t opcode, std::uint8_t reg);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
  private:
    std::uint8_t reg;
};

// 0xa6 and 0xa7
class MovIndirectFromMem: public Instruction
{
  public:
    MovIndirectFromMem(Alu&, std::uint8_t opcode, std::uint8_t reg);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
  private:
    std::uint8_t reg;
};

class MOV_F8: public Instruction
{
  public:
    MOV_F8(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class MOV_F9: public Instruction
{
  public:
    MOV_F9(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class MOV_FA: public Instruction
{
  public:
    MOV_FA(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class MOV_FB: public Instruction
{
  public:
    MOV_FB(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class MOV_FC: public Instruction
{
  public:
    MOV_FC(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class MOV_FD: public Instruction
{
  public:
    MOV_FD(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class MOV_FE: public Instruction
{
  public:
    MOV_FE(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

class MOV_FF: public Instruction
{
  public:
    MOV_FF(Alu&);
    std::string Disassemble(const Memory& memory, std::uint16_t address) const;
    void Execute() const;
};

#endif
