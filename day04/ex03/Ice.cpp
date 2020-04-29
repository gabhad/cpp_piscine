#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(const Ice & src)
{
    *this = src;
}

Ice::~Ice()
{
}

Ice &Ice::operator=(const Ice & rhs)
{
    if (this != &rhs)
    {
        this->_xp = rhs._xp;
    }
    return *this;
}

AMateria    *Ice::clone() const
{
    Ice *ice = new Ice;
    return ice;
}

void        Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target << " *" << std::endl;
    this->_xp += 10;
}

