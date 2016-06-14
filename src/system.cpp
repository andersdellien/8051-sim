#include <iostream>
#include "system.hpp"
#include "sfr.hpp"
#include "alu.hpp"
#include "block.hpp"

CLKSEL::CLKSEL(std::string name, Alu &alu, std::uint8_t address) : Sfr(name, alu, address)
{
}

std::uint8_t CLKSEL::Read()
{
  // Let's always assume the clock is valid
  return data | 0x80;
}

System::System(Alu &a) :
  Block(a),
  clksel("CLKSEL", a, 0xa9),
  oscicn("OSCICN", a, 0xb2),
  rstsrc("RSTSRC", a, 0xef),
  ref0cn("REF0CN", a, 0xd1),
  rtc0key("RTC0KEY", a, 0xae),
  rtc0dat("RTC0DAT", a, 0xad),
  rtc0adr("RTC0ADR", a, 0xac),
  pmu0cf("PMU0CF", a, 0xb5),
  reg0cn("REG0CN", a, 0xc9)
{
  a.RegisterSfr(0xa9, clksel);
  a.RegisterSfr(0xb2, oscicn, 0x00);
  a.RegisterSfr(0xef, rstsrc, 0x00);
  a.RegisterSfr(0xd1, ref0cn, 0x00);
  a.RegisterSfr(0xae, rtc0key, 0x00);
  a.RegisterSfr(0xad, rtc0dat, 0x00);
  a.RegisterSfr(0xac, rtc0adr, 0x00);
  a.RegisterSfr(0xb5, pmu0cf, 0x00);
  a.RegisterSfr(0xc9, reg0cn, 0x00);
}
