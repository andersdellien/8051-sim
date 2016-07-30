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

#include <sstream>
#include <iostream>
#include <string>
#include "flash.hpp"
#include "alu.hpp"
#include "cpu8051.hpp"
#include "instruction.hpp"
#include "instruction_coverage.hpp"
#include "instruction_set.hpp"
#include "exceptions.hpp"
#include "sfr.hpp"
#include "command.hpp"

#define INTERRUPT_PENDING_TIMER0 1
#define INTERRUPT_PENDING_UART0 2

Alu::Alu(std::string name, Scheduler &s, std::uint16_t xramSize, std::uint16_t iramSize, std::uint16_t flashSize):
    Block(name, s, *this),
    xram("XRAM", xramSize),
    iram("IRAM", iramSize),
    flash("FLASH", flashSize),
    callbacks(nullptr),
    sfrSP("SP", *this, 0x81, 0x07, {0x0, 0xf}),
    sfrDPL("DPL", *this, 0x82, 0x00, {0x0, 0xf}),
    sfrDPH("DPH", *this, 0x83, 0x00, {0x0, 0xf}),
    sfrIP("IP", *this, 0xb8, 0x80, {0x0, 0xf}),
    sfrSFRPAGE("SFRPAGE", *this, 0xa7, 0x00, {0x0, 0xf}),
    sfrB("B", *this, 0xf0, 0x00, {0x0, 0xf}),
    sfrIE("IE", *this, 0xa8, 0x00, {0x0, 0xf}),
    sfrACC("ACC", *this, 0xe0, 0x00, {0x0, 0xf}),
    sfrPCON("PCON", *this, 0x87, 0x00, {0x0, 0xf}),
    sfrPMU0CF("PMU0CF", *this, 0xb5, 0x00, {0x0}),
    sfrPSW("PSW", *this, 0xd0, 0x00, {0x0, 0xf}),
    sfrPSCTL("PSCTL", *this, 0x8f, 0x00, {0x0, 0xf}),
    sfrFLSCL("FLSCL", *this, 0xb7, 0x00, {0x0}),
    sfrFLKEY("FLKEY", *this, 0xb6, 0x00, {0x0, 0xf}),
    sfrFLWR("FLWR", *this, 0xe5, 0x00, {0x0, 0xf}),
    interruptPending(0),
    traceSfr(false),
    instructionSet(256)
{
  for (auto i = 0x11; i <= 0xf1; i += 0x20)
  {
    instructionSet[i] = new ACALL(*this, i);
  }

  for (auto i = 0x01; i <= 0xe1; i += 0x20)
  {
    instructionSet[i] = new AJMP(*this, i);
  }

  for (auto i = 0; i < 8; i++)
  {
    instructionSet[0x08 + i] = new IncRegister(*this, 0x08 + i, i);
    instructionSet[0x18 + i] = new DecRegister(*this, 0x18 + i, i);
    instructionSet[0x28 + i] = new AddRegister(*this, 0x28 + i, i, false);
    instructionSet[0x38 + i] = new AddRegister(*this, 0x38 + i, i, true);
    instructionSet[0x48 + i] = new OrARegister(*this, 0x48 + i, i);
    instructionSet[0x58 + i] = new AndARegister(*this, 0x58 + i, i);
    instructionSet[0x68 + i] = new XorARegister(*this, 0x68 + i, i);
    instructionSet[0x78 + i] = new MovRegisterImmediate(*this, 0x78 + i, i);
    instructionSet[0x88 + i] = new MovAddressRegister(*this, 0x88 + i, i);
    instructionSet[0x98 + i] = new SubARegister(*this, 0x98 + i, i);
    instructionSet[0xa8 + i] = new MovRegisterAddress(*this, 0xa8 + i, i);
    instructionSet[0xb8 + i] = new CJNERegister(*this, 0xb8 + i, i);
    instructionSet[0xc8 + i] = new XCHRegister(*this, 0xc8 + i, i);
    instructionSet[0xd8 + i] = new DJNZRegister(*this, 0xd8 + i, i);
    instructionSet[0xe8 + i] = new MovARegister(*this, 0xe8 + i, i);
    instructionSet[0xf8 + i] = new MovRegisterA(*this, 0xf8 + i, i);
  }

  instructionSet[0x24] = new AddImmediate(*this, 0x24, false);
  instructionSet[0x25] = new AddMemory(*this, 0x25, false);
  instructionSet[0x26] = new AddIndirectRegister(*this, 0x26, 0, false);
  instructionSet[0x27] = new AddIndirectRegister(*this, 0x27, 1, false);

  instructionSet[0x34] = new AddImmediate(*this, 0x34, true);
  instructionSet[0x35] = new AddMemory(*this, 0x35, true);
  instructionSet[0x36] = new AddIndirectRegister(*this, 0x36, 0, true);
  instructionSet[0x37] = new AddIndirectRegister(*this, 0x37, 1, true);

  ANL_52 *anl_52 = new ANL_52(*this);
  instructionSet[anl_52->GetOpcode()] = anl_52;
  ANL_53 *anl_53 = new ANL_53(*this);
  instructionSet[anl_53->GetOpcode()] = anl_53;

  for (auto i = 4; i <= 7; i++)
  {
    instructionSet[0x40 + i] = new BitwiseOperation(*this, 0x40 + i);
    instructionSet[0x50 + i] = new BitwiseOperation(*this, 0x50 + i);
    instructionSet[0x60 + i] = new BitwiseOperation(*this, 0x60 + i);
  }

  ANL_82 *anl_82 = new ANL_82(*this);
  instructionSet[anl_82->GetOpcode()] = anl_82;
  ANL_B0 *anl_b0 = new ANL_B0(*this);
  instructionSet[anl_b0->GetOpcode()] = anl_b0;
  CJNE_B4 *cjne_b4 = new CJNE_B4(*this);
  instructionSet[cjne_b4->GetOpcode()] = cjne_b4;
  CJNE_B5 *cjne_b5 = new CJNE_B5(*this);
  instructionSet[cjne_b5->GetOpcode()] = cjne_b5;
  CJNE_B6 *cjne_b6 = new CJNE_B6(*this);
  instructionSet[cjne_b6->GetOpcode()] = cjne_b6;
  CJNE_B7 *cjne_b7 = new CJNE_B7(*this);
  instructionSet[cjne_b7->GetOpcode()] = cjne_b7;

  CLR_C2 *clr_c2 = new CLR_C2(*this);
  instructionSet[clr_c2->GetOpcode()] = clr_c2;
  CLR_C3 *clr_c3 = new CLR_C3(*this);
  instructionSet[clr_c3->GetOpcode()] = clr_c3;
  CLR_E4 *clr_e4 = new CLR_E4(*this);
  instructionSet[clr_e4->GetOpcode()] = clr_e4;
  CPL_F4 *cpl_f4 = new CPL_F4(*this);
  instructionSet[cpl_f4->GetOpcode()] = cpl_f4;
  CPL_B3 *cpl_b3 = new CPL_B3(*this);
  instructionSet[cpl_b3->GetOpcode()] = cpl_b3;
  CPL_B2 *cpl_b2 = new CPL_B2(*this);
  instructionSet[cpl_b2->GetOpcode()] = cpl_b2;
  DA_D4 *da_d4 = new DA_D4(*this);
  instructionSet[da_d4->GetOpcode()] = da_d4;
  DEC_15 *dec_15 = new DEC_15(*this);
  instructionSet[dec_15->GetOpcode()] = dec_15;
  DEC_14 *dec_14 = new DEC_14(*this);
  instructionSet[dec_14->GetOpcode()] = dec_14;

  DIV_84 *div_84 = new DIV_84(*this);
  instructionSet[div_84->GetOpcode()] = div_84;
  DJNZ_D5 *djnz_d5 = new DJNZ_D5(*this);
  instructionSet[djnz_d5->GetOpcode()] = djnz_d5;

  INC_5 *inc_5 = new INC_5(*this);
  instructionSet[inc_5->GetOpcode()] = inc_5;
  INC_4 *inc_4 = new INC_4(*this);
  instructionSet[inc_4->GetOpcode()] = inc_4;

  instructionSet[0x06] = new IncIndirectRegister(*this, 0x06, 0);
  instructionSet[0x07] = new IncIndirectRegister(*this, 0x07, 1);
  instructionSet[0x16] = new DecIndirectRegister(*this, 0x16, 0);
  instructionSet[0x17] = new DecIndirectRegister(*this, 0x17, 1);

  INC_A3 *inc_a3 = new INC_A3(*this);
  instructionSet[inc_a3->GetOpcode()] = inc_a3;

  instructionSet[0x10] = new JBC_10(*this, 0x10);
  instructionSet[0x20] = new JB_20(*this, 0x20);
  instructionSet[0x30] = new JNB_30(*this, 0x30);
  instructionSet[0x40] = new JC_40(*this, 0x40);
  instructionSet[0x50] = new JNC_50(*this, 0x50);
  instructionSet[0x60] = new JZ_60(*this, 0x60);
  instructionSet[0x70] = new JNZ_70(*this, 0x70);

  JMP_73 *jmp_73 = new JMP_73(*this);
  instructionSet[jmp_73->GetOpcode()] = jmp_73;
  LCALL_12 *lcall_12 = new LCALL_12(*this);
  instructionSet[lcall_12->GetOpcode()] = lcall_12;
  LJMP_2 *ljmp_2 = new LJMP_2(*this);
  instructionSet[ljmp_2->GetOpcode()] = ljmp_2;
  MOV_90 *mov_90 = new MOV_90(*this);
  instructionSet[mov_90->GetOpcode()] = mov_90;
  MOV_75 *mov_75 = new MOV_75(*this);
  instructionSet[mov_75->GetOpcode()] = mov_75;
  MOV_85 *mov_85 = new MOV_85(*this);
  instructionSet[mov_85->GetOpcode()] = mov_85;

  instructionSet[0x76] = new MovRegisterIndirectImmediate(*this, 0x76, 0);
  instructionSet[0x77] = new MovRegisterIndirectImmediate(*this, 0x77, 1);
  instructionSet[0xa6] = new MovIndirectFromMem(*this, 0xa6, 0);
  instructionSet[0xa7] = new MovIndirectFromMem(*this, 0xa7, 1);

  MOV_74 *mov_74 = new MOV_74(*this);
  instructionSet[mov_74->GetOpcode()] = mov_74;
  MOV_E5 *mov_e5 = new MOV_E5(*this);
  instructionSet[mov_e5->GetOpcode()] = mov_e5;
  MOV_A2 *mov_a2 = new MOV_A2(*this);
  instructionSet[mov_a2->GetOpcode()] = mov_a2;

  MOV_92 *mov_92 = new MOV_92(*this);
  instructionSet[mov_92->GetOpcode()] = mov_92;

  instructionSet[0x86] = new MovMemoryIndirectRegister(*this, 0x86, 0);
  instructionSet[0x87] = new MovMemoryIndirectRegister(*this, 0x87, 1);

  MOV_F5 *mov_f5 = new MOV_F5(*this);
  instructionSet[mov_f5->GetOpcode()] = mov_f5;

  instructionSet[0xf6] = new MovIndirect(*this, 0xf6, 0);
  instructionSet[0xf7] = new MovIndirect(*this, 0xf7, 1);
  instructionSet[0xe6] = new MovIndirectRegister(*this, 0xe6, 0);
  instructionSet[0xe7] = new MovIndirectRegister(*this, 0xe7, 1);

  MOVC_93 *movc_93 = new MOVC_93(*this);
  instructionSet[movc_93->GetOpcode()] = movc_93;
  MOVC_83 *movc_83 = new MOVC_83(*this);
  instructionSet[movc_83->GetOpcode()] = movc_83;
  MOVX_F0 *movx_f0 = new MOVX_F0(*this);
  instructionSet[movx_f0->GetOpcode()] = movx_f0;
  MOVX_F2 *movx_f2 = new MOVX_F2(*this);
  instructionSet[movx_f2->GetOpcode()] = movx_f2;
  MOVX_F3 *movx_f3 = new MOVX_F3(*this);
  instructionSet[movx_f3->GetOpcode()] = movx_f3;
  MOVX_E0 *movx_e0 = new MOVX_E0(*this);
  instructionSet[movx_e0->GetOpcode()] = movx_e0;
  MOVX_E2 *movx_e2 = new MOVX_E2(*this);
  instructionSet[movx_e2->GetOpcode()] = movx_e2;
  MOVX_E3 *movx_e3 = new MOVX_E3(*this);
  instructionSet[movx_e3->GetOpcode()] = movx_e3;
  MUL_A4 *mul_a4 = new MUL_A4(*this);
  instructionSet[mul_a4->GetOpcode()] = mul_a4;
  NOP *nop = new NOP(*this);
  instructionSet[nop->GetOpcode()] = nop;
  ORL_43 *orl_43 = new ORL_43(*this);
  instructionSet[orl_43->GetOpcode()] = orl_43;
  ORL_42 *orl_42 = new ORL_42(*this);
  instructionSet[orl_42->GetOpcode()] = orl_42;
  ORL_72 *orl_72 = new ORL_72(*this);
  instructionSet[orl_72->GetOpcode()] = orl_72;
  ORL_A0 *orl_a0 = new ORL_A0(*this);
  instructionSet[orl_a0->GetOpcode()] = orl_a0;

  POP_D0 *pop_d0 = new POP_D0(*this);
  instructionSet[pop_d0->GetOpcode()] = pop_d0;
  PUSH_C0 *push_c0 = new PUSH_C0(*this);
  instructionSet[push_c0->GetOpcode()] = push_c0;
  RET_22 *ret_22 = new RET_22(*this);
  instructionSet[ret_22->GetOpcode()] = ret_22;
  RETI_32 *reti_32 = new RETI_32(*this);
  instructionSet[reti_32->GetOpcode()] = reti_32;
  RL_23 *rl_23 = new RL_23(*this);
  instructionSet[rl_23->GetOpcode()] = rl_23;
  RLC_33 *rlc_33 = new RLC_33(*this);
  instructionSet[rlc_33->GetOpcode()] = rlc_33;
  RR_3 *rr_3 = new RR_3(*this);
  instructionSet[rr_3->GetOpcode()] = rr_3;
  RRC_13 *rrc_13 = new RRC_13(*this);
  instructionSet[rrc_13->GetOpcode()] = rrc_13;
  SETB_D3 *setb_d3 = new SETB_D3(*this);
  instructionSet[setb_d3->GetOpcode()] = setb_d3;
  SETB_D2 *setb_d2 = new SETB_D2(*this);
  instructionSet[setb_d2->GetOpcode()] = setb_d2;
  SJMP_80 *sjmp_80 = new SJMP_80(*this);
  instructionSet[sjmp_80->GetOpcode()] = sjmp_80;
  instructionSet[0x94] = new SUBB_94(*this, 0x94);
  instructionSet[0x95] = new SUBB_95(*this, 0x95);
  SUBB_96 *subb_96 = new SUBB_96(*this);
  instructionSet[subb_96->GetOpcode()] = subb_96;
  SUBB_97 *subb_97 = new SUBB_97(*this);
  instructionSet[subb_97->GetOpcode()] = subb_97;
  instructionSet[0xc4] = new SWAP_C4(*this, 0xc4, 0);
  XCH_C5 *xch_c5 = new XCH_C5(*this);
  instructionSet[xch_c5->GetOpcode()] = xch_c5;
  XCH_C6 *xch_c6 = new XCH_C6(*this);
  instructionSet[xch_c6->GetOpcode()] = xch_c6;
  XCH_C7 *xch_c7 = new XCH_C7(*this);
  instructionSet[xch_c7->GetOpcode()] = xch_c7;
  XCHD_D6 *xchd_d6 = new XCHD_D6(*this);
  instructionSet[xchd_d6->GetOpcode()] = xchd_d6;
  XCHD_D7 *xchd_d7 = new XCHD_D7(*this);
  instructionSet[xchd_d7->GetOpcode()] = xchd_d7;

  XRL_62 *xrl_62 = new XRL_62(*this);
  instructionSet[xrl_62->GetOpcode()] = xrl_62;
  XRL_63 *xrl_63 = new XRL_63(*this);
  instructionSet[xrl_63->GetOpcode()] = xrl_63;
}

