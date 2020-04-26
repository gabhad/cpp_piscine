#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : 
                _name(name), _title(title)
{
    std::cout << this->getName() << ", " << this->getTitle() << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer & src)
{
    *this = src;
}

Sorcerer::~Sorcerer()
{
    std::cout << this->getName() << ", " << this->getTitle() << ", is dead. Consequences will never be the same !" << std::endl; 
}

std::string     Sorcerer::getName(void) const
{
    return this->_name;
}

std::string     Sorcerer::getTitle(void) const
{
    return this->_title;
}

void            Sorcerer::setName(std::string const name)
{
    this->_name = name;
}

void            Sorcerer::setTitle(std::string const title)
{
    this->_title = title;
}

void            Sorcerer::polymorph(Victim const &target) const
{
    target.getPolymorphed();
}

Sorcerer        &Sorcerer::operator=(const Sorcerer &rhs)
{
    if (this != &rhs)
    {
        this->setName(rhs.getName());
        this->setTitle(rhs.getTitle());
    }
    return *this;
}

std::ostream    &operator<<(std::ostream &o, const Sorcerer &rhs)
{
    o << "I am " << rhs.getName() << ", " << rhs.getTitle() << ", and I like ponies !" << std::endl;
    return o;
}