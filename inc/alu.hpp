#ifndef _ALU_HPP
#define _ALU_HPP

#include <cstdint>
#include <map>
#include <string>
#include "flash.hpp"
#include "sfr.hpp"

class Instruction;

class SfrSp;
class SfrDpl;

class Alu
{
  friend class SfrSp;
  friend class SfrDpl;
  public:
    Flash &flash;
    Memory &xram;
    std::uint8_t *iram;
    std::string Disassemble(std::uint16_t address);
    std::uint8_t GetOperands(std::uint16_t address);
    Alu(Flash &f, Memory &x, std::uint16_t iramSize);
    void Reset();
    void Step();
    std::uint16_t GetPC();
    std::uint8_t GetSP();
    std::uint8_t GetA();
    void SetPC(std::uint16_t pc);
    void SetSP(std::uint8_t sp);
    void SetA(std::uint8_t data);
    std::uint16_t GetDP();
    void RegisterSfr(std::uint8_t page, Sfr *sfr, std::uint8_t address);
    void RegisterSfrBitAddressable(std::uint8_t page, Sfr *sfr, std::uint8_t address);
    void RegisterSfr(std::uint8_t page, Sfr *sfr);
    void RegisterSfrBitAddressable(std::uint8_t page, Sfr *sfr);
    std::map<std::uint8_t, std::map<std::uint8_t, Sfr*> > specialFunctionRegisters;
    std::map<std::uint8_t, Sfr*> bitAddressableSfr;
    std::uint8_t GetReg(std::uint8_t reg);
    std::uint8_t GetR0();
    std::uint8_t GetR1();
    std::uint8_t GetR2();
    std::uint8_t GetR3();
    std::uint8_t GetR4();
    std::uint8_t GetR5();
    std::uint8_t GetR6();
    std::uint8_t GetR7();
    void SetR0(std::uint8_t val);
    void SetR1(std::uint8_t val);
    void SetR2(std::uint8_t val);
    void SetR3(std::uint8_t val);
    void SetR4(std::uint8_t val);
    void SetR5(std::uint8_t val);
    void SetR6(std::uint8_t val);
    void SetR7(std::uint8_t val);
    void SetDPTR(std::uint16_t val);
    std::uint16_t GetDPTR();
    bool GetC();
    void SetC();
    void ClrC();
    void SetAC();
    void ClrAC();
    void SetOV();
    void ClrOV();

    // Handles byte access to IRAM as well as SFR
    std::uint8_t Read(std::uint8_t address);
    void Write(std::uint8_t address, std::uint8_t value);

    // Handles bit access to bit-addressable IRAM as well as SFR
    bool ReadBit(std::uint8_t address);
    void WriteBit(std::uint8_t address, bool value);
  private:
    std::map<std::uint8_t, Instruction*> instructionSet;
    std::uint16_t pc;
    std::uint16_t dptr;
    std::uint8_t sp;
    std::uint16_t dp;
    std::uint8_t *r0;
    std::uint8_t *r1;
    std::uint8_t *r2;
    std::uint8_t *r3;
    std::uint8_t *r4;
    std::uint8_t *r5;
    std::uint8_t *r6;
    std::uint8_t *r7;
    bool c;
    bool ac;
    bool ov;
    Sfr *sfrSP;
    Sfr *sfrDPL;
    Sfr *sfrDPH;
    Sfr *sfrIP;
    Sfr *sfrIE;
    Sfr *sfrSFRPAGE;
    Sfr *sfrB;
    Sfr *sfrACC;
};

#endif
