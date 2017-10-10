//
// CloningSystem.cpp for clone in /home/sylvain/Documents/projets/perso/C/clone
//
// Made by Sylvain Chaugny
// Login   <sylvain.chaugny@epitech.eu>
//
// Started on  Tue Oct 10 19:11:12 2017 Sylvain Chaugny
// Last update Tue Oct 10 20:13:46 2017 Sylvain Chaugny
//

#include		<iostream>
#include		"CloningSystem.hpp"

CloningSystem::CloningSystem()
{
}

CloningSystem::~CloningSystem()
{
}

int			CloningSystem::parseArgs(int ac, char **av)
{
  bool			is_git;

  is_git = std::string(av[ac == 1 ? 0 : 1]) == "-g";
  if ((is_git && ac != 4) || (!is_git && ac != 3))
  {
    error("Wrong parameters");
    usage(av[0]);
    return 1;
  }
  _args["login"] = std::string(av[ac == 4 ? 2 : 1]);
  _args["repo"] = std::string(av[ac == 4 ? 3 : 2]);
  _args["git"] = is_git ? "true" : "false";
  return 0;
}

int			CloningSystem::clone(int ac, char **av)
{
  std::string		cmd;

  if (parseArgs(ac, av))
    return 1;
  cmd = std::string("git clone ")
	+ (_args["git"] == "true" ? "https://www.github.com/" : "git@git.epitech.eu:/")
	+ _args["login"] + "/" + _args["repo"];
  return system(cmd.c_str());
}

void			CloningSystem::usage(std::string const &name)
{
  std::cout << "Usage: " << name << " [--git] " << "[LOGIN] [REPO]" << std::endl;
}

void			CloningSystem::error(std::string const &str)
{
  std::cerr << "[ERROR] " << str << std::endl;
}
