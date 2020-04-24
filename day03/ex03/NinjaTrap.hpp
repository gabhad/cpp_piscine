#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : public ClapTrap
{
private:

public:
    NinjaTrap(std::string name);
    NinjaTrap(void);
    NinjaTrap(NinjaTrap const & src);
    ~NinjaTrap();

    void            ninjaShoebox(ClapTrap const & target);
    void            ninjaShoebox(FragTrap const & target);
    void            ninjaShoebox(ScavTrap const & target);
    void            ninjaShoebox(NinjaTrap const & target);


    NinjaTrap       &operator=(NinjaTrap const & rhs);
};

std::ostream        &operator<<(std::ostream & o, NinjaTrap const & src);


#endif