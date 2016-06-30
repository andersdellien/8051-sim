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
#include <list>
#include <string>

#include "instruction_coverage.hpp"
#include "cpu8051.hpp"
#include "symbol_table.hpp"
#include "test.hpp"

TestCase::TestCase(std::string s) : name(s)
{
}

void TestCase::OnInstructionExecuted(Cpu8051 &handler)
{
  if (handler.alu.flash.Read(handler.alu.GetPC()) == 0x12)
  {
    std::cout << std::dec << handler.GetTicks() << " " << std::hex << std::setw(4) << std::setfill('0') << handler.alu.GetPC();
    std::cout << " " << handler.alu.Disassemble(handler.alu.GetPC()) << std::endl;
  }
}

std::string TestCase::GetName()
{
  return name;
}

TestSuite::TestSuite(std::string h, std::string s) : hexFile(h), symFile(s)
{
}

void TestSuite::Add(TestCase &t)
{
  tests.push_back(&t);
}

void TestSuite::Run()
{
  cpu.alu.flash.ParseHex(hexFile);
  SymbolTable::GetInstance()->ParseFile(symFile);
  InstructionCoverage::GetInstance()->Initialize(cpu.alu);

  std::list<TestCase*>::iterator i;

  for (i = tests.begin(); i != tests.end(); i++)
  {
    cpu.Reset();
    cpu.alu.RegisterCallback(*i, &cpu);
    if ((*i)->Run(cpu))
    {
      std::cout << (*i)->GetName() << " passed" << std::endl;
    }
    else
    {
      std::cout << (*i)->GetName() << " failed" << std::endl;
    }
    int total, executed;
    InstructionCoverage::GetInstance()->GetCoverage(total, executed);
    std::cout << std::dec << "Total: " << total << " executed: " << executed << " percentage: " << std::setw(2) <<  (100.0*executed) / total << std::endl; 
  }
}

