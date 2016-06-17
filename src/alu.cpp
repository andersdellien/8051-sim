#include <sstream>
#include <iostream>
#include <limits>
#include <string>
#include "flash.hpp"
#include "alu.hpp"
#include "instruction_set.hpp"
#include "exceptions.hpp"
#include "sfr.hpp"

#define INTERRUPT_PENDING_TIMER0 1
#define INTERRUPT_PENDING_UART0 2

Alu::Alu(std::uint16_t xramSize, std::uint16_t iramSize):
    Block(*this),
    xram(*this, xramSize),
    iram(*this, iramSize),
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
    sfrPSW("PSW", *this, 0xd0, 0x00, {0x0, 0xf}),
    sfrPSCTL("PSCTL", *this, 0x8f, 0x00, {0x0, 0xf}),
    interruptPending(0)
{
  INC_7 *inc_7 = new INC_7(*this);
  instructionSet[inc_7->GetOpcode()] = inc_7;
  ACALL_11 *acall_11 = new ACALL_11(*this);
  instructionSet[acall_11->GetOpcode()] = acall_11;
  ACALL_31 *acall_31 = new ACALL_31(*this);
  instructionSet[acall_31->GetOpcode()] = acall_31;
  ACALL_51 *acall_51 = new ACALL_51(*this);
  instructionSet[acall_51->GetOpcode()] = acall_51;
  ACALL_71 *acall_71 = new ACALL_71(*this);
  instructionSet[acall_71->GetOpcode()] = acall_71;
  ACALL_91 *acall_91 = new ACALL_91(*this);
  instructionSet[acall_91->GetOpcode()] = acall_91;
  ACALL_B1 *acall_b1 = new ACALL_B1(*this);
  instructionSet[acall_b1->GetOpcode()] = acall_b1;
  ACALL_D1 *acall_d1 = new ACALL_D1(*this);
  instructionSet[acall_d1->GetOpcode()] = acall_d1;
  ACALL_F1 *acall_f1 = new ACALL_F1(*this);
  instructionSet[acall_f1->GetOpcode()] = acall_f1;

  instructionSet[0x24] = new AddImmediate(*this, 0x24, false);
  instructionSet[0x25] = new AddMemory(*this, 0x25, false);
  instructionSet[0x26] = new AddIndirectRegister(*this, 0x26, 0);
  instructionSet[0x27] = new AddIndirectRegister(*this, 0x27, 1);
  instructionSet[0x28] = new AddRegister(*this, 0x28, 0, false);
  instructionSet[0x29] = new AddRegister(*this, 0x29, 1, false);
  instructionSet[0x2a] = new AddRegister(*this, 0x2a, 2, false);
  instructionSet[0x2b] = new AddRegister(*this, 0x2b, 3, false);
  instructionSet[0x2c] = new AddRegister(*this, 0x2c, 4, false);
  instructionSet[0x2d] = new AddRegister(*this, 0x2d, 5, false);
  instructionSet[0x2e] = new AddRegister(*this, 0x2e, 6, false);
  instructionSet[0x2f] = new AddRegister(*this, 0x2f, 7, false);
  instructionSet[0x34] = new AddImmediate(*this, 0x34, true);
  instructionSet[0x35] = new AddMemory(*this, 0x35, true);

  ADDC_36 *addc_36 = new ADDC_36(*this);
  instructionSet[addc_36->GetOpcode()] = addc_36;
  ADDC_37 *addc_37 = new ADDC_37(*this);
  instructionSet[addc_37->GetOpcode()] = addc_37;

  instructionSet[0x38] = new AddRegister(*this, 0x38, 0, true);
  instructionSet[0x39] = new AddRegister(*this, 0x39, 1, true);
  instructionSet[0x3a] = new AddRegister(*this, 0x3a, 2, true);
  instructionSet[0x3b] = new AddRegister(*this, 0x3b, 3, true);
  instructionSet[0x3c] = new AddRegister(*this, 0x3c, 4, true);
  instructionSet[0x3d] = new AddRegister(*this, 0x3d, 5, true);
  instructionSet[0x3e] = new AddRegister(*this, 0x3e, 6, true);
  instructionSet[0x3f] = new AddRegister(*this, 0x3f, 7, true);

  AJMP_1 *ajmp_1 = new AJMP_1(*this);
  instructionSet[ajmp_1->GetOpcode()] = ajmp_1;
  AJMP_21 *ajmp_21 = new AJMP_21(*this);
  instructionSet[ajmp_21->GetOpcode()] = ajmp_21;
  AJMP_41 *ajmp_41 = new AJMP_41(*this);
  instructionSet[ajmp_41->GetOpcode()] = ajmp_41;
  AJMP_61 *ajmp_61 = new AJMP_61(*this);
  instructionSet[ajmp_61->GetOpcode()] = ajmp_61;
  AJMP_81 *ajmp_81 = new AJMP_81(*this);
  instructionSet[ajmp_81->GetOpcode()] = ajmp_81;
  AJMP_A1 *ajmp_a1 = new AJMP_A1(*this);
  instructionSet[ajmp_a1->GetOpcode()] = ajmp_a1;
  AJMP_C1 *ajmp_c1 = new AJMP_C1(*this);
  instructionSet[ajmp_c1->GetOpcode()] = ajmp_c1;
  AJMP_E1 *ajmp_e1 = new AJMP_E1(*this);
  instructionSet[ajmp_e1->GetOpcode()] = ajmp_e1;
  ANL_52 *anl_52 = new ANL_52(*this);
  instructionSet[anl_52->GetOpcode()] = anl_52;
  ANL_53 *anl_53 = new ANL_53(*this);
  instructionSet[anl_53->GetOpcode()] = anl_53;
  ANL_54 *anl_54 = new ANL_54(*this);
  instructionSet[anl_54->GetOpcode()] = anl_54;
  ANL_55 *anl_55 = new ANL_55(*this);
  instructionSet[anl_55->GetOpcode()] = anl_55;
  ANL_56 *anl_56 = new ANL_56(*this);
  instructionSet[anl_56->GetOpcode()] = anl_56;
  ANL_57 *anl_57 = new ANL_57(*this);
  instructionSet[anl_57->GetOpcode()] = anl_57;

  instructionSet[0x58] = new AndARegister(*this, 0x58, 0);
  instructionSet[0x59] = new AndARegister(*this, 0x59, 1);
  instructionSet[0x5a] = new AndARegister(*this, 0x5a, 2);
  instructionSet[0x5b] = new AndARegister(*this, 0x5b, 3);
  instructionSet[0x5c] = new AndARegister(*this, 0x5c, 4);
  instructionSet[0x5d] = new AndARegister(*this, 0x5d, 5);
  instructionSet[0x5e] = new AndARegister(*this, 0x5e, 6);
  instructionSet[0x5f] = new AndARegister(*this, 0x5f, 7);

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

  instructionSet[0xb8] = new CJNERegister(*this, 0xb8, 0);
  instructionSet[0xb9] = new CJNERegister(*this, 0xb9, 1);
  instructionSet[0xba] = new CJNERegister(*this, 0xba, 2);
  instructionSet[0xbb] = new CJNERegister(*this, 0xbb, 3);
  instructionSet[0xbc] = new CJNERegister(*this, 0xbc, 4);
  instructionSet[0xbd] = new CJNERegister(*this, 0xbd, 5);
  instructionSet[0xbe] = new CJNERegister(*this, 0xbe, 6);
  instructionSet[0xbf] = new CJNERegister(*this, 0xbf, 7);

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
  DEC_16 *dec_16 = new DEC_16(*this);
  instructionSet[dec_16->GetOpcode()] = dec_16;
  DEC_17 *dec_17 = new DEC_17(*this);
  instructionSet[dec_17->GetOpcode()] = dec_17;

  instructionSet[0x18] = new DecRegister(*this, 0x18, 0);
  instructionSet[0x19] = new DecRegister(*this, 0x19, 1);
  instructionSet[0x1a] = new DecRegister(*this, 0x1a, 2);
  instructionSet[0x1b] = new DecRegister(*this, 0x1b, 3);
  instructionSet[0x1c] = new DecRegister(*this, 0x1c, 4);
  instructionSet[0x1d] = new DecRegister(*this, 0x1d, 5);
  instructionSet[0x1e] = new DecRegister(*this, 0x1e, 6);
  instructionSet[0x1f] = new DecRegister(*this, 0x1f, 7);

  DIV_84 *div_84 = new DIV_84(*this);
  instructionSet[div_84->GetOpcode()] = div_84;
  DJNZ_D5 *djnz_d5 = new DJNZ_D5(*this);
  instructionSet[djnz_d5->GetOpcode()] = djnz_d5;

  instructionSet[0xd8] = new DJNZRegister(*this, 0xd8, 0);
  instructionSet[0xd9] = new DJNZRegister(*this, 0xd9, 1);
  instructionSet[0xda] = new DJNZRegister(*this, 0xda, 2);
  instructionSet[0xdb] = new DJNZRegister(*this, 0xdb, 3);
  instructionSet[0xdc] = new DJNZRegister(*this, 0xdc, 4);
  instructionSet[0xdd] = new DJNZRegister(*this, 0xdd, 5);
  instructionSet[0xde] = new DJNZRegister(*this, 0xde, 6);
  instructionSet[0xdf] = new DJNZRegister(*this, 0xdf, 7);

  INC_5 *inc_5 = new INC_5(*this);
  instructionSet[inc_5->GetOpcode()] = inc_5;
  INC_4 *inc_4 = new INC_4(*this);
  instructionSet[inc_4->GetOpcode()] = inc_4;
  INC_6 *inc_6 = new INC_6(*this);
  instructionSet[inc_6->GetOpcode()] = inc_6;

  instructionSet[0x08] = new IncRegister(*this, 0x08, 0);
  instructionSet[0x09] = new IncRegister(*this, 0x09, 1);
  instructionSet[0x0a] = new IncRegister(*this, 0x0a, 2);
  instructionSet[0x0b] = new IncRegister(*this, 0x0b, 3);
  instructionSet[0x0c] = new IncRegister(*this, 0x0c, 4);
  instructionSet[0x0d] = new IncRegister(*this, 0x0d, 5);
  instructionSet[0x0e] = new IncRegister(*this, 0x0e, 6);
  instructionSet[0x0f] = new IncRegister(*this, 0x0f, 7);

  INC_A3 *inc_a3 = new INC_A3(*this);
  instructionSet[inc_a3->GetOpcode()] = inc_a3;
  JB_20 *jb_20 = new JB_20(*this);
  instructionSet[jb_20->GetOpcode()] = jb_20;
  JBC_10 *jbc_10 = new JBC_10(*this);
  instructionSet[jbc_10->GetOpcode()] = jbc_10;
  JC_40 *jc_40 = new JC_40(*this);
  instructionSet[jc_40->GetOpcode()] = jc_40;
  JMP_73 *jmp_73 = new JMP_73(*this);
  instructionSet[jmp_73->GetOpcode()] = jmp_73;
  JNB_30 *jnb_30 = new JNB_30(*this);
  instructionSet[jnb_30->GetOpcode()] = jnb_30;
  JNC_50 *jnc_50 = new JNC_50(*this);
  instructionSet[jnc_50->GetOpcode()] = jnc_50;
  JNZ_70 *jnz_70 = new JNZ_70(*this);
  instructionSet[jnz_70->GetOpcode()] = jnz_70;
  JZ_60 *jz_60 = new JZ_60(*this);
  instructionSet[jz_60->GetOpcode()] = jz_60;
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

  instructionSet[0x78] = new MovRegisterImmediate(*this, 0x78, 0);
  instructionSet[0x79] = new MovRegisterImmediate(*this, 0x79, 1);
  instructionSet[0x7a] = new MovRegisterImmediate(*this, 0x7a, 2);
  instructionSet[0x7b] = new MovRegisterImmediate(*this, 0x7b, 3);
  instructionSet[0x7c] = new MovRegisterImmediate(*this, 0x7c, 4);
  instructionSet[0x7d] = new MovRegisterImmediate(*this, 0x7d, 5);
  instructionSet[0x7e] = new MovRegisterImmediate(*this, 0x7e, 6);
  instructionSet[0x7f] = new MovRegisterImmediate(*this, 0x7f, 7);

  instructionSet[0xa8] = new MovRegisterAddress(*this, 0xa8, 0);
  instructionSet[0xa9] = new MovRegisterAddress(*this, 0xa9, 1);
  instructionSet[0xaa] = new MovRegisterAddress(*this, 0xaa, 2);
  instructionSet[0xab] = new MovRegisterAddress(*this, 0xab, 3);
  instructionSet[0xac] = new MovRegisterAddress(*this, 0xac, 4);
  instructionSet[0xad] = new MovRegisterAddress(*this, 0xad, 5);
  instructionSet[0xae] = new MovRegisterAddress(*this, 0xae, 6);
  instructionSet[0xaf] = new MovRegisterAddress(*this, 0xaf, 7);

  MOV_92 *mov_92 = new MOV_92(*this);
  instructionSet[mov_92->GetOpcode()] = mov_92;

  instructionSet[0x86] = new MovMemoryIndirectRegister(*this, 0x86, 0);
  instructionSet[0x87] = new MovMemoryIndirectRegister(*this, 0x87, 1);

  instructionSet[0x88] = new MovAddressRegister(*this, 0x88, 0);
  instructionSet[0x89] = new MovAddressRegister(*this, 0x89, 1);
  instructionSet[0x8a] = new MovAddressRegister(*this, 0x8a, 2);
  instructionSet[0x8b] = new MovAddressRegister(*this, 0x8b, 3);
  instructionSet[0x8c] = new MovAddressRegister(*this, 0x8c, 4);
  instructionSet[0x8d] = new MovAddressRegister(*this, 0x8d, 5);
  instructionSet[0x8e] = new MovAddressRegister(*this, 0x8e, 6);
  instructionSet[0x8f] = new MovAddressRegister(*this, 0x8f, 7);

  MOV_F5 *mov_f5 = new MOV_F5(*this);
  instructionSet[mov_f5->GetOpcode()] = mov_f5;

  instructionSet[0xf6] = new MovIndirect(*this, 0xf6, 0);
  instructionSet[0xf7] = new MovIndirect(*this, 0xf7, 1);
  instructionSet[0xe6] = new MovIndirectRegister(*this, 0xe6, 0);
  instructionSet[0xe7] = new MovIndirectRegister(*this, 0xe7, 1);

  instructionSet[0xe8] = new MovARegister(*this, 0xe8, 0);
  instructionSet[0xe9] = new MovARegister(*this, 0xe9, 1);
  instructionSet[0xea] = new MovARegister(*this, 0xea, 2);
  instructionSet[0xeb] = new MovARegister(*this, 0xeb, 3);
  instructionSet[0xec] = new MovARegister(*this, 0xec, 4);
  instructionSet[0xed] = new MovARegister(*this, 0xed, 5);
  instructionSet[0xee] = new MovARegister(*this, 0xee, 6);
  instructionSet[0xef] = new MovARegister(*this, 0xef, 7);

  instructionSet[0xf8] = new MovRegisterA(*this, 0xf8, 0);
  instructionSet[0xf9] = new MovRegisterA(*this, 0xf9, 1);
  instructionSet[0xfa] = new MovRegisterA(*this, 0xfa, 2);
  instructionSet[0xfb] = new MovRegisterA(*this, 0xfb, 3);
  instructionSet[0xfc] = new MovRegisterA(*this, 0xfc, 4);
  instructionSet[0xfd] = new MovRegisterA(*this, 0xfd, 5);
  instructionSet[0xfe] = new MovRegisterA(*this, 0xfe, 6);
  instructionSet[0xff] = new MovRegisterA(*this, 0xff, 7);

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
  ORL_44 *orl_44 = new ORL_44(*this);
  instructionSet[orl_44->GetOpcode()] = orl_44;
  ORL_45 *orl_45 = new ORL_45(*this);
  instructionSet[orl_45->GetOpcode()] = orl_45;
  ORL_72 *orl_72 = new ORL_72(*this);
  instructionSet[orl_72->GetOpcode()] = orl_72;
  ORL_A0 *orl_a0 = new ORL_A0(*this);
  instructionSet[orl_a0->GetOpcode()] = orl_a0;
  ORL_46 *orl_46 = new ORL_46(*this);
  instructionSet[orl_46->GetOpcode()] = orl_46;
  ORL_47 *orl_47 = new ORL_47(*this);
  instructionSet[orl_47->GetOpcode()] = orl_47;

  instructionSet[0x48] = new OrARegister(*this, 0x48, 0);
  instructionSet[0x49] = new OrARegister(*this, 0x49, 1);
  instructionSet[0x4a] = new OrARegister(*this, 0x4a, 2);
  instructionSet[0x4b] = new OrARegister(*this, 0x4b, 3);
  instructionSet[0x4c] = new OrARegister(*this, 0x4c, 4);
  instructionSet[0x4d] = new OrARegister(*this, 0x4d, 5);
  instructionSet[0x4e] = new OrARegister(*this, 0x4e, 6);
  instructionSet[0x4f] = new OrARegister(*this, 0x4f, 7);

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

  instructionSet[0x98] = new SubARegister(*this, 0x98, 0);
  instructionSet[0x99] = new SubARegister(*this, 0x99, 1);
  instructionSet[0x9a] = new SubARegister(*this, 0x9a, 2);
  instructionSet[0x9b] = new SubARegister(*this, 0x9b, 3);
  instructionSet[0x9c] = new SubARegister(*this, 0x9c, 4);
  instructionSet[0x9d] = new SubARegister(*this, 0x9d, 5);
  instructionSet[0x9e] = new SubARegister(*this, 0x9e, 6);
  instructionSet[0x9f] = new SubARegister(*this, 0x9f, 7);

  instructionSet[0xc4] = new SWAP_C4(*this, 0xc4, 0);

  XCH_C5 *xch_c5 = new XCH_C5(*this);
  instructionSet[xch_c5->GetOpcode()] = xch_c5;
  XCH_C6 *xch_c6 = new XCH_C6(*this);
  instructionSet[xch_c6->GetOpcode()] = xch_c6;
  XCH_C7 *xch_c7 = new XCH_C7(*this);
  instructionSet[xch_c7->GetOpcode()] = xch_c7;

  instructionSet[0xc8] = new XCHRegister(*this, 0xc8, 0);
  instructionSet[0xc9] = new XCHRegister(*this, 0xc9, 1);
  instructionSet[0xca] = new XCHRegister(*this, 0xca, 2);
  instructionSet[0xcb] = new XCHRegister(*this, 0xcb, 3);
  instructionSet[0xcc] = new XCHRegister(*this, 0xcc, 4);
  instructionSet[0xcd] = new XCHRegister(*this, 0xcd, 5);
  instructionSet[0xce] = new XCHRegister(*this, 0xce, 6);
  instructionSet[0xcf] = new XCHRegister(*this, 0xcf, 7);

  XCHD_D6 *xchd_d6 = new XCHD_D6(*this);
  instructionSet[xchd_d6->GetOpcode()] = xchd_d6;
  XCHD_D7 *xchd_d7 = new XCHD_D7(*this);
  instructionSet[xchd_d7->GetOpcode()] = xchd_d7;
  XRL_66 *xrl_66 = new XRL_66(*this);
  instructionSet[xrl_66->GetOpcode()] = xrl_66;
  XRL_67 *xrl_67 = new XRL_67(*this);
  instructionSet[xrl_67->GetOpcode()] = xrl_67;

  instructionSet[0x68] = new XorARegister(*this, 0x68, 0);
  instructionSet[0x69] = new XorARegister(*this, 0x69, 1);
  instructionSet[0x6a] = new XorARegister(*this, 0x6a, 2);
  instructionSet[0x6b] = new XorARegister(*this, 0x6b, 3);
  instructionSet[0x6c] = new XorARegister(*this, 0x6c, 4);
  instructionSet[0x6d] = new XorARegister(*this, 0x6d, 5);
  instructionSet[0x6e] = new XorARegister(*this, 0x6e, 6);
  instructionSet[0x6f] = new XorARegister(*this, 0x6f, 7);

  XRL_62 *xrl_62 = new XRL_62(*this);
  instructionSet[xrl_62->GetOpcode()] = xrl_62;
  XRL_64 *xrl_64 = new XRL_64(*this);
  instructionSet[xrl_64->GetOpcode()] = xrl_64;
  XRL_65 *xrl_65 = new XRL_65(*this);
  instructionSet[xrl_65->GetOpcode()] = xrl_65;
  XRL_63 *xrl_63 = new XRL_63(*this);
  instructionSet[xrl_63->GetOpcode()] = xrl_63;
}

