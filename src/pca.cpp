#include <iostream>
#include "pca.hpp"
#include "sfr.hpp"
#include "block.hpp"

Pca::Pca(Alu &a):
  Block(a),
  pca0cpl2("PCA0CPL2", a, 0xeb),
  pca0h("PCA0H", a, 0xeb),
  pca0l("PCA0L", a, 0xf9),
  pca0md("PCA0MD", a, 0xd9),
  pca0cn("PCA0CN", a, 0xd8),
  pca0cph2("PCA0CPH2", a, 0xec)
{
  a.RegisterSfr(0xeb, pca0cpl2, 0x00);
  a.RegisterSfr(0xfa, pca0h, 0x00);
  a.RegisterSfr(0xf9, pca0l, 0x00);
  a.RegisterSfr(0xd9, pca0md, 0x00);
  a.RegisterSfr(0xd8, pca0cn, 0x00);
  a.RegisterSfr(0xec, pca0cph2, 0x00);
}
