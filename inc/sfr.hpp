#ifndef _SFR_HPP
#define _SFR_HPP

#include <cstdint>
#include <string>

class Alu;

class Sfr
{
  public:
    Sfr(std::string name, Alu *alu, std::uint8_t address);
    Sfr(std::string name, Alu *alu, std::uint8_t address, std::uint8_t resetValue);
    virtual void Write(std::uint8_t data);
    virtual std::uint8_t Read();
    virtual void Reset();
    std::uint8_t data;
    std::string GetName() const;
    std::uint8_t address;
  protected:
    std::string name;
    Alu *alu;
    std::uint8_t resetValue;
};

class SfrBitAddressable: public Sfr
{
  public:
    SfrBitAddressable(std::string name, Alu *alu, std::uint8_t address);
    SfrBitAddressable(std::string name, Alu *alu, std::uint8_t address, std::uint8_t resetValue);
    virtual void WriteBit(std::uint8_t bit, bool value);
    virtual bool ReadBit(std::uint8_t bit);
};

#endif

