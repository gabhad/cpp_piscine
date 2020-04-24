#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap()
{
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_energyPoints = 100;
    this->_maxEnergyPoints = 100;
    this->_name = name;
    this->_meleeAttackDamage = 30;
    this->_rangedAttackDamage = 20;
    this->_armorDamageReduction = 5;
    std::cout << "FR4G-TP parameter constructor called." << std::endl;
}

FragTrap::FragTrap(void) : ClapTrap()
{
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_energyPoints = 100;
    this->_maxEnergyPoints = 100;
    this->_meleeAttackDamage = 30;
    this->_rangedAttackDamage = 20;
    this->_armorDamageReduction = 5;
    std::cout << "FR4G-TP default constructor called." << std::endl;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap()
{
    std::cout << "FR4G-TP copy constructor called." << std::endl;
    *this = src;
}

FragTrap::~FragTrap()
{
    std::cout << "FR4G-TP default destructor called." << std::endl;
}

void        FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    std::string     attacks[5] = { " throws his shoe at ",
                                    " spits on ", " plucks his finger in the eyes of ",
                                    " farts on ", " calls his friends to beat the shit out of "};
    if (this->_energyPoints < 25)
        std::cout << *this << " is out of breath and cannot perform this action. He stays not moving like an idiot instead." << std::endl;
    else
    {
        std::cout << *this << attacks[rand() % 5] << target << " and causes damage." << std::endl;
        this->_energyPoints -= 25;
    }
}

FragTrap    &FragTrap::operator=(FragTrap const &rhs)
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
    std::cout << "FR4G-TP assignation operator called" << std::endl;
    return *this;
}

std::ostream        &operator<<(std::ostream & o, FragTrap const & src)
{
    o << src.getName();
    return o;
}
