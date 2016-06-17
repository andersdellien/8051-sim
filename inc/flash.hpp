#ifndef _FLASH_HPP
#define _FLASH_HPP

#include <string>
#include <cstdint>
#include "memory.hpp"

class Alu;

class Flash : public Memory
{
  public:
    Flash(std::string name, Alu &alu, std::uint16_t s);
    void ParseHex(std::string fileName);
  private:
    Sfr flscl;
    Sfr flkey;
    Sfr flwr;
};

#endif
