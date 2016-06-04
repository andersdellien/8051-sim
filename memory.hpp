#ifndef _MEMORY_HPP
#define _MEMORY_HPP

#include <cstdint>

class Memory
{
    std::uint16_t size;
    std::uint8_t *data;
  public:
    Memory(std::uint16_t size);
    std::uint8_t Get(std::uint16_t address) const;
    void Set(std::uint16_t address, std::uint8_t value);
};

#endif
