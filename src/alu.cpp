#include <iostream>
#include <string>
#include "flash.hpp"
#include "alu.hpp"
#include "instruction_set.hpp"
#include "exceptions.hpp"
#include "sfr.hpp"

Alu::Alu(Flash &f, Memory &x, std::uint16_t iramSize): flash(f), xram(x), iram(iramSize)
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

  ADD_26 *add_26 = new ADD_26(*this);
  instructionSet[add_26->GetOpcode()] = add_26;
  ADD_27 *add_27 = new ADD_27(*this);
  instructionSet[add_27->GetOpcode()] = add_27;

  instructionSet[0x28] = new AddRegister(*this, 0, 0x28, false);
  instructionSet[0x29] = new AddRegister(*this, 1, 0x29, false);
  instructionSet[0x2a] = new AddRegister(*this, 2, 0x2a, false);
  instructionSet[0x2b] = new AddRegister(*this, 3, 0x2b, false);
  instructionSet[0x2c] = new AddRegister(*this, 4, 0x2c, false);
  instructionSet[0x2d] = new AddRegister(*this, 5, 0x2d, false);
  instructionSet[0x2e] = new AddRegister(*this, 6, 0x2e, false);
  instructionSet[0x2f] = new AddRegister(*this, 7, 0x2f, false);
  instructionSet[0x34] = new AddImmediate(*this, 0x34, true);
  instructionSet[0x35] = new AddMemory(*this, 0x35, true);

  ADDC_36 *addc_36 = new ADDC_36(*this);
  instructionSet[addc_36->GetOpcode()] = addc_36;
  ADDC_37 *addc_37 = new ADDC_37(*this);
  instructionSet[addc_37->GetOpcode()] = addc_37;

  instructionSet[0x38] = new AddRegister(*this, 0, 0x38, true);
  instructionSet[0x39] = new AddRegister(*this, 1, 0x39, true);
  instructionSet[0x3a] = new AddRegister(*this, 2, 0x3a, true);
  instructionSet[0x3b] = new AddRegister(*this, 3, 0x3b, true);
  instructionSet[0x3c] = new AddRegister(*this, 4, 0x3c, true);
  instructionSet[0x3d] = new AddRegister(*this, 5, 0x3d, true);
  instructionSet[0x3e] = new AddRegister(*this, 6, 0x3e, true);
  instructionSet[0x3f] = new AddRegister(*this, 7, 0x3f, true);

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
  DJNZ_D8 *djnz_d8 = new DJNZ_D8(*this);
  instructionSet[djnz_d8->GetOpcode()] = djnz_d8;
  DJNZ_D9 *djnz_d9 = new DJNZ_D9(*this);
  instructionSet[djnz_d9->GetOpcode()] = djnz_d9;
  DJNZ_DA *djnz_da = new DJNZ_DA(*this);
  instructionSet[djnz_da->GetOpcode()] = djnz_da;
  DJNZ_DB *djnz_db = new DJNZ_DB(*this);
  instructionSet[djnz_db->GetOpcode()] = djnz_db;
  DJNZ_DC *djnz_dc = new DJNZ_DC(*this);
  instructionSet[djnz_dc->GetOpcode()] = djnz_dc;
  DJNZ_DD *djnz_dd = new DJNZ_DD(*this);
  instructionSet[djnz_dd->GetOpcode()] = djnz_dd;
  DJNZ_DE *djnz_de = new DJNZ_DE(*this);
  instructionSet[djnz_de->GetOpcode()] = djnz_de;
  DJNZ_DF *djnz_df = new DJNZ_DF(*this);
  instructionSet[djnz_df->GetOpcode()] = djnz_df;
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
  MOV_76 *mov_76 = new MOV_76(*this);
  instructionSet[mov_76->GetOpcode()] = mov_76;
  MOV_77 *mov_77 = new MOV_77(*this);
  instructionSet[mov_77->GetOpcode()] = mov_77;

  instructionSet[0xa6] = new MovIndirectFromMem(*this, 0xa6, 0);
  instructionSet[0xa7] = new MovIndirectFromMem(*this, 0xa7, 1);

  MOV_74 *mov_74 = new MOV_74(*this);
  instructionSet[mov_74->GetOpcode()] = mov_74;
  MOV_E5 *mov_e5 = new MOV_E5(*this);
  instructionSet[mov_e5->GetOpcode()] = mov_e5;
  MOV_A2 *mov_a2 = new MOV_A2(*this);
  instructionSet[mov_a2->GetOpcode()] = mov_a2;
  MOV_78 *mov_78 = new MOV_78(*this);
  instructionSet[mov_78->GetOpcode()] = mov_78;
  MOV_79 *mov_79 = new MOV_79(*this);
  instructionSet[mov_79->GetOpcode()] = mov_79;
  MOV_7A *mov_7a = new MOV_7A(*this);
  instructionSet[mov_7a->GetOpcode()] = mov_7a;
  MOV_7B *mov_7b = new MOV_7B(*this);
  instructionSet[mov_7b->GetOpcode()] = mov_7b;
  MOV_7C *mov_7c = new MOV_7C(*this);
  instructionSet[mov_7c->GetOpcode()] = mov_7c;
  MOV_7D *mov_7d = new MOV_7D(*this);
  instructionSet[mov_7d->GetOpcode()] = mov_7d;
  MOV_7E *mov_7e = new MOV_7E(*this);
  instructionSet[mov_7e->GetOpcode()] = mov_7e;
  MOV_7F *mov_7f = new MOV_7F(*this);
  instructionSet[mov_7f->GetOpcode()] = mov_7f;
  MOV_A8 *mov_a8 = new MOV_A8(*this);
  instructionSet[mov_a8->GetOpcode()] = mov_a8;
  MOV_A9 *mov_a9 = new MOV_A9(*this);
  instructionSet[mov_a9->GetOpcode()] = mov_a9;
  MOV_AA *mov_aa = new MOV_AA(*this);
  instructionSet[mov_aa->GetOpcode()] = mov_aa;
  MOV_AB *mov_ab = new MOV_AB(*this);
  instructionSet[mov_ab->GetOpcode()] = mov_ab;
  MOV_AC *mov_ac = new MOV_AC(*this);
  instructionSet[mov_ac->GetOpcode()] = mov_ac;
  MOV_AD *mov_ad = new MOV_AD(*this);
  instructionSet[mov_ad->GetOpcode()] = mov_ad;
  MOV_AE *mov_ae = new MOV_AE(*this);
  instructionSet[mov_ae->GetOpcode()] = mov_ae;
  MOV_AF *mov_af = new MOV_AF(*this);
  instructionSet[mov_af->GetOpcode()] = mov_af;
  MOV_92 *mov_92 = new MOV_92(*this);
  instructionSet[mov_92->GetOpcode()] = mov_92;
  MOV_86 *mov_86 = new MOV_86(*this);
  instructionSet[mov_86->GetOpcode()] = mov_86;
  MOV_87 *mov_87 = new MOV_87(*this);
  instructionSet[mov_87->GetOpcode()] = mov_87;
  MOV_88 *mov_88 = new MOV_88(*this);
  instructionSet[mov_88->GetOpcode()] = mov_88;
  MOV_89 *mov_89 = new MOV_89(*this);
  instructionSet[mov_89->GetOpcode()] = mov_89;
  MOV_8A *mov_8a = new MOV_8A(*this);
  instructionSet[mov_8a->GetOpcode()] = mov_8a;
  MOV_8B *mov_8b = new MOV_8B(*this);
  instructionSet[mov_8b->GetOpcode()] = mov_8b;
  MOV_8C *mov_8c = new MOV_8C(*this);
  instructionSet[mov_8c->GetOpcode()] = mov_8c;
  MOV_8D *mov_8d = new MOV_8D(*this);
  instructionSet[mov_8d->GetOpcode()] = mov_8d;
  MOV_8E *mov_8e = new MOV_8E(*this);
  instructionSet[mov_8e->GetOpcode()] = mov_8e;
  MOV_8F *mov_8f = new MOV_8F(*this);
  instructionSet[mov_8f->GetOpcode()] = mov_8f;
  MOV_F5 *mov_f5 = new MOV_F5(*this);
  instructionSet[mov_f5->GetOpcode()] = mov_f5;

  instructionSet[0xf6] = new MovIndirect(*this, 0xf6, 0);
  instructionSet[0xf7] = new MovIndirect(*this, 0xf7, 1);

  MOV_E6 *mov_e6 = new MOV_E6(*this);
  instructionSet[mov_e6->GetOpcode()] = mov_e6;
  MOV_E7 *mov_e7 = new MOV_E7(*this);
  instructionSet[mov_e7->GetOpcode()] = mov_e7;
  MOV_E8 *mov_e8 = new MOV_E8(*this);
  instructionSet[mov_e8->GetOpcode()] = mov_e8;
  MOV_E9 *mov_e9 = new MOV_E9(*this);
  instructionSet[mov_e9->GetOpcode()] = mov_e9;
  MOV_EA *mov_ea = new MOV_EA(*this);
  instructionSet[mov_ea->GetOpcode()] = mov_ea;
  MOV_EB *mov_eb = new MOV_EB(*this);
  instructionSet[mov_eb->GetOpcode()] = mov_eb;
  MOV_EC *mov_ec = new MOV_EC(*this);
  instructionSet[mov_ec->GetOpcode()] = mov_ec;
  MOV_ED *mov_ed = new MOV_ED(*this);
  instructionSet[mov_ed->GetOpcode()] = mov_ed;
  MOV_EE *mov_ee = new MOV_EE(*this);
  instructionSet[mov_ee->GetOpcode()] = mov_ee;
  MOV_EF *mov_ef = new MOV_EF(*this);
  instructionSet[mov_ef->GetOpcode()] = mov_ef;
  MOV_F8 *mov_f8 = new MOV_F8(*this);
  instructionSet[mov_f8->GetOpcode()] = mov_f8;
  MOV_F9 *mov_f9 = new MOV_F9(*this);
  instructionSet[mov_f9->GetOpcode()] = mov_f9;
  MOV_FA *mov_fa = new MOV_FA(*this);
  instructionSet[mov_fa->GetOpcode()] = mov_fa;
  MOV_FB *mov_fb = new MOV_FB(*this);
  instructionSet[mov_fb->GetOpcode()] = mov_fb;
  MOV_FC *mov_fc = new MOV_FC(*this);
  instructionSet[mov_fc->GetOpcode()] = mov_fc;
  MOV_FD *mov_fd = new MOV_FD(*this);
  instructionSet[mov_fd->GetOpcode()] = mov_fd;
  MOV_FE *mov_fe = new MOV_FE(*this);
  instructionSet[mov_fe->GetOpcode()] = mov_fe;
  MOV_FF *mov_ff = new MOV_FF(*this);
  instructionSet[mov_ff->GetOpcode()] = mov_ff;
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
  SUBB_94 *subb_94 = new SUBB_94(*this);
  instructionSet[subb_94->GetOpcode()] = subb_94;

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

  SWAP_C4 *swap_c4 = new SWAP_C4(*this);
  instructionSet[swap_c4->GetOpcode()] = swap_c4;
  XCH_C5 *xch_c5 = new XCH_C5(*this);
  instructionSet[xch_c5->GetOpcode()] = xch_c5;
  XCH_C6 *xch_c6 = new XCH_C6(*this);
  instructionSet[xch_c6->GetOpcode()] = xch_c6;
  XCH_C7 *xch_c7 = new XCH_C7(*this);
  instructionSet[xch_c7->GetOpcode()] = xch_c7;
  XCH_C8 *xch_c8 = new XCH_C8(*this);
  instructionSet[xch_c8->GetOpcode()] = xch_c8;
  XCH_C9 *xch_c9 = new XCH_C9(*this);
  instructionSet[xch_c9->GetOpcode()] = xch_c9;
  XCH_CA *xch_ca = new XCH_CA(*this);
  instructionSet[xch_ca->GetOpcode()] = xch_ca;
  XCH_CB *xch_cb = new XCH_CB(*this);
  instructionSet[xch_cb->GetOpcode()] = xch_cb;
  XCH_CC *xch_cc = new XCH_CC(*this);
  instructionSet[xch_cc->GetOpcode()] = xch_cc;
  XCH_CD *xch_cd = new XCH_CD(*this);
  instructionSet[xch_cd->GetOpcode()] = xch_cd;
  XCH_CE *xch_ce = new XCH_CE(*this);
  instructionSet[xch_ce->GetOpcode()] = xch_ce;
  XCH_CF *xch_cf = new XCH_CF(*this);
  instructionSet[xch_cf->GetOpcode()] = xch_cf;
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
  sfrSP = new Sfr("SP", *this, 0x81);
  sfrDPL = new Sfr("DPL", *this, 0x82);
  sfrDPH = new Sfr("DPH", *this, 0x83);
  sfrIP = new Sfr("IP", *this, 0xb8);
  sfrIE = new SfrBitAddressable("IE", *this, 0xa7);
  sfrSFRPAGE = new Sfr("SFRPAGE", *this, 0xa7);
  sfrB = new SfrBitAddressable("B", *this, 0xf0);
  sfrACC = new SfrBitAddressable("ACC", *this, 0xe0);
  RegisterSfr(0x81, sfrSP);
  RegisterSfr(0x82, sfrDPL);
  RegisterSfr(0x83, sfrDPH);
  RegisterSfr(0xb8, sfrIP);
  RegisterSfr(0xa7, sfrSFRPAGE);
  RegisterSfr(0xf0, sfrB);
  RegisterSfr(0xa8, sfrIE);
  RegisterSfr(0xe0, sfrACC);
}

