#ifndef _UC_HPP
#define _UC_HPP

#include <cstdint>

class UcCallbacks
{
  public:
    virtual void OnInstructionExecuted() = 0;
    virtual bool OnGPIORead(std::uint8_t port, std::uint8_t pin) = 0;
    virtual void OnGPIOWrite(std::uint8_t port, std::uint8_t pin, bool value) = 0;
};

#endif

