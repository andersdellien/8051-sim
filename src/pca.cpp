#include <iostream>
#include "pca.hpp"
#include "sfr.hpp"

Pca::Pca(Alu &a): alu(a)
{
  a.RegisterSfr(0xd9, new Sfr("PCA0MD"), 0x00);
}

