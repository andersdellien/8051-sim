/*
 * Copyright (C) 2016 Sensative AB
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#include <string>
#include <cstdint>
#include <fstream>
#include <ncurses.h>
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

Flash::Flash(std::string name, std::uint16_t size) : Memory(name, size)
{
}

void Flash::ParseHex(std::string fileName)
{
  std::ifstream file;
  std::string line;
  std::uint32_t addressOffset = 0;
  int byteCount = 0;
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

    (void) checkSum;
    if (type == Data)
    {
      for (int i = 0; i < data.length(); i += 2)
      {
        byteCount++;
        Write(addressOffset + address + i / 2, stoi(data.substr(i, 2), nullptr, 16));
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
  printw("Read %d bytes from %s\n", byteCount, fileName.c_str());
}
