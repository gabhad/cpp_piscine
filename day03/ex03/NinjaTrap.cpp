#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap()
{
    this->_hitPoints = 60;
    this->_maxHitPoints = 60;
    this->_energyPoints = 120;
    this->_maxEnergyPoints = 120;
    this->_name = name;
    this->_meleeAttackDamage = 60;
    this->_rangedAttackDamage = 5;
    this->_armorDamageReduction = 0;
    std::cout << "NNJ4-TP parameter constructor called." << std::endl;
}

NinjaTrap::NinjaTrap(void) : ClapTrap()
{
    this->_hitPoints = 60;
    this->_maxHitPoints = 60;
    this->_energyPoints = 120;
    this->_maxEnergyPoints = 120;
    this->_meleeAttackDamage = 60;
    this->_rangedAttackDamage = 5;
    this->_armorDamageReduction = 0;

    std::cout << "NNJ4-TP default constructor called." << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const & src) : ClapTrap()
{
    std::cout << "NNJ4-TP copy constructor called." << std::endl;
    *this = src;
}

NinjaTrap::~NinjaTrap()
{
    std::cout << "NNJ4-TP default destructor called." << std::endl;
}

void        NinjaTrap::ninjaShoebox(ClapTrap const & target)
{
    std::cout << "The CL4P-TP " << target << " just got his pants pulled by " << *this << std::endl;
}

void        NinjaTrap::ninjaShoebox(FragTrap const & target)
{
    std::cout << "The FL4G-TP " << target << " just got his butt spanked by " << *this << std::endl;
}

void        NinjaTrap::ninjaShoebox(ScavTrap const & target)
{
    std::cout << "The SC4V-TP " << target << " just received a water bomb to his face from " << *this << std::endl;
}

void        NinjaTrap::ninjaShoebox(NinjaTrap const & target)
{
    std::cout << "The NNJ4-TP" << target << " tripped on his shoelaces untied by " << *this << std::endl;
}

NinjaTrap    &NinjaTrap::operator=(NinjaTrap const &rhs)
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
    std::cout << "NNJ4-TP assignation operator called." << std::endl;
    return *this;
}

std::ostream        &operator<<(std::ostream & o, NinjaTrap const & src)
{
    o << src.getName();
    return o;
}