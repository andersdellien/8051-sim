#include "block.hpp"

class Alu;

Block::Block(Alu *a) : alu(a)
{
}

void Block::Tick()
{
}

void Block::Reset()
{
}
