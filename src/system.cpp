#include <iostream>
#include "system.hpp"
#include "sfr.hpp"

System::System(Alu &a)
{
  a.RegisterSfr(0xa9, new Sfr("CLKSEL"));
  a.RegisterSfr(0xb2, new Sfr("OSCICN"), 0x00);
  a.RegisterSfr(0xef, new Sfr("RSTSRC"), 0x00);
  a.RegisterSfr(0xd1, new Sfr("REF0CN"), 0x00);
}