std::string Alu::Disassemble(std::uint16_t address)
{
  const std::uint8_t opcode = flash->Get(address);

  if (instructionSet.find(opcode) == instructionSet.end())
  {
    throw new IllegalInstructionException();
  }
  else
  {
    return instructionSet[opcode]->Disassemble(address);
  }
}

std::uint8_t Alu::GetOperands(std::uint16_t address)
{
  const std::uint8_t opcode = flash->Get(address);

  if (instructionSet.find(opcode) == instructionSet.end())
  {
    throw new IllegalInstructionException();
  }
  else
  {
    return instructionSet[opcode]->GetOperands();
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
}

void Alu::Step()
{
  instructionSet[flash->Get(pc)]->Execute();
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
  return iram.Get(reg);
}

void Alu::SetReg(std::uint8_t reg, std::uint8_t value)
{
  return iram.Set(reg, value);
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
    iram.Set(address, data);
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
    return iram.Get(address);
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

    return iram.Get(byteAddr) & bit;
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

    iram.Set(byteAddr, iram.Get(byteAddr) & ~bit);
    if (value)
    {
      iram.Set(byteAddr, iram.Get(byteAddr) | bit);
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

void Alu::SetFlash(Flash *f)
{
  flash = f;
}

void Alu::ClockEvent()
{
  if (interruptPending & INTERRUPT_PENDING_TIMER0)
  {
    interruptPending &= ~INTERRUPT_PENDING_TIMER0;
    SetSP(alu.GetSP() + 1);
    alu.iram.Set(alu.GetSP(), (uint8_t) alu.GetPC());
    SetSP(alu.GetSP() + 1);
    alu.iram.Set(alu.GetSP(), alu.GetPC() / 256);
    SetPC(0xb);
  }
  else if (interruptPending & INTERRUPT_PENDING_UART0)
  {
    interruptPending &= ~INTERRUPT_PENDING_UART0;
    SetSP(alu.GetSP() + 1);
    alu.iram.Set(alu.GetSP(), (uint8_t) alu.GetPC());
    SetSP(alu.GetSP() + 1);
    alu.iram.Set(alu.GetSP(), alu.GetPC() / 256);
    SetPC(0x23);
  }
  else
  {
    instructionSet[flash->Get(pc)]->Execute();
  }
  if (callbacks)
  {
    callbacks->OnInstructionExecuted();
  }  
}

#define IDLE_MODE 1
#define STOP_MODE 2
#define SUSPEND_MODE 64
#define SLEEP_MODE 128

int Alu::CalculateRemainingTicks()
{
  // If any sleep mode bit is set, code execution stops. So we return infinity here
  if (sfrPCON.data & (IDLE_MODE | STOP_MODE | SUSPEND_MODE | SLEEP_MODE))
  {
    return std::numeric_limits<int>::max();
  }
  else if (interruptPending)
  {
    // Let's assume that jumping to the interrupt vector takes two cycles
    return 2;
  }
  else
  {
    return instructionSet[flash->Get(pc)]->cycles;
  }
}

void Alu::RegisterCallback(UcCallbacks *c)
{
  callbacks = c;
}

UcCallbacks *Alu::GetCallback() const
{
  return callbacks;
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
  ConfigurationChanged();
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
  ConfigurationChanged();
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
        flash->Set(base + i, value);
      }
    }
    else
    {
      flash->Set(address, value);
    }
    sfrPSCTL.data &= ~(PSWE | PSEE);
  }
  else
  {
    xram.Set(address, value);
  }
}
