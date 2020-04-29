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
    for (size_t i = 0; i < 4; i++)
    {
        if (!this->_materia[i])
        {
            this->_materia[i] = m;
            return;
        }
    }
}

void                Character::unequip(int idx)
{
    if (!this->_materia[idx])
        return;
    this->_materia[idx] = NULL;
}

void                Character::use(int idx, ICharacter& target)
{
    if (this->_materia[idx])
        this->_materia[idx]->use(target);
}
