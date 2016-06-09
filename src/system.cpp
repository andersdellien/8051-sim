#include <iostream>
#include "system.hpp"
#include "sfr.hpp"

System::System(Alu &a)
{
  a.RegisterSfr(0xa9, new Sfr("CLKSEL"));
  a.RegisterSfr(0xb2, new Sfr("OSCICN"), 0x00);
  a.RegisterSfr(0xef, new Sfr("RSTSRC"), 0x00);
  a.RegisterSfr(0xd1, new Sfr("REF0CN"), 0x00);
  a.RegisterSfr(0xae, new Sfr("RTC0KEY"), 0x00);
  a.RegisterSfr(0xad, new Sfr("RTC0DAT"), 0x00);
  a.RegisterSfr(0xac, new Sfr("RTC0ADR"), 0x00);
  a.RegisterSfr(0xb5, new Sfr("PMU0CF"), 0x00);
}

