#include "alu.hpp"
#include "port.hpp"
#include "block.hpp"

Port::Port(std::string name, Alu &a): Block(name, a)
{
}
