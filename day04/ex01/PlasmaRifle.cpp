#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 21, 5)
{
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & src)
{
    *this = src;
}

PlasmaRifle::~PlasmaRifle()
{
}

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const & rhs)
{
    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->_damage = rhs._damage;
        this->_apcost = rhs._apcost;
    }
    return *this;
}

void    PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
