#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int damage, int apcost) :
            _name(name), _damage(damage), _apcost(apcost)
{

}

AWeapon::AWeapon()
{
}

AWeapon::AWeapon(AWeapon const & src)
{
    *this = src;
}

AWeapon::~AWeapon()
{
}

AWeapon &AWeapon::operator=(AWeapon const & rhs)
{
    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->_damage = rhs._damage;
        this->_apcost = rhs._apcost;
    }
    return *this;
}

//Methods
std::string     AWeapon::getName() const
{
    return this->_name;
}

//Functions
int             AWeapon::getDamage() const
{
    return this->_damage;
}

int             AWeapon::getAPCost() const
{
    return this->_apcost;
}

