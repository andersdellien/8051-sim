#ifndef _PORT1_HPP
#define _PORT1_HPP

#include "port.hpp"
#include "alu.hpp"

class P1: public SfrBitAddressable
{
  public:
   P1(std::string name, Block &block, std::uint8_t address, std::uint8_t resetValue, std::set<std::uint8_t> pages);
   void WriteBit(std::uint8_t bit, bool value);
};

class Port1 : public Port
{
  public:
    Port1(std::string name, Alu &alu);
  private:
    Sfr p1mdin;
    Sfr p1mdout;
    P1 p1;
    Sfr p1skip;
};

#endif
