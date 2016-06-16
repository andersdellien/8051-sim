#include <iostream>
#include <set>
#include "system.hpp"
#include "sfr.hpp"
#include "alu.hpp"
#include "block.hpp"

CLKSEL::CLKSEL(std::string name, Alu &alu, std::uint8_t address, std::uint8_t resetValue, std::set<std::uint8_t> pages):
  Sfr(name, alu, address, resetValue, pages)
{
}

std::uint8_t CLKSEL::Read()
{
  // Let's always assume the clock is valid
  return data | 0x80;
}

System::System(Alu &a) :
  Block(a),
  clksel("CLKSEL", a, 0xa9, 0x82, {0x0, 0xf}),
  oscicn("OSCICN", a, 0xb2, 0x00, {0x0}),
  rstsrc("RSTSRC", a, 0xef, 0x00, {0x0}),
  ref0cn("REF0CN", a, 0xd1, 0x18, {0x0}),
  rtc0key("RTC0KEY", a, 0xae, 0x00, {0x0}),
  rtc0dat("RTC0DAT", a, 0xad, 0x00, {0x0}),
  rtc0adr("RTC0ADR", a, 0xac, 0x00, {0x0}),
  pmu0cf("PMU0CF", a, 0xb5, 0x00, {0x0}),
  reg0cn("REG0CN", a, 0xc9, 0x00, {0x0})
{
}
