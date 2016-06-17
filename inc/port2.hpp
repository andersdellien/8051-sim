#ifndef _PORT2_HPP
#define _PORT2_HPP

#include "port.hpp"
#include "alu.hpp"

class P2: public SfrBitAddressable
{
  public:
   P2(std::string name, Block &block, std::uint8_t address, std::uint8_t resetValue, std::set<std::uint8_t> pages);
   void WriteBit(std::uint8_t bit, bool value);
};

class Port2 : public Port
{
  public:
    Port2(std::string name, Alu &alu);
  private:
    P2 p2;
    Sfr xbr2;
};

#endif
