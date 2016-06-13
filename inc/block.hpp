#ifndef _BLOCK_HPP
#define _BLOCK_HPP

#include <string>
#include <map>
#include "sfr.hpp"

/*
 * "Block" is an abstract superclass describing the commonalities of
 * the different functional blocks in the system. Each block can be reset,
 * can be clocked, and has a number of Special Function Registers.
 */

class Alu;

class Block
{
  public:
    Block(Alu *alu);
    virtual void Reset();
    virtual void Tick();
  private:
    std::map<std::string, Sfr*> SfrRegisters;
    Alu *alu;
};

#endif

