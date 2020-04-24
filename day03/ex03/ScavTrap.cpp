#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap()
{
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_energyPoints = 50;
    this->_maxEnergyPoints = 50;
    this->_name = name;
    this->_meleeAttackDamage = 20;
    this->_rangedAttackDamage = 15;
    this->_armorDamageReduction = 3;
    std::cout << "SC4V-TP parameter constructor called." << std::endl;
}

ScavTrap::ScavTrap(void) : ClapTrap()
{
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_energyPoints = 50;
    this->_maxEnergyPoints = 50;
    this->_meleeAttackDamage = 20;
    this->_rangedAttackDamage = 15;
    this->_armorDamageReduction = 3;

    std::cout << "SC4V-TP default constructor called." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap()
{
    std::cout << "SC4V-TP copy constructor called." << std::endl;
    *this = src;
}

ScavTrap::~ScavTrap()
{
    std::cout << "SC4V-TP default destructor called." << std::endl;
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