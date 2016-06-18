#include "command.hpp"

std::set<Command*> Command::commands;

Command::Command(std::string command)
{
  std::cout << "Registering command " << command << std::endl;
  cmd = command;
  commands.insert(this);
}

Command* Command::findCommand(std::string command)
{
  for (std::set<Command*>::iterator i = commands.begin(); i != commands.end(); i++)
  {
    if ((*i)->cmd == command)
    {
        std::cout << "command found" << std::endl;
        return (*i);
    }
  }
  return nullptr;
}

BlockCommand::BlockCommand() : Command("block") {}

int BlockCommand::executeCommand(CommandHandler& handler) {
  for (std::set<Block*>::iterator i = handler.blocks.begin(); i != handler.blocks.end(); i++)
  {
    int t = (*i)->GetRemainingTicks();
    std::cout << (*i)->GetName();
    if (t < std::numeric_limits<int>::max())
    {
      std::cout << " " << (*i)->GetRemainingTicks() << std::endl;
    }
    else
    {
      std::cout << " idle" << std::endl;
    }
  }

  return 0;
}
