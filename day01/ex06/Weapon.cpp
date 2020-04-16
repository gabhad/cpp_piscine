#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
    std::cout << "Weapon created" << std::endl;
}

Weapon::Weapon()
{
    std::cout << "Weapon created" << std::endl;
}

Weapon::~Weapon()
{
    std::cout << "Weapon destroyed" << std::endl;
}

void        Weapon::setType(std::string type)
{
    this->_type = type;
    std::cout << "Type changed" << std::endl;
}

std::string Weapon::getType(void) const
{
    return this->_type;
}