#include <iostream>
#include "pca.hpp"
#include "sfr.hpp"

class SfrPCA0MD: public Sfr
{
  public:
    void OnWrite(std::uint8_t data);
    std::uint8_t Read();
};

void SfrPCA0MD::OnWrite(std::uint8_t data)
{
  std::cout << "PCA0MD write " << (int) data << std::endl;
}

std::uint8_t SfrPCA0MD::Read()
{
  std::cout << "PCA0MD read" << std::endl;
  return 0;
}

Pca::Pca(Alu &a): alu(a)
{
  a.RegisterSfr(0xd9, new SfrPCA0MD());
}