std::string Alu::Disassemble(std::uint16_t address)
{
  const std::uint8_t opcode = flash.Get(address);

  if (instructionSet.find(opcode) == instructionSet.end())
  {
    throw new IllegalInstructionException();
  }
  else
  {
    return instructionSet[opcode]->Disassemble(flash, address);
  }
}

std::uint8_t Alu::GetOperands(std::uint16_t address)
{
  const std::uint8_t opcode = flash.Get(address);

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
  SetA(0);
  pc = 0;
  sfrSP->data = 7;
  sfrSFRPAGE->data = 0;
  for (int i = 0; i < 8; i++)
  {
     SetReg(i, 0);
  }
}

void Alu::Step()
{
  instructionSet[flash.Get(pc)]->Execute();  
}

std::uint16_t Alu::GetPC()
{
  return pc;
}

std::uint8_t Alu::GetSP()
{
  return sfrSP->data;
}
void Alu::SetSP(std::uint8_t s)
{
  sfrSP->data = s;
}

void Alu::SetPC(std::uint16_t newPC)
{
  pc = newPC;
}

void Alu::SetA(std::uint8_t a)
{
  sfrACC->data = a;
}

std::uint8_t Alu::GetA()
{
  return sfrACC->data;
}

std::uint8_t Alu::GetReg(std::uint8_t reg)
{
  return iram.Get(reg);
}

