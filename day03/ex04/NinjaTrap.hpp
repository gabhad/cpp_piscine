#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
private:

protected:
    static int  defEnergyPoint;
    static int  defMaxEnergyPoint;
    static int  defMeleeAttackDamage;

public:
    NinjaTrap(std::string name);
    NinjaTrap(void);
    NinjaTrap(NinjaTrap const & src);
    ~NinjaTrap();

    void            meleeAttack(std::string const & target);

    void            ninjaShoebox(ClapTrap const & target);
    void            ninjaShoebox(FragTrap const & target);
    void            ninjaShoebox(ScavTrap const & target);
    void            ninjaShoebox(NinjaTrap const & target);

    NinjaTrap       &operator=(NinjaTrap const & rhs);
};

std::ostream        &operator<<(std::ostream & o, NinjaTrap const & src);


#endif