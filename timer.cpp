#include <iostream>
#include "timer.hpp"
#include "sfr.hpp"

class SfrCKCON: public Sfr
{
  public:
    void OnWrite(std::uint8_t data);
    std::uint8_t Read();
};

void SfrCKCON::OnWrite(std::uint8_t data)
{
  std::cout << "CKCON write " << (int) data << std::endl;
}

std::uint8_t SfrCKCON::Read()
{
  std::cout << "CKCON read" << std::endl;
  return 0;
}

class SfrTCON: public Sfr
{
  public:
    void OnWrite(std::uint8_t data);
    std::uint8_t Read();
};

void SfrTCON::OnWrite(std::uint8_t data)
{
  std::cout << "TCON write " << (int) data << std::endl;
}

std::uint8_t SfrTCON::Read()
{
  std::cout << "TCON read" << std::endl;
  return 0;
}

class SfrTMOD: public Sfr
{
  public:
    void OnWrite(std::uint8_t data);
    std::uint8_t Read();
};

void SfrTMOD::OnWrite(std::uint8_t data)
{
  std::cout << "TMOD write " << (int) data << std::endl;
}

std::uint8_t SfrTMOD::Read()
{
  std::cout << "TMOD read" << std::endl;
  return 0;
}

class SfrTH1: public Sfr
{
  public:
    void OnWrite(std::uint8_t data);
    std::uint8_t Read();
};

void SfrTH1::OnWrite(std::uint8_t data)
{
  std::cout << "TH1 write " << (int) data << std::endl;
}

std::uint8_t SfrTH1::Read()
{
  std::cout << "TH1 read" << std::endl;
  return 0;
}

class SfrTL1: public Sfr
{
  public:
    void OnWrite(std::uint8_t data);
    std::uint8_t Read();
};

void SfrTL1::OnWrite(std::uint8_t data)
{
  std::cout << "TL1 write " << (int) data << std::endl;
}

std::uint8_t SfrTL1::Read()
{
  std::cout << "TL1 read" << std::endl;
  return 0;
}

class SfrTH0: public Sfr
{
  public:
    void OnWrite(std::uint8_t data);
    std::uint8_t Read();
};

void SfrTH0::OnWrite(std::uint8_t data)
{
  std::cout << "TH0 write " << (int) data << std::endl;
}

std::uint8_t SfrTH0::Read()
{
  std::cout << "TH0 read" << std::endl;
  return 0;
}

class SfrTL0: public Sfr
{
  public:
    void OnWrite(std::uint8_t data);
    std::uint8_t Read();
};

void SfrTL0::OnWrite(std::uint8_t data)
{
  std::cout << "TL0 write " << (int) data << std::endl;
}

std::uint8_t SfrTL0::Read()
{
  std::cout << "TL0 read" << std::endl;
  return 0;
}

Timer::Timer(Alu &a)
{
  a.RegisterSfr(0x8e, new SfrCKCON());
  a.RegisterSfr(0x8d, new SfrTH1());
  a.RegisterSfr(0x8c, new SfrTH0());
  a.RegisterSfr(0x8b, new SfrTL1());
  a.RegisterSfr(0x8a, new SfrTL0());
  a.RegisterSfr(0x89, new SfrTMOD());
  a.RegisterSfr(0x88, new SfrTCON());
}