void Alu::SetReg(std::uint8_t reg, std::uint8_t value)
{
  return iram.Set(reg, value);
}

std::uint8_t Alu::GetR0()
{
  return iram.Get(0);
}

std::uint8_t Alu::GetR1()
{
  return iram.Get(1);
}

std::uint8_t Alu::GetR2()
{
  return iram.Get(2);
}

std::uint8_t Alu::GetR3()
{
  return iram.Get(3);
}

std::uint8_t Alu::GetR4()
{
  return iram.Get(4);
}

std::uint8_t Alu::GetR5()
{
  return iram.Get(5);
}

std::uint8_t Alu::GetR6()
{
  return iram.Get(6);
}

std::uint8_t Alu::GetR7()
{
  return iram.Get(7);
}

void Alu::SetR0(std::uint8_t val)
{
  iram.Set(0, val);
}

void Alu::SetR1(std::uint8_t val)
{
  iram.Set(1, val);
}

void Alu::SetR2(std::uint8_t val)
{
  iram.Set(2, val);
}

void Alu::SetR3(std::uint8_t val)
{
  iram.Set(3, val);
}

void Alu::SetR4(std::uint8_t val)
{
  iram.Set(4, val);
}

void Alu::SetR5(std::uint8_t val)
{
  iram.Set(5, val);
}

