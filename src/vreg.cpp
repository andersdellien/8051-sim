#include <iostream>
#include "vreg.hpp"
#include "sfr.hpp"

Vreg::Vreg(Alu &a)
{
  a.RegisterSfr(0xc9, new Sfr("REG0CN", a, 0xc9), 0x00);
}

