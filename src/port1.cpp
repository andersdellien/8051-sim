#include <iostream>
#include "port1.hpp"
#include "sfr.hpp"

class SfrP1SKIP: public Sfr
{
  public:
    void OnWrite(std::uint8_t data);
    std::uint8_t Read();
};

void SfrP1SKIP::OnWrite(std::uint8_t data)
{
  std::cout << "P1SKIP write " << (int) data << std::endl;
}

std::uint8_t SfrP1SKIP::Read()
{
  std::cout << "P1SKIP read" << std::endl;
  return 0;
}

class SfrP1: public Sfr
{
  public:
    void OnWrite(std::uint8_t data);
    std::uint8_t Read();
};

void SfrP1::OnWrite(std::uint8_t data)
{
  std::cout << "P1 write " << (int) data << std::endl;
}

std::uint8_t SfrP1::Read()
{
  std::cout << "P1 read" << std::endl;
  return 0;
}

class SfrP1MDIN: public Sfr
{
  public:
    void OnWrite(std::uint8_t data);
    std::uint8_t Read();
};

void SfrP1MDIN::OnWrite(std::uint8_t data)
{
  std::cout << "P1MDIN write " << (int) data << std::endl;
}

std::uint8_t SfrP1MDIN::Read()
{
  std::cout << "P1MDIN read" << std::endl;
  return 0;
}

class SfrP1MDOUT: public Sfr
{
  public:
    void OnWrite(std::uint8_t data);
    std::uint8_t Read();
};

void SfrP1MDOUT::OnWrite(std::uint8_t data)
{
  std::cout << "P1MDOUT write " << (int) data << std::endl;
}

std::uint8_t SfrP1MDOUT::Read()
{
  std::cout << "P1MDOUT read" << std::endl;
  return 0;
}

Port1::Port1(Alu &a) : Port(a)
{
  a.RegisterSfr(0xf2, new SfrP1MDIN());
  a.RegisterSfr(0xa5, new SfrP1MDOUT());
  a.RegisterSfr(0x90, new SfrP1());
  a.RegisterSfr(0xd5, new SfrP1SKIP());
}

