#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
private:
    SuperTrap(void);
public:
    SuperTrap(std::string name);
    SuperTrap(SuperTrap const &c);
    ~SuperTrap();

    int         getHitPoints(void) const;
    int         getEnergyPoints(void) const;

    SuperTrap   &operator=(SuperTrap const & rhs);
};

std::ostream    &operator<<(std::ostream & o, SuperTrap const & src);

#endif