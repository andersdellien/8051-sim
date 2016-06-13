#ifndef _MEMORY_HPP
#define _MEMORY_HPP

#include <cstdint>
#include "block.hpp"

class Alu;

class Memory: public Block
{
    std::uint16_t size;
    std::uint8_t *data;
  public:
    Memory(Alu *alu, std::uint16_t size);
    std::uint8_t Get(std::uint16_t address) const;
    void Set(std::uint16_t address, std::uint8_t value);
};

#endif
