#include <iostream>
#include "system.hpp"
#include "sfr.hpp"
#include "alu.hpp"

class CLKSEL: public Sfr
{
  public:
    CLKSEL(std::string name, Alu &a, std::uint8_t addresss);
    std::uint8_t Read();
};

CLKSEL::CLKSEL(std::string name, Alu &alu, std::uint8_t address) : Sfr(name, alu, address)
{
}

std::uint8_t CLKSEL::Read()
{
  // Let's always assume the clock is valid
  return data | 0x80;
}

System::System(Alu &a)
{
  a.RegisterSfr(0x87, new Sfr("PCON", a, 0x87));
  a.RegisterSfr(0xa9, new CLKSEL("CLKSEL", a, 0xa9));
  a.RegisterSfr(0xb2, new Sfr("OSCICN", a, 0xb2), 0x00);
  a.RegisterSfr(0xef, new Sfr("RSTSRC", a, 0xef), 0x00);
  a.RegisterSfr(0xd1, new Sfr("REF0CN", a, 0xd1), 0x00);
  a.RegisterSfr(0xae, new Sfr("RTC0KEY", a, 0xae), 0x00);
  a.RegisterSfr(0xad, new Sfr("RTC0DAT", a, 0xad), 0x00);
  a.RegisterSfr(0xac, new Sfr("RTC0ADR", a, 0xac), 0x00);
  a.RegisterSfr(0xb5, new Sfr("PMU0CF", a, 0xb5), 0x00);
}

