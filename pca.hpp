#ifndef _PCA_HPP
#define _PCA_HPP

#include "alu.hpp"

class Pca
{
  public:
    Pca(Alu &alu);
  private:
    Alu &alu;
};

#endif

