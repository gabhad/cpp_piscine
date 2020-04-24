#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : 
        _hitPoints(100), _maxHitPoints(100), 
        _energyPoints(50), _maxEnergyPoints(50),
        _level(1), _name(name),
        _meleeAttackDamage(20), _rangedAttackDamage(15),
        _armorDamageReduction(3)
{
    std::cout << "SC4V-TP parameter constructor called." << std::endl;
}

ScavTrap::ScavTrap(void) : _hitPoints(100), _maxHitPoints(100), 
        _energyPoints(50), _maxEnergyPoints(50),
        _level(1),
        _meleeAttackDamage(20), _rangedAttackDamage(15),
        _armorDamageReduction(3)
{
    std::cout << "SC4V-TP default constructor called." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
    std::cout << "SC4V-TP copy constructor called." << std::endl;
    *this = src;
}

ScavTrap::~ScavTrap()
{
    std::cout << "SC4V-TP default destructor called." << std::endl;
}

void        ScavTrap::rangedAttack(std::string const & target)
{
    std::cout << "SC4V-TP " << *this << " attacks " << target;
    std::cout << " at range, causing " << this->_rangedAttackDamage;
    std::cout << " points of damage!" << std::endl;
}

void        ScavTrap::meleeAttack(std::string const & target)
{
    std::cout << "SCVG-TP " << *this << " attacks " << target;
    std::cout << " in the melee, causing " << this->_meleeAttackDamage;
    std::cout << " points of damage!" << std::endl;
}

void        ScavTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints < (amount - this->_armorDamageReduction))
    {
        this->_hitPoints = 0;
        std::cout << "SC4V-TP " << *this << " just took a hard hit. He has no Hit Points left." << std::endl;
    }
    else
    {
        this->_hitPoints -= (amount - this->_armorDamageReduction);
        std::cout << "SC4V-TP " << *this << " just took a hard hit. He has ";
        std::cout << this->_hitPoints << " remaining." << std::endl;
    }
}

void        ScavTrap::beRepaired(unsigned int amount)
{
    if (this->_hitPoints + amount > this->_maxHitPoints)
        this->_hitPoints = this->_maxHitPoints;
    else
        this->_hitPoints += amount;
    if (this->_energyPoints + amount > this->_maxEnergyPoints)
        this->_energyPoints = this->_maxEnergyPoints;
    else
        this->_energyPoints += amount;


    std::cout << "SC4V-TP " << *this << " just got repaired. He is now back to ";
    std::cout << this->_hitPoints << " HP and " << this->_energyPoints;
    std::cout << " energy points." << std::endl;
}

std::string ScavTrap::getName(void) const
{
    return this->_name;
}

void        ScavTrap::challengeNewcomer(void)
{
    std::string     challenges[5] = { "run outside naked.",
                                    "shout \"i love pussy\" very loudly.", "smell my fart.",
                                    "give me 100 to this day.", "call your ex."};
    std::cout << *this << " challenges you to " << challenges[rand() % 5] << std::endl;
}

ScavTrap    &ScavTrap::operator=(ScavTrap const &rhs)
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

std::ostream        &operator<<(std::ostream & o, ScavTrap const & src)
{
    o << src.getName();
    return o;
}