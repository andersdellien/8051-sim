#include <iostream>
#include "port2.hpp"
#include "sfr.hpp"

class SfrXBR2: public Sfr
{
  public:
    void OnWrite(std::uint8_t data);
    std::uint8_t Read();
};

void SfrXBR2::OnWrite(std::uint8_t data)
{
  std::cout << "XBR2 write " << (int) data << std::endl;
}

std::uint8_t SfrXBR2::Read()
{
  return 0;
}

class SfrP2: public Sfr
{
  public:
    void OnWrite(std::uint8_t data);
    std::uint8_t Read();
};

void SfrP2::OnWrite(std::uint8_t data)
{
  std::cout << "P2 write " << (int) data << std::endl;
}

std::uint8_t SfrP2::Read()
{
  return 0;
}

Port2::Port2(Alu &a) : Port(a)
{
  a.RegisterSfr(0xa0, new SfrP2());
  a.RegisterSfr(0xe3, new SfrXBR2());
}

