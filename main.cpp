#include "flash.hpp"

int main(int argc, char **argv)
{
  Flash flash(8192);

  flash.ParseHex("magneto.hex");
}
