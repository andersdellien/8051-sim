#include <iostream>
#include "port0.hpp"
#include "sfr.hpp"

class SfrXBR0: public Sfr
{
  public:
    void OnWrite(std::uint8_t data);
    std::uint8_t Read();
};

void SfrXBR0::OnWrite(std::uint8_t data)
{
  std::cout << "XBR0 write " << (int) data << std::endl;
}

std::uint8_t SfrXBR0::Read()
{
  std::cout << "XBR0 read" << std::endl;
  return 0;
}

class SfrP0SKIP: public Sfr
{
  public:
    void OnWrite(std::uint8_t data);
    std::uint8_t Read();
};

void SfrP0SKIP::OnWrite(std::uint8_t data)
{
  std::cout << "P0SKIP write " << (int) data << std::endl;
}

std::uint8_t SfrP0SKIP::Read()
{
  std::cout << "P0SKIP read" << std::endl;
  return 0;
}

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

class SfrP0: public Sfr
{
  public:
    void OnWrite(std::uint8_t data);
    std::uint8_t Read();
};

void SfrP0::OnWrite(std::uint8_t data)
{
  std::cout << "P0 write " << (int) data << std::endl;
}

std::uint8_t SfrP0::Read()
{
  std::cout << "P0 read" << std::endl;
  return 0;
}

class SfrP0MDOUT: public Sfr
{
  public:
    void OnWrite(std::uint8_t data);
    std::uint8_t Read();
};

void SfrP0MDOUT::OnWrite(std::uint8_t data)
{
  std::cout << "P0MDOUT write " << (int) data << std::endl;
}

std::uint8_t SfrP0MDOUT::Read()
{
  std::cout << "P0MDOUT read" << std::endl;
  return 0;
}

Port0::Port0(Alu &a) : Port(a)
{
  a.RegisterSfr(0xf1, new SfrP0MDIN());
  a.RegisterSfr(0xa4, new SfrP0MDOUT());
  a.RegisterSfr(0x80, new SfrP0());
  a.RegisterSfr(0xd4, new SfrP0SKIP());
  a.RegisterSfr(0xe1, new SfrXBR0());
}

