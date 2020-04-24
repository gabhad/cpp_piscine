#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:

public:
    FragTrap(std::string name);
    FragTrap(void);
    FragTrap(FragTrap const & src);
    ~FragTrap();

    void            vaulthunter_dot_exe(std::string const & target);

    FragTrap        &operator=(FragTrap const & rhs);
};

std::ostream        &operator<<(std::ostream & o, FragTrap const & src);

#endif