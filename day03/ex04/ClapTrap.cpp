#include "ClapTrap.hpp"

ClapTrap::ClapTrap(    
    unsigned int    hitPoints,
    unsigned int    maxHitPoints,
    unsigned int    energyPoints,
    unsigned int    maxEnergyPoints,
    unsigned int    level,
    std::string     name,
    unsigned int    meleeAttackDamage,
    unsigned int    rangedAttackDamage,
    unsigned int    armorDamageReduction ) 
        : _hitPoints(hitPoints), _maxHitPoints(maxHitPoints), 
        _energyPoints(energyPoints), _maxEnergyPoints(maxEnergyPoints),
        _level(level), _name(name),
        _meleeAttackDamage(meleeAttackDamage), _rangedAttackDamage(rangedAttackDamage),
        _armorDamageReduction(armorDamageReduction)
{
    std::cout << "CL4P-TP parameter constructor called." << std::endl;
}

ClapTrap::ClapTrap(void)
{
    std::cout << "CL4P-TP default constructor called." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
    std::cout << "CL4P-TP copy constructor called." << std::endl;
    *this = src;
}

ClapTrap::~ClapTrap()
{
    std::cout << "CL4P-TP default destructor called." << std::endl;
}

void        ClapTrap::rangedAttack(std::string const & target)
{
    std::cout << *this << " attacks " << target;
    std::cout << " at range, causing " << this->_rangedAttackDamage;
    std::cout << " points of damage!" << std::endl;
}

void        ClapTrap::meleeAttack(std::string const & target)
{
    std::cout << *this << " attacks " << target;
    std::cout << " in the melee, causing " << this->_meleeAttackDamage;
    std::cout << " points of damage!" << std::endl;
}

void        ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints < (amount - this->_armorDamageReduction))
    {
        this->_hitPoints = 0;
        std::cout << *this << " just took a hard hit. He has no Hit Points left." << std::endl;
    }
    else
    {
        this->_hitPoints -= (amount - this->_armorDamageReduction);
        std::cout << *this << " just took a hard hit. He has ";
        std::cout << this->_hitPoints << " remaining." << std::endl;
    }
}

void        ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hitPoints + amount > this->_maxHitPoints)
        this->_hitPoints = this->_maxHitPoints;
    else
        this->_hitPoints += amount;
    if (this->_energyPoints + amount > this->_maxEnergyPoints)
        this->_energyPoints = this->_maxEnergyPoints;
    else
        this->_energyPoints += amount;


    std::cout << *this << " just got repaired. He is now back to ";
    std::cout << this->_hitPoints << " HP and " << this->_energyPoints;
    std::cout << " energy points." << std::endl;
}

std::string ClapTrap::getName(void) const
{
    return this->_name;
}

ClapTrap    &ClapTrap::operator=(ClapTrap const &rhs)
{
    if (this != &rhs)
    {
        this->_hitPoints = rhs._hitPoints;
        this->_maxHitPoints = rhs._maxHitPoints;
        this->_energyPoints = rhs._energyPoints;
        this->_maxEnergyPoints = rhs._maxEnergyPoints;
        this->_level = rhs._level;
        this->_name = rhs._name;
        this->_meleeAttackDamage = rhs._meleeAttackDamage;
        this->_rangedAttackDamage = rhs._rangedAttackDamage;
        this->_armorDamageReduction = rhs._armorDamageReduction;
    }
    std::cout << "SC4V-TP assignation operator called." << std::endl;
    return *this;
}

std::ostream        &operator<<(std::ostream & o, ClapTrap const & src)
{
    o << src.getName();
    return o;
}