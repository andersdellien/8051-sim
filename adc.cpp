#include <iostream>
#include "adc.hpp"
#include "sfr.hpp"

class SfrTOFFL: public Sfr
{
  public:
    void OnWrite(std::uint8_t data);
    std::uint8_t Read();
};

void SfrTOFFL::OnWrite(std::uint8_t data)
{
  std::cout << "TOFFL write " << (int) data << std::endl;
}

std::uint8_t SfrTOFFL::Read()
{
  std::cout << "TOFFL read" << std::endl;
  return 0;
}

Adc::Adc(Alu &a)
{
  a.RegisterSfr(0x8d, new SfrTOFFL());
}

