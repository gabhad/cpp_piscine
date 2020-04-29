#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type), _xp(0)
{
}

AMateria::AMateria()
{
}

AMateria::AMateria(const AMateria & src)
{
    *this = src;
}

AMateria::~AMateria()
{
}

AMateria &AMateria::operator=(const AMateria & rhs)
{
    if (this != &rhs)
        this->_xp = rhs.getXP();
    return *this;
}

std::string const   &AMateria::getType() const
{
    return this->_type;
}

unsigned int        AMateria::getXP() const
{
    return this->_xp;
}
