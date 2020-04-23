#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : 
        _hitPoints(100), _maxHitPoints(100), 
        _energyPoints(100), _maxEnergyPoints(100),
        _level(1), _name(name),
        _meleeAttackDamage(30), _rangedAttackDamage(20),
        _armorDamageReduction(5)
{
    std::cout << "Default constructor called." << std::endl;
}

FragTrap::FragTrap(FragTrap const & src)
{
    std::cout << "Copy constructor called." << std::endl;
    *this = src;
}

FragTrap::~FragTrap()
{
    std::cout << "Default destructor called." << std::endl;
}

void        FragTrap::rangedAttack(std::string const & target)
{
    std::cout << "FR4G-TP " << this->_name << " attacks " << target;
    std::cout << " at range, causing " << this->_rangedAttackDamage;
    std::cout << " points of damage!" << std::endl;
}

void        FragTrap::meleeAttack(std::string const & target)
{
    std::cout << "FR4G-TP " << this->_name << " attacks " << target;
    std::cout << " in the melee, causing " << this->_meleeAttackDamage;
    std::cout << " points of damage!" << std::endl;
}

void        FragTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints < (amount - this->_armorDamageReduction))
    {
        this->_hitPoints = 0;
        std::cout << "FR4G-TP " << this->_name << " just took a hard hit. He has no Hit Points left." << std::endl;
    }
    else
    {
        this->_hitPoints -= (amount - this->_armorDamageReduction);
        std::cout << "FR4G-TP " << this->_name << " just took a hard hit. He has ";
        std::cout << this->_hitPoints << " remaining." << std::endl;
    }
}

void        FragTrap::beRepaired(unsigned int amount)
{
    if (this->_hitPoints + amount > this->_maxHitPoints)
        this->_hitPoints = this->_maxHitPoints;
    else
        this->_hitPoints += amount;
    if (this->_energyPoints + amount > this->_maxEnergyPoints)
        this->_energyPoints = this->_maxEnergyPoints;
    else
        this->_energyPoints += amount;


    std::cout << "FR4G-TP " << this->_name << " just got repaired. He is now back to ";
    std::cout << this->_hitPoints << "  HP and " << this->_energyPoints;
    std::cout << " energy points." << std::endl;
}

void        FragTrap::vaulthunter_dot_exe(std::string const & target)
{

}

FragTrap    &FragTrap::operator=(FragTrap const &rhs)
{
    std::cout << "Assignation operator called" << std::endl;
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
    return *this;
}