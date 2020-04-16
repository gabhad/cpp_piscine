#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
    std::cout << "HumanB created" << std::endl;
}

HumanB::~HumanB()
{
    std::cout << "HumanB destroyed" << std::endl;
}

void    HumanB::setWeapon(Weapon weapon)
{
    this->_weapon = &weapon;
}

void    HumanB::attack(void)
{
    std::cout << this->_name <<" attacks with his " << this->_weapon->getType() << std::endl;
}