std::string Alu::Disassemble(std::uint16_t address)
{
  const std::uint8_t opcode = flash.Read(address);

  if (instructionSet[opcode] == nullptr)
  {
    throw new IllegalInstructionException();
  }
  else
  {
    return instructionSet[opcode]->Disassemble(address);
  }
}

void Alu::UpdateConstraints(RegisterConstraints &c, std::uint16_t address, std::uint16_t destination)
{
  const std::uint8_t opcode = flash.Read(address);

  if (instructionSet[opcode] == nullptr)
  {
    throw new IllegalInstructionException();
  }
  else
  {
    return instructionSet[opcode]->UpdateConstraints(c, address, destination);
  }
}

std::uint8_t Alu::GetOperands(std::uint16_t address)
{
  const std::uint8_t opcode = flash.Read(address);

  if (instructionSet[opcode] == nullptr)
  {
    throw new IllegalInstructionException();
  }
  else
  {
    return instructionSet[opcode]->GetOperands();
  }
}

bool Alu::IsJump(std::uint16_t address)
{
  const std::uint8_t opcode = flash.Read(address);

  if (instructionSet[opcode] == nullptr)
  {
    throw new IllegalInstructionException();
  }
  else
  {
    return instructionSet[opcode]->IsJump();
  }
}

std::set<std::uint16_t> Alu::GetNextAddresses(std::uint16_t address)
{
  const std::uint8_t opcode = flash.Read(address);

  if (instructionSet[opcode] == nullptr)
  {
    throw new IllegalInstructionException();
  }
  else
  {
    return instructionSet[opcode]->GetNextAddresses(address);
  }
}

