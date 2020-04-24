#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>

class ScavTrap
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
    ScavTrap(std::string name);
    ScavTrap(void);
    ScavTrap(ScavTrap const & src);
    ~ScavTrap();

    void            rangedAttack(std::string const & target);
    void            meleeAttack(std::string const & target);
    void            takeDamage(unsigned int amount);
    void            beRepaired(unsigned int amount);

    std::string     getName(void) const;

    void            challengeNewcomer(void);

    ScavTrap        &operator=(ScavTrap const & rhs);
};

std::ostream        &operator<<(std::ostream & o, ScavTrap const & src);


#endif