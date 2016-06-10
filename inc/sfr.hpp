#ifndef _SFR_HPP
#define _SFR_HPP

#include <cstdint>
#include <string>

class Alu;

class Sfr
{
  public:
    Sfr(std::string name, Alu &alu, std::uint8_t address);
    virtual void Write(std::uint8_t data);
    virtual std::uint8_t Read();
    std::uint8_t data;
  private:
    std::string name;
    Alu &alu;
    std::uint8_t address;
};

#endif

