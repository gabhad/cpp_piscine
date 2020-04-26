#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
private:
    
public:
    SuperTrap(std::string name);
    SuperTrap(void);
    SuperTrap(SuperTrap const &c);
    ~SuperTrap();

    int         getHitPoints(void) const;
    int         getEnergyPoints(void) const;

    SuperTrap   &operator=(SuperTrap const & rhs);
};

std::ostream    &operator<<(std::ostream & o, SuperTrap const & src);

#endif