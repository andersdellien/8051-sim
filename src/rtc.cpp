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

#include <iostream>
#include <cstdint>
#include <set>
#include <string>
#include "alu.hpp"
#include "block.hpp"
#include "rtc.hpp"
#include "sfr.hpp"

// Internal RTC registers
constexpr std::uint8_t CAPTURE0 = 0x00;
constexpr std::uint8_t CAPTURE1 = 0x01;
constexpr std::uint8_t CAPTURE2 = 0x02;
constexpr std::uint8_t CAPTURE3 = 0x03;
constexpr std::uint8_t ALARM0 = 0x08;
constexpr std::uint8_t ALARM1 = 0x09;
constexpr std::uint8_t ALARM2 = 0x0A;
constexpr std::uint8_t ALARM3 = 0x0B;
constexpr std::uint8_t RTC0CN = 0x04;
constexpr std::uint8_t RTC0XCN = 0x05;
constexpr std::uint8_t RTC0XCF = 0x06;

// RTC register bits
constexpr std::uint8_t RTC0AEN = 0x08;
constexpr std::uint8_t ALRM = 0x04;

RTC0DAT::RTC0DAT(std::string name, Block &block, std::uint8_t address, std::uint8_t resetValue, std::set<std::uint8_t> pages):
  Sfr(name, block, address, resetValue, pages)
{
}

void RTC0DAT::Write(std::uint8_t value)
{
  Rtc *rtc = dynamic_cast<Rtc*>(&block);
  std::uint8_t reg = rtc->rtc0adr.data & 0xf;

  if (reg == RTC0CN)
  {
    rtc->rtc0cn = value;
    if (value & RTC0AEN)
    {
      rtc->remainingTicks = rtc->CalculateRemainingTicks();
      rtc->ReportActive();
    }
  }
  else if (reg == RTC0XCN)
  {
    rtc->rtc0xcn = value;
  }
  else if (reg == ALARM0)
  {
    rtc->alarm |= value;
    rtc->remainingTicks = rtc->CalculateRemainingTicks();
    rtc->ReportActive();
  }
  else if (reg == ALARM1)
  {
    rtc->alarm |= (value << 8);
    rtc->remainingTicks = rtc->CalculateRemainingTicks();
    rtc->ReportActive();
  }
  else if (reg == ALARM2)
  {
    rtc->alarm |= (value << 16);
    rtc->remainingTicks = rtc->CalculateRemainingTicks();
    rtc->ReportActive();
  }
  else if (reg == ALARM3)
  {
    rtc->alarm |= (value << 24);
    rtc->remainingTicks = rtc->CalculateRemainingTicks();
    rtc->ReportActive();
  }
  else if (reg == CAPTURE0 || reg == CAPTURE1 || reg == CAPTURE2 || reg == CAPTURE3 || reg == RTC0XCF)
  {
    // Functionality controlled by these registers is currently not simulated, ignore them for now
  }
  else
  {
    std::cout << "Invalid RTC register " << (int) reg << std::endl;
  }
  rtc->rtc0adr.data++;
}

Rtc::Rtc(std::string name, Scheduler &s, Alu &a) :
  Block(name, s, a),
  rtc0adr("RTC0ADR", *this, 0xac, 0x00, {0x0}),
  rtc0dat("RTC0DAT", *this, 0xad, 0x00, {0x0}),
  rtc0key("RTC0KEY", *this, 0xae, 0x00, {0x0}),
  alarm(0),
  rtc0cn(0)
{
}

int Rtc::CalculateRemainingTicks()
{
  int ticks;

  if (rtc0cn & RTC0AEN)
  {
    ticks = (24500000 / 4) * (alarm / 32768); // Assumption: Precision oscillator divided by 4.
  }
  else
  {
    ticks = -1;
  }

  return ticks;
}

void Rtc::ClockEvent()
{
  alu.RTCWakeup();
  if (!rtc0cn & ALRM)
  {
    rtc0cn &= ~RTC0AEN;
  }
  remainingTicks = CalculateRemainingTicks();
}
