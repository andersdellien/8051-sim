#include <iostream>
#include "vreg.hpp"
#include "sfr.hpp"

class SfrREG0CN: public Sfr
{
  public:
    void OnWrite(std::uint8_t data);
    std::uint8_t Read();
};

void SfrREG0CN::OnWrite(std::uint8_t data)
{
  std::cout << "REG0CN write " << (int) data << std::endl;
}

std::uint8_t SfrREG0CN::Read()
{
  std::cout << "REG0CN read" << std::endl;
  return 0;
}

Vreg::Vreg(Alu &a)
{
  a.RegisterSfr(0xc9, new SfrREG0CN());
}