void Alu::Reset()
{
  Block::Reset();
  this->SetA(0);
  pc = 0;
  for (int i = 0; i < 8; i++)
  {
     SetReg(i, 0);
  }
  remainingTicks = CalculateRemainingTicks();
  ReportActive();
}

std::uint16_t Alu::GetPC()
{
  return pc;
}

std::uint8_t Alu::GetSP()
{
  return sfrSP.data;
}
void Alu::SetSP(std::uint8_t s)
{
  sfrSP.data = s;
}

void Alu::SetPC(std::uint16_t newPC)
{
  pc = newPC;
}

void Alu::SetA(std::uint8_t a)
{
  sfrACC.data = a;
}

std::uint8_t Alu::GetA()
{
  return sfrACC.data;
}

std::uint8_t Alu::GetReg(std::uint8_t reg)
{
  return iram.Read(reg);
}

void Alu::SetReg(std::uint8_t reg, std::uint8_t value)
{
  return iram.Write(reg, value);
}

void Alu::SetDPTR(std::uint16_t val)
{
  sfrDPL.data = val & 255;
  sfrDPH.data = val / 256;
}

std::uint16_t Alu::GetDPTR()
{
  return sfrDPL.data + 256 * sfrDPH.data;
}

// PSW bits
#define CY 0x80
#define AC 0x40
#define OV 0x04