void Alu::SetR6(std::uint8_t val)
{
  iram.Set(6, val);
}

void Alu::SetR7(std::uint8_t val)
{
  iram.Set(7, val);
}

void Alu::SetDPTR(std::uint16_t val)
{
  sfrDPL->data = val & 255;
  sfrDPH->data = val / 256;
}

std::uint16_t Alu::GetDPTR()
{
  return sfrDPL->data + 256 * sfrDPH->data;
}

bool Alu::GetC()
{
  return c;
}

void Alu::SetC()
{
  c = true;
}

void Alu::ClrC()
{
  c = false;
}

void Alu::SetAC()
{
  ac = true;
}

void Alu::ClrAC()
{
  ac = false;
}

void Alu::SetOV()
{
  ov = true;
}

void Alu::ClrOV()
{
  ov = false;
}

void Alu::RegisterSfr(std::uint8_t address, Sfr *sfr, std::uint8_t page)
{
  specialFunctionRegisters[page][address] = sfr;
  SfrBitAddressable *sfrBitAddressable = dynamic_cast<SfrBitAddressable*>(sfr);
  {
    bitAddressableSfr[address] = sfrBitAddressable;
  }
}

void Alu::RegisterSfr(std::uint8_t address, Sfr *sfr)
{
  RegisterSfr(address, sfr, 0x00);
  RegisterSfr(address, sfr, 0x0f);
}

