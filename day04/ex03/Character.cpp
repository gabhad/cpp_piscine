#include "Character.hpp"

Character::Character(std::string name) : _name(name)
{
}

Character::Character()
{
}

Character::Character(const Character & src)
{
    *this = src;
}

Character::~Character()
{
}

Character &Character::operator=(const Character & rhs)
{
    if (this != &rhs)
    {
        this->_name = rhs._name;
        for (size_t i = 0; i < 4; i++)
            this->_materia[i] = rhs._materia[i];
    }
    return *this;
}

std::string const & Character::getName() const
{
    return this->_name;
}

void                Character::equip(AMateria* m)
{
    if this->
}

void                Character::unequip(int idx)
{

}

void                Character::use(int idx, ICharacter& target)
{

}

