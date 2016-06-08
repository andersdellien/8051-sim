#include <iostream>
#include "uart.hpp"
#include "sfr.hpp"

class SfrSCON0: public Sfr
{
  public:
    void OnWrite(std::uint8_t data);
    std::uint8_t Read();
};

void SfrSCON0::OnWrite(std::uint8_t data)
{
  std::cout << "SCON0 write " << (int) data << std::endl;
}

std::uint8_t SfrSCON0::Read()
{
  std::cout << "SCON0 read" << std::endl;
  return 0;
}

Uart::Uart(Alu &a)
{
  a.RegisterSfr(0x98, new SfrSCON0());
}

