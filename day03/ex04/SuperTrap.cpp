#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : ClapTrap(
    this->defHitPoints,
    this->defMaxHitPoints,
    this->defEnergyPoint,
    this->defMaxEnergyPoint,
    1,
    name,
    this->defMeleeAttackDamage,
    this->defRangedAttackDamage,
    this->defArmorDamageReduction)
{
    std::cout << "SUPER-TP parameter constructor called." << std::endl;
}

SuperTrap::SuperTrap(void) : ClapTrap(
    this->defHitPoints,
    this->defMaxHitPoints,
    this->defEnergyPoint,
    this->defMaxEnergyPoint,
    1,
    this->defMeleeAttackDamage,
    this->defRangedAttackDamage,
    this->defArmorDamageReduction)
{
    std::cout << "SUPER-TP default constructor called." << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const & src) : FragTrap(), NinjaTrap()
{
    std::cout << "SUPER-TP copy constructor called." << std::endl;
    *this = src;
}

SuperTrap::~SuperTrap()
{
    std::cout << "SUPER-TP default destructor called." << std::endl;
}

int             SuperTrap::getHitPoints(void) const
{
    return this->_hitPoints;
}

int             SuperTrap::getEnergyPoints(void) const
{
    return this->_energyPoints;
}

SuperTrap       &SuperTrap::operator=(SuperTrap const & rhs)
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
    std::cout << "SUPER-TP assignation operator called." << std::endl;
    return *this;

}

std::ostream        &operator<<(std::ostream & o, SuperTrap const & src)
{
    o << src.getName();
    return o;
}
