#include "Character.hpp"

Character::Character(std::string const & name) :
            _name(name), _ap(40)
{
}

Character::~Character()
{
}

Character::Character(Character const & src)
{
    *this = src;
}

Character &Character::operator=(Character const & rhs)
{
    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->_ap = rhs._ap;
        this->_weap = rhs._weap;
    }
    return *this;
}

void    Character::recoverAP()
{
    this->_ap += 10;
    if (this->_ap > 40)
        this->_ap = 40;
}

void    Character::equip(AWeapon *weapon)
{
    this->_weap = weapon;
}

void    Character::attack(Enemy *target)
{
    if (!this->_weap)
        return;
    if (this->_ap < this->_weap->getAPCost())
    {
        std::cout << this->_name << " failed his attack due to a lack of AP." << std::endl;
        return;
    }
    else
    {
        std::cout << this->_name << " attacks " << target->getType();
        std::cout << " with a " << this->_weap->getName() << std::endl;
        this->_weap->attack();
    }
    target->takeDamage(this->_weap->getDamage());
    if (target->getHP() < 1)
        delete target;
}

std::string Character::getName() const
{
    return this->_name;
}

int         Character::getAp() const
{
    return this->_ap;
}

std::string Character::getWeap() const
{
    if (this->_weap)
        return this->_weap->getName();
    else
        return NULL;
}

std::ostream    &operator<<(std::ostream & o, Character & rhs)
{
    if (!rhs.getWeap().empty())
        o << rhs.getName() << " has " << rhs.getAp() << " AP  and wields a " << rhs.getWeap() << std::endl;
    else
    {
        o << rhs.getName() << " has " << rhs.getAp() << " AP  and is unarmed" << std::endl;
    }
    return o;
}