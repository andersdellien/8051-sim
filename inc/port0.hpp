#ifndef _PORT0_HPP
#define _PORT0_HPP

#include <set>
#include "port.hpp"
#include "alu.hpp"

class P0: public SfrBitAddressable
{
  public:
   P0(std::string name, Alu &alu, std::uint8_t address, std::uint8_t resetValue, std::set<std::uint8_t> pages);
   bool ReadBit(std::uint8_t bit);
};

class Port0 : public Port
{
  public:
    Port0(Alu &alu);
  private:
    Sfr p0mdin;
    Sfr p0mdout;
    P0 p0;
    Sfr p0skip;
    Sfr xbr0;
};

#endif
