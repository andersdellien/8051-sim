#include <iostream>
#include "pca.hpp"
#include "sfr.hpp"
#include "block.hpp"

Pca::Pca(std::string name, Alu &a):
  Block(name, a),
  pca0cpl2("PCA0CPL2", *this, 0xeb, 0x00, {0x0}),
  pca0h("PCA0H", *this, 0xfa, 0x00, {0x0}),
  pca0l("PCA0L", *this, 0xf9, 0x00, {0x0}),
  pca0md("PCA0MD", *this, 0xd9, 0x40, {0x0}),
  pca0cn("PCA0CN", *this, 0xd8, 0x00, {0x0}),
  pca0cph2("PCA0CPH2", *this, 0xec, 0x00, {0x0})
{
}