bool Alu::GetC()
{
  return sfrPSW.data & CY;
}

void Alu::SetC()
{
  sfrPSW.data |= CY;
}

void Alu::ClrC()
{
  sfrPSW.data &= ~CY;
}

void Alu::SetAC()
{
  sfrPSW.data |= AC;
}

void Alu::ClrAC()
{
  sfrPSW.data &= ~AC;
}

void Alu::SetOV()
{
  sfrPSW.data |= OV;
}

void Alu::ClrOV()
{
  sfrPSW.data &= ~OV;
}

void Alu::RegisterSfr(Sfr *sfr)
{
  for (std::set<std::uint8_t>::iterator i = sfr->pages.begin(); i != sfr->pages.end(); i++)
  {
    specialFunctionRegisters[*i][sfr->address] = sfr;
  }

  SfrBitAddressable *b = dynamic_cast<SfrBitAddressable*>(sfr);
  if (b)
  {
    bitAddressableSfr[sfr->address] = b;
  }
}

void Alu::Write(std::uint8_t address, std::uint8_t data)
{
  if (address < 0x80)
  {
    iram.Write(address, data);
  }
  else if (specialFunctionRegisters[sfrSFRPAGE.data].find(address) != specialFunctionRegisters[sfrSFRPAGE.data].end())
  {
    specialFunctionRegisters[sfrSFRPAGE.data][address]->Write(data);
  }
  else
  {
    std::cout << "Illegal byte address " << (int) address << " PC " << GetPC() << std::endl;
    throw new IllegalAddressException();
  }
}

