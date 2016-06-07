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
    std::uint8_t *iram;
    std::string Disassemble(std::uint16_t address);
    std::uint8_t GetOperands(std::uint16_t address);
    Alu(Flash &f, std::uint16_t iramSize);
    void Reset();
    void Step();
    std::uint16_t GetPC();
    std::uint8_t GetSP();
    std::uint8_t GetA();
    void SetPC(std::uint16_t pc);
    void SetSP(std::uint8_t sp);
    void SetA(std::uint8_t data);
    std::uint16_t GetDP();
    void RegisterSfr(std::uint8_t address, Sfr *sfr);
    std::map<std::uint8_t, Sfr*> specialFunctionRegisters;
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
  private:
    std::map<std::uint8_t, Instruction*> instructionSet;
    std::uint8_t a;
    std::uint16_t pc;
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
};

#endif
