#ifndef _PCA_HPP
#define _PCA_HPP

#include "alu.hpp"
#include "block.hpp"

class Pca: public Block
{
  public:
    Pca(Alu &alu);
  private:
    Sfr pca0cpl2;
    Sfr pca0h;
    Sfr pca0l;
    Sfr pca0md;
    Sfr pca0cn;
    Sfr pca0cph2;
};

#endif
