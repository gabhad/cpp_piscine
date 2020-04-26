#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
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
    ClapTrap(    
        unsigned int    hitPoints,
        unsigned int    maxHitPoints,
        unsigned int    energyPoints,
        unsigned int    maxEnergyPoints,
        unsigned int    level,
        std::string     name,
        unsigned int    meleeAttackDamage,
        unsigned int    rangedAttackDamage,
        unsigned int    armorDamageReduction );
    ClapTrap(
        unsigned int    hitPoints,
        unsigned int    maxHitPoints,
        unsigned int    energyPoints,
        unsigned int    maxEnergyPoints,
        unsigned int    level,
        unsigned int    meleeAttackDamage,
        unsigned int    rangedAttackDamage,
        unsigned int    armorDamageReduction );
    ClapTrap(void);
    ClapTrap(ClapTrap const & src);
    ~ClapTrap();

    virtual void    rangedAttack(std::string const & target);
    virtual void    meleeAttack(std::string const & target);
    void            takeDamage(unsigned int amount);
    void            beRepaired(unsigned int amount);

    std::string     getName(void) const;

    ClapTrap        &operator=(ClapTrap const & rhs);
};

std::ostream        &operator<<(std::ostream & o, ClapTrap const & src);

#endif