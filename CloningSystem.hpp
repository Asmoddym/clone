//
// CloningSystem.hpp for clone in /home/sylvain/Documents/projets/perso/C/clone
//
// Made by Sylvain Chaugny
// Login   <sylvain.chaugny@epitech.eu>
//
// Started on  Tue Oct 10 19:05:03 2017 Sylvain Chaugny
// Last update Tue Oct 10 19:10:59 2017 Sylvain Chaugny
//

#ifndef CLONE_CLONINGSYSTEM_HPP_
# define CLONE_CLONINGSYSTEM_HPP_

# include <map>
# include <string>

class					CloningSystem
{
private:

  std::map<std::string, std::string>	_args;

  int					parseArgs(int ac, char **av);

  void					usage(std::string const &name);
  void					error(std::string const &str);

public:

  CloningSystem();
  virtual	~CloningSystem();

  int					clone(int ac, char **av);
};

#endif /* !CLONE_CLONINGSYSTEM_HPP_ */