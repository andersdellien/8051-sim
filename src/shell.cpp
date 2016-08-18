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

#include "command.hpp"
#include "shell.hpp"
#include "trie.hpp"
#include <locale.h>
#include <ncurses.h>
#include <string>
#include <vector>

Parameter::Parameter(std::string s) : type(ParameterType::String), string(s)
{
}

Parameter::Parameter(int n) : type(ParameterType::Numeric), number(n)
{
}

CommandInfo::CommandInfo(std::string c, CommandCallback *ca, std::vector<ParameterType> p):
  command(c), callback(ca), parameterTypes(p)
{
}

void Shell::RegisterCommand(std::string command, CommandCallback *callback, std::vector<ParameterType> parameters)
{
  trie.AddString(command);
  callbacks.push_back(new CommandInfo(command, callback, parameters));
}

void Shell::RegisterCommand(std::string command, CommandCallback *callback)
{
  return RegisterCommand(command, callback, {});
}

void Shell::CommandLoop()
{
  std::vector<Parameter*> parameters;
  std::string command; // Matching prefix of a command
  bool charMatch; // True if the previous character matched a command
  bool stringMatch; // True if we have matched an entire string
  int noMatchCount; // Number of non-matching characters
  int parameterCount;

  // ncurses initialization
  setlocale(LC_ALL, "");
  initscr();
  cbreak();
  noecho();
  nonl();
  intrflush(stdscr, FALSE);
  keypad(stdscr, TRUE);
  idlok(stdscr, TRUE);
  scrollok(stdscr, TRUE);

  cpu.Reset();
  printw("Welcome to 8051-sim\n");

  while (1)
  {
    int c;
    parameters = {};
    trie.Reset();
    charMatch = true;
    noMatchCount = 0;
    stringMatch = false;
    parameterCount = 0;
    command = "";

    printw("$ ");

    while (!stringMatch)
    {
      c = getch();

      if (c == KEY_BACKSPACE || c == KEY_DC || c == 127)
      {
        if (command.length())
        {
          int x = -1, y = -1;
          getsyx(y, x);
          if (x >= 0 && y >= 0)
          {
            move(y, x - 1);
          }
          delch();
          refresh();

          // If we have some characters that don't match, remove them without affecting the trie state
          if (noMatchCount)
          {
            noMatchCount--;
            if (noMatchCount == 0)
            {
              charMatch = true;
            }
          }
          else
          {
            trie.RemoveChar();
            command = command.substr(0, command.length() - 1);
          }
        }
      }
      else if (c == '\t')
      {
        if (charMatch)
        {
          std::string s = trie.Traverse();

          command += s;
          printw(s.c_str());
          if (trie.IsString())
          {
            stringMatch = true;
          }
        }
      }
      else
      {
        printw("%c",c);
        if (charMatch)
        {
          bool b = trie.AddChar(c);
          if (b)
          {
            command += c;
            if (trie.IsString())
            {
              stringMatch = true;
            }
          }
          else
          {
            charMatch = false;
            noMatchCount = 1;
          }
        }
        else
        {
          noMatchCount++;
        }
      }
    }

    int index;
    for (index = 0; index < callbacks.size(); index++)
    {
      if (!command.compare(callbacks[index]->command))
      {
        break;
      }
    }

    std::string parameter;

    if (callbacks[index]->parameterTypes.size())
    {
      printw(" ");
    }

    while (1)
    {
      c = getch();
      if (c == 127)
      {
        if (parameter.length())
        {
          int x = -1, y = -1;
          getsyx(y, x);
          if (x >= 0 && y >= 0)
          {
            move(y, x - 1);
          }
          delch();
          refresh();
          parameter = parameter.substr(0, parameter.length() - 1);
        }
      }
      else if ((c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F') || (c >= '0' && c <= '9'))
      {
        printw("%c",c);
        parameter += c;
      }
      else if (c == ' ' || c == '\r')
      {
        if (parameter.length() && callbacks[index]->parameterTypes.size())
        {
          if (callbacks[index]->parameterTypes[parameterCount] == ParameterType::String)
          {
            parameters.push_back(new Parameter(parameter));
          }     
          else
          {
            parameters.push_back(new Parameter(stoi(parameter, nullptr, 16)));
          }

          parameterCount++;
        }

        if (c == ' ')
        {
          printw(" ");
          parameter = "";
        }
        else if (c == '\r' && parameterCount == callbacks[index]->parameterTypes.size())
        {
          break;
        }
      }
      else if (c != '\t' && callbacks[index]->parameterTypes.size() && callbacks[index]->parameterTypes[parameterCount] == ParameterType::String)
      {
        printw("%c",c);
        parameter += c;
      }      
    }
    printw("\n");
    callbacks[index]->callback->OnCommand(cpu, command, parameters);
  }
  endwin();
}
