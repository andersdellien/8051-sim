#ifndef _FLASH_HPP
#define _FLASH_HPP

#include <string>
#include <cstdint>
#include "memory.hpp"

class Flash : public Memory
{
  public:
    Flash(std::uint16_t s);
    void ParseHex(std::string fileName);
};

#endif