void Alu::Write(std::uint8_t address, std::uint8_t data)
{
  if (address < 0x80)
  {
    iram.Set(address, data);
  }
  else if (specialFunctionRegisters[sfrSFRPAGE->data].find(address) != specialFunctionRegisters[sfrSFRPAGE->data].end())
  {
    specialFunctionRegisters[sfrSFRPAGE->data][address]->Write(data);
  }
  else
  {
    throw new IllegalAddressException();
  }
}

std::uint8_t Alu::Read(std::uint8_t address)
{
  if (address < 0x80)
  {
    return iram.Get(address);
  }
  else if (specialFunctionRegisters[sfrSFRPAGE->data].find(address) != specialFunctionRegisters[sfrSFRPAGE->data].end())
  {
    return specialFunctionRegisters[sfrSFRPAGE->data][address]->Read();
  }
  else
  {
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
    throw new IllegalAddressException();
  }
}

void Alu::WriteBit(std::uint8_t address, bool value)
{
  if (address < 0x80)
  {
    std::uint8_t byteAddr = 0x20 + address / 8;
    std::uint8_t bit = 0;

    if (value)
    {
      bit = 1 << address % 8;
    }

    iram.Set(byteAddr, iram.Get(byteAddr) | bit);
  }
  else if (bitAddressableSfr.find(address & 0xf8) != bitAddressableSfr.end())
  {
    bitAddressableSfr[address & 0xf8]->WriteBit(address % 8, value);
  }
  else
  {
    throw new IllegalAddressException();
  }
}

bool Alu::GetTraceSfr()
{
  return traceSfr;
}

void Alu::SetTraceSfr(bool value)
{
  traceSfr = value;
}
