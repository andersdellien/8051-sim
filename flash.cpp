#include <string>
#include <cstdint>
#include <fstream>
#include <iostream>
#include "flash.hpp"
#include "exceptions.hpp"

typedef enum
{
  Data,
  Eof,
  ExtendedSegmentAddress,
  StartSegmentAddress,
  ExtendedLinearAddress,
  StartLinearAddress
} RecordType;

Flash::Flash(std::uint16_t s) : Memory(s)
{
}

void Flash::ParseHex(std::string fileName)
{
  std::ifstream file;
  std::string line;
  std::uint32_t addressOffset = 0;
  file.open(fileName);
  while (std::getline(file, line))
  {
    if (line[0] != ':')
    {
      throw new InvalidHexFileException();
    }
    int count = std::stoi(line.substr(1,2), nullptr, 16);
    int address = std::stoi(line.substr(3,4), nullptr, 16);
    int type = std::stoi(line.substr(7,2), nullptr, 16);
    std::string data = line.substr(9, 2 * count);
    int checkSum = std::stoi(line.substr(line.length() - 2, 2), nullptr, 16);

    if (type == Data)
    {
      for (int i = 0; i < data.length(); i += 2)
      {
        Set(addressOffset + address + i / 2, stoi(data.substr(i, 2), nullptr, 16));
      }
    }
    else if (type == Eof)
    {
      // Ignored
    }
    else if (type == ExtendedSegmentAddress)
    {
      addressOffset = address << 4;
    }
    else if (type == StartSegmentAddress)
    {
      // Ignored
    }
    else if (type == ExtendedLinearAddress)
    {
      addressOffset = address << 16;
    }
    else if (type == StartLinearAddress)
    {
      // Ignored
    }
    else
    {
      throw new InvalidHexFileException();
    }
  }
}
