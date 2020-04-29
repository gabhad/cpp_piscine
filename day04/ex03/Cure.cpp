#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(const Cure & src)
{
    *this = src;
}

Cure::~Cure()
{
}

Cure &Cure::operator=(const Cure & rhs)
{
    if (this != &rhs)
    {
        this->_xp = rhs._xp;
    }
    return *this;
}

AMateria    *Cure::clone() const
{
    Cure *cure = new Cure;
    return cure;
}

void        Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << " 's wounds" << std::endl;
    this->_xp += 10;
}
