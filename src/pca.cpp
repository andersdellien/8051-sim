#include <iostream>
#include "pca.hpp"
#include "sfr.hpp"

Pca::Pca(Alu &a): alu(a)
{
  a.RegisterSfr(0xeb, new Sfr("PCA0CPL2", a), 0x00);
  a.RegisterSfr(0xfa, new Sfr("PCA0H", a), 0x00);
  a.RegisterSfr(0xf9, new Sfr("PCA0L", a), 0x00);
  a.RegisterSfr(0xd9, new Sfr("PCA0MD", a), 0x00);
  a.RegisterSfr(0xd8, new Sfr("PCA0CN", a), 0x00);
  a.RegisterSfr(0xec, new Sfr("PCA0CPH2", a), 0x00);
}

