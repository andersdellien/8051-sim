#ifndef _PCA_HPP
#define _PCA_HPP

#include "alu.hpp"
#include "block.hpp"

class Pca: public Block
{
  public:
    Pca(Alu *alu);
};

#endif

