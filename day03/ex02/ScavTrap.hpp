#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:

public:
    ScavTrap(std::string name);
    ScavTrap(void);
    ScavTrap(ScavTrap const & src);
    ~ScavTrap();

    void            challengeNewcomer(void);

    ScavTrap        &operator=(ScavTrap const & rhs);
};

std::ostream        &operator<<(std::ostream & o, ScavTrap const & src);


#endif