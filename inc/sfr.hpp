#ifndef _SFR_HPP
#define _SFR_HPP

#include <set>
#include <cstdint>
#include <string>

class Block;

class Sfr
{
  public:
    Sfr(std::string name, Block &block, std::uint8_t address, std::uint8_t resetValue, std::set<std::uint8_t> pages);
    virtual void Write(std::uint8_t data);
    virtual std::uint8_t Read();
    virtual void Reset();
    std::uint8_t data;
    std::string GetName() const;
    std::uint8_t address;
    std::set<std::uint8_t> pages;
  protected:
    std::string name;
    Block &block;
    std::uint8_t resetValue;
};

class SfrBitAddressable: public Sfr
{
  public:
    SfrBitAddressable(std::string name, Block &block, std::uint8_t address, std::uint8_t resetValue, std::set<std::uint8_t> pages);
    virtual void WriteBit(std::uint8_t bit, bool value);
    virtual bool ReadBit(std::uint8_t bit);
};

#endif
