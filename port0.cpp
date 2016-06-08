#include <iostream>
#include "port0.hpp"
#include "sfr.hpp"

class SfrP0MDIN: public Sfr
{
  public:
    void OnWrite(std::uint8_t data);
    std::uint8_t Read();
};

void SfrP0MDIN::OnWrite(std::uint8_t data)
{
  std::cout << "P0MDIN write " << (int) data << std::endl;
}

std::uint8_t SfrP0MDIN::Read()
{
  std::cout << "P0MDIN read" << std::endl;
  return 0;
}

Port0::Port0(Alu &a) : Port(a)
{
  a.RegisterSfr(0xf1, new SfrP0MDIN());
}

