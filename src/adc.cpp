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
#include "adc.hpp"
#include "sfr.hpp"
#include "alu.hpp"

Adc::Adc(std::string name, Scheduler &s, Alu &a):
    Block(name, s, a),
    toffh("TOFFH", *this, 0x8e, 0x17, {0xf}), // Need to find reasonable reset value from an actual 8051
    toffl("TOFFL", *this, 0x8d, 0x37, {0xf}), // Need to find reasonable reset value from an actual 8051
    adc0cf("ADC0CF", *this, 0x97, 0xf8, {0x0}),
    adc0pwr("ADC0PWR", *this, 0xbb, 0x0f, {0x0, 0xf}),
    adc0ac("ADC0AC", *this, 0xba, 0x00, {0x0})
{
}
