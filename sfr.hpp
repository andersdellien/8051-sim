#ifndef _SFR_HPP
#define _SFR_HPP

#include <cstdint>

class Sfr
{
  public:
    virtual void OnWrite(std::uint8_t data) = 0;
    virtual std::uint8_t Read() = 0;
};

#endif

