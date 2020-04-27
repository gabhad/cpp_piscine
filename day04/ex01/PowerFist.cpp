#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 50, 8)
{
}

PowerFist::PowerFist(PowerFist const & src)
{
    *this = src;
}

PowerFist::~PowerFist()
{
}

PowerFist &PowerFist::operator=(PowerFist const & rhs)
{
    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->_damage = rhs._damage;
        this->_apcost = rhs._apcost;
    }
    return *this;
}

void    PowerFist::attack() const
{
    std::cout << "* pschhh... SBAM! *" << std::endl;
}
