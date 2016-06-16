#ifndef _BLOCK_HPP
#define _BLOCK_HPP

#include <string>
#include <map>
#include "sfr.hpp"

/*
 * "Block" is a superclass describing the commonalities of the various functional blocks in the system.
 * Each block can be reset, can be clocked, and has a number of Special Function Registers.
 * Blocks also report the number of ticks remaining to their next scheduled action.
 * The "ClockEvent" operation is called at the appropriate time to perform the scheduled actions.
 */

class Alu;

class Block
{
  public:
    Block(Alu &alu);
    virtual void Reset();
    void Tick(int ticks);
    void RegisterSfr(Sfr *sfr);
    int GetRemainingTicks();
    void ConfigurationChanged();
    Alu &alu;
  protected:
    std::map<std::string, Sfr*> sfrRegisters;
    int remainingTicks;
    virtual int CalculateRemainingTicks();
    virtual void ClockEvent();
  public:
    bool configurationChanged;
};

#endif
