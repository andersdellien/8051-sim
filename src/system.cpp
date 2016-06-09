#include <iostream>
#include "system.hpp"
#include "sfr.hpp"

class SfrRSTSRC: public Sfr
{
  public:
    void OnWrite(std::uint8_t data);
    std::uint8_t Read();
};

void SfrRSTSRC::OnWrite(std::uint8_t data)
{
  std::cout << "RSTSRC write " << (int) data << std::endl;
}

std::uint8_t SfrRSTSRC::Read()
{
  std::cout << "RSTSRC read" << std::endl;
  return 0;
}

class SfrCLKSEL: public Sfr
{
  public:
    void OnWrite(std::uint8_t data);
    std::uint8_t Read();
};

void SfrCLKSEL::OnWrite(std::uint8_t data)
{
  std::cout << "CLKSEL write " << (int) data << std::endl;
}

std::uint8_t SfrCLKSEL::Read()
{
  std::cout << "CLKSEL read" << std::endl;
  return 0;
}

class SfrOSCICN: public Sfr
{
  public:
    void OnWrite(std::uint8_t data);
    std::uint8_t Read();
};

void SfrOSCICN::OnWrite(std::uint8_t data)
{
  std::cout << "OSCICN write " << (int) data << std::endl;
}

std::uint8_t SfrOSCICN::Read()
{
  std::cout << "OSCICN read" << std::endl;
  return 0;
}

class SfrREF0CN: public Sfr
{
  public:
    void OnWrite(std::uint8_t data);
    std::uint8_t Read();
};

void SfrREF0CN::OnWrite(std::uint8_t data)
{
  std::cout << "REF0CN write " << (int) data << std::endl;
}

std::uint8_t SfrREF0CN::Read()
{
  std::cout << "REF0CN read" << std::endl;
  return 0;
}

System::System(Alu &a)
{
  a.RegisterSfr(0xa9, new SfrCLKSEL());
  a.RegisterSfr(0xb2, new SfrOSCICN());
  a.RegisterSfr(0xef, new SfrRSTSRC());
  a.RegisterSfr(0xd1, new SfrRSTSRC());
}

