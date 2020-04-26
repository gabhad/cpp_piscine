#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:

protected:
    static int  defHitPoints;
    static int  defMaxHitPoints;
    static int  defRangedAttackDamage;
    static int  defArmorDamageReduction;

public:
    FragTrap(std::string name);
    FragTrap(void);
    FragTrap(FragTrap const & src);
    ~FragTrap();

    void            rangedAttack(std::string const & target);

    void            vaulthunter_dot_exe(std::string const & target);

    FragTrap        &operator=(FragTrap const & rhs);
};

std::ostream        &operator<<(std::ostream & o, FragTrap const & src);

#endif