std::uint8_t Alu::Read(std::uint8_t address)
{
  if (address < 0x80)
  {
    return iram.Read(address);
  }
  else if (specialFunctionRegisters[sfrSFRPAGE.data].find(address) != specialFunctionRegisters[sfrSFRPAGE.data].end())
  {
    return specialFunctionRegisters[sfrSFRPAGE.data][address]->Read();
  }
  else
  {
    std::cout << "Illegal byte address " << (int) address << std::endl;
    throw new IllegalAddressException();
  }
}

bool Alu::ReadBit(std::uint8_t address)
{
  if (address < 0x80)
  {
    std::uint8_t byteAddr = 0x20 + address / 8;
    std::uint8_t bit = 1 << address % 8;

    return iram.Read(byteAddr) & bit;
  }
  else if (bitAddressableSfr.find(address & 0xf8) != bitAddressableSfr.end())
  {
    return bitAddressableSfr[address & 0xf8]->ReadBit(address % 8);
  }
  else
  {
    std::cout << "Illegal bit address " << (int) address << std::endl;
    throw new IllegalAddressException();
  }
}

void Alu::WriteBit(std::uint8_t address, bool value)
{
  if (address < 0x80)
  {
    std::uint8_t byteAddr = 0x20 + address / 8;
    std::uint8_t bit = 0;

    bit = 1 << address % 8;

    iram.Write(byteAddr, iram.Read(byteAddr) & ~bit);
    if (value)
    {
      iram.Write(byteAddr, iram.Read(byteAddr) | bit);
    }
  }
  else if (bitAddressableSfr.find(address & 0xf8) != bitAddressableSfr.end())
  {
    bitAddressableSfr[address & 0xf8]->WriteBit(address % 8, value);
  }
  else
  {
    std::cout << "Illegal bit address " << (int) address << std::endl;
    throw new IllegalAddressException();
  }
}

