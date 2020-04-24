#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>

class FragTrap
{
private:
    unsigned int    _hitPoints;
    unsigned int    _maxHitPoints;
    unsigned int    _energyPoints;
    unsigned int    _maxEnergyPoints;
    unsigned int    _level;
    std::string     _name;
    unsigned int    _meleeAttackDamage;
    unsigned int    _rangedAttackDamage;
    unsigned int    _armorDamageReduction;

public:
    FragTrap(std::string name);
    FragTrap(void);
    FragTrap(FragTrap const & src);
    ~FragTrap();

    void            rangedAttack(std::string const & target);
    void            meleeAttack(std::string const & target);
    void            takeDamage(unsigned int amount);
    void            beRepaired(unsigned int amount);

    std::string     getName(void) const;

    void            vaulthunter_dot_exe(std::string const & target);

    FragTrap        &operator=(FragTrap const & rhs);
};

std::ostream        &operator<<(std::ostream & o, FragTrap const & src);

#endif