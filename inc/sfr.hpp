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
  protected:
    std::string name;
    Alu &alu;
    std::uint8_t address;
};

class SfrBitAddressable: public Sfr
{
  public:
    SfrBitAddressable(std::string name, Alu &alu, std::uint8_t address);
    virtual void WriteBit(std::uint8_t bit, bool value);
    virtual bool ReadBit(std::uint8_t bit);
};

#endif

