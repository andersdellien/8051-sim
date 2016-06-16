#ifndef _SYSTEM_HPP
#define _SYSTEM_HPP

#include <set>
#include "alu.hpp"
#include "block.hpp"

class CLKSEL: public Sfr
{
  public:
    CLKSEL(std::string name, Alu &a, std::uint8_t addresss, std::uint8_t resetValue, std::set<std::uint8_t> pages);
    std::uint8_t Read();
};

class System: public Block
{
  public:
    System(Alu &alu);
  private:
    CLKSEL clksel;
    Sfr oscicn;
    Sfr rstsrc;
    Sfr ref0cn;
    Sfr rtc0key;
    Sfr rtc0dat;
    Sfr rtc0adr;
    Sfr pmu0cf;
    Sfr reg0cn;
};

#endif
