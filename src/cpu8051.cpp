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

#include "cpu8051.hpp"

Cpu8051::Cpu8051() :
  alu("Alu", 1024, 256, 8192),
  port0("Port0", alu),
  port1("Port1", alu),
  port2("Port2", alu),
  pca("Pca", alu),
  system("System", alu),
  uart("Uart", alu),
  adc("Adc", alu),
  timer("Timer", alu),
  ticks(0)
{
  blocks.push_back(&alu);
  blocks.push_back(&port0);
  blocks.push_back(&port1);
  blocks.push_back(&port2);
  blocks.push_back(&pca);
  blocks.push_back(&system);
  blocks.push_back(&uart);
  blocks.push_back(&adc);
  blocks.push_back(&timer);
  for (int i = 0; i < NumBreakpoints; i++)
  {
    breakpoints[i] = -1;
  }
}

int Cpu8051::GetTicks()
{
  return ticks;
}

void Cpu8051::Reset()
{
  for (std::vector<Block*>::iterator i = blocks.begin(); i != blocks.end(); i++)
  {
    (*i)->Reset();
  }
}

void Cpu8051::InjectEvent(int deltaTicks, char c)
{
  externalEvents.push(std::make_pair(ticks + deltaTicks, c));
}

void Cpu8051::Tick()
{
  int smallestTick = std::numeric_limits<int>::max();
  for (int i = 0; i < blocks.size(); i++)
  {
    int tick = blocks[i]->GetRemainingTicks();
    if (tick < smallestTick)
    {
      smallestTick = tick;
    }
  }

  if (externalEvents.size() == 0 && (smallestTick == 0 || smallestTick == std::numeric_limits<int>::max()))
  {
    std::cout << "No upcoming event " << alu.GetPC() << std::endl;
    throw new std::runtime_error("No next event");
  }
  bool hasExternalEvent = false;
  ExternalEvent event;
  if (externalEvents.size())
  {
    if (externalEvents.top().first - ticks < smallestTick)
    {
      event = externalEvents.top();
      externalEvents.pop();
      hasExternalEvent = true;
      smallestTick = event.first - ticks;
    }
  }
  for (int i = 0; i < blocks.size(); i++)
  {
    blocks[i]->Tick(smallestTick);
  }
  ticks += smallestTick;
  if (hasExternalEvent)
  {
    std::cout << "Injecting " << event.second << std::endl;
    uart.SimulateRx(event.second);
  }
}