std::string Alu::GetBitAddressName(std::uint8_t address)
{
  std::stringstream ss;
  std::uint8_t bit = address % 8;

  if (bitAddressableSfr.find(address & 0xf8) != bitAddressableSfr.end())
  {
    ss << bitAddressableSfr[address & 0xf8]->GetName();
  }
  else
  {
    ss << std::hex << 0x20 + (int) (address) / 8;
  }
  ss << "." << (int) bit;
  return ss.str();
}


bool Alu::GetTraceSfr()
{
  return traceSfr;
}

void Alu::SetTraceSfr(bool value)
{
  traceSfr = value;
}

void Alu::ClockEvent()
{
  if (interruptPending & INTERRUPT_PENDING_TIMER0)
  {
    interruptPending &= ~INTERRUPT_PENDING_TIMER0;
    SetSP(alu.GetSP() + 1);
    iram.Write(alu.GetSP(), (uint8_t) alu.GetPC());
    SetSP(alu.GetSP() + 1);
    iram.Write(alu.GetSP(), alu.GetPC() / 256);
    SetPC(0xb);
    InstructionCoverage::GetInstance().InstructionExecuted(0xb);
  }
  else if (interruptPending & INTERRUPT_PENDING_UART0)
  {
    interruptPending &= ~INTERRUPT_PENDING_UART0;
    SetSP(alu.GetSP() + 1);
    iram.Write(alu.GetSP(), (uint8_t) alu.GetPC());
    SetSP(alu.GetSP() + 1);
    iram.Write(alu.GetSP(), alu.GetPC() / 256);
    SetPC(0x23);
    InstructionCoverage::GetInstance().InstructionExecuted(0x23);
  }
  else
  {
    InstructionCoverage::GetInstance().InstructionExecuted(pc);
    instructionSet[flash.Read(pc)]->Execute();
  }
  remainingTicks = CalculateRemainingTicks();
  if (callbacks)
  {
    callbacks->OnInstructionExecuted(*callbackCpu);
  }
}

