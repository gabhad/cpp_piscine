#include "Victim.hpp"

Victim::Victim(std::string name) : _name(name)
{
    std::cout << "Some random victim called " << this->getName() << " just popped !" << std::endl;
}

Victim::Victim(const Victim & src)
{
    *this = src;
}

Victim::Victim()
{
    
}

Victim::~Victim()
{
    std::cout << "Victim " << this->getName() << " just died for no apparent reason !" << std::endl;
}

std::string     Victim::getName(void) const
{
    return this->_name;
}

void        Victim::setName(std::string name)
{
    this->_name = name;
}

void        Victim::getPolymorphed(void) const
{
    std::cout << this->getName() << " has been turned into a cute little sheep !" << std::endl;
}


Victim    &Victim::operator=(const Victim &rhs)
{
    if (this != &rhs)
    {
        this->setName(rhs.getName());
    }
    return *this;

}

std::ostream    &operator<<(std::ostream & o, Victim const & rhs)
{
    o << "I am " << rhs.getName() << ", and I like otters !" << std::endl;
    return o;
}