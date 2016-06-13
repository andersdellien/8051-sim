#ifndef _FLASH_HPP
#define _FLASH_HPP

#include <string>
#include <cstdint>
#include "memory.hpp"

class Alu;

class Flash : public Memory
{
  public:
    Flash(Alu *alu, std::uint16_t s);
    void ParseHex(std::string fileName);
};

#endif