#define IDLE_MODE 1
#define STOP_MODE 2
#define SUSPEND_MODE 64
#define SLEEP_MODE 128

int Alu::CalculateRemainingTicks()
{
  // If any sleep mode bit is set, code execution stops. So we return -1 here
  if (sfrPCON.data & (IDLE_MODE | STOP_MODE) || sfrPMU0CF.data & (SUSPEND_MODE | SLEEP_MODE))
  {
    return -1;
  }
  else if (interruptPending)
  {
    // Let's assume that jumping to the interrupt vector takes two cycles
    return 2;
  }
  else
  {
    int cycles = instructionSet[flash.Read(pc)]->cycles;

    return cycles;
  }
}

void Alu::RegisterCallback(Cpu8051Callbacks *c, Cpu8051* cpu)
{
  callbackCpu = cpu;
  callbacks = c;
}

Cpu8051Callbacks *Alu::GetCallback() const
{
  return callbacks;
}

Cpu8051 *Alu::GetCallbackCpu() const
{
  return callbackCpu;
}

#define ET0 2
#define ES0 16

void Alu::TimerInterrupt(int timer)
{
  // Wake-up from Idle mode
  sfrPCON.data &= ~IDLE_MODE;
  // Check if interrupt is enabled
  if ((timer == 0) && (sfrIE.data & ET0))
  {
    interruptPending |= INTERRUPT_PENDING_TIMER0;
  }
  remainingTicks = CalculateRemainingTicks();
  ReportActive();
}

void Alu::UartInterrupt()
{
  // Wake-up from Idle mode
  sfrPCON.data &= ~IDLE_MODE;
  // Check if interrupt is enabled
  if (sfrIE.data & ES0)
  {
    interruptPending |= INTERRUPT_PENDING_UART0;
  }
  remainingTicks = CalculateRemainingTicks();
  ReportActive();
}

void Alu::RTCWakeup()
{
  // Wake-up from Sleep mode
  // There is no interrupt handler for this event, we just wake up the ALU again.
  sfrPMU0CF.data &= ~SLEEP_MODE;
  remainingTicks = CalculateRemainingTicks();
  ReportActive();
}

std::uint8_t Alu::GetB() const
{
  return sfrB.data;
}

#define PSEE 2
#define PSWE 1

void Alu::WriteX(std::uint16_t address, std::uint8_t value)
{
  if (sfrPSCTL.data & PSWE)
  {
    if (sfrPSCTL.data & PSEE)
    {
      std::uint16_t base = address & 0xff00;
      for (int i = 0; i < 256; i++)
      {
        flash.Write(base + i, value);
      }
    }
    else
    {
      flash.Write(address, value);
    }
    sfrPSCTL.data &= ~(PSWE | PSEE);
  }
  else
  {
    xram.Write(address, value);
  }
}

std::uint8_t Alu::ReadX(std::uint16_t address)
{
  return xram.Read(address);
}
