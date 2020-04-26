#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name)
{
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon & src)
{
    *this = src;
}

Peon::~Peon()
{
    std::cout << "Bleuark..." << std::endl;
}

void    Peon::getPolymorphed(void) const
{
    std::cout << this->getName() << " has been turned into a pink pony !" << std::endl;
}

Peon    &Peon::operator=(const Peon &rhs)
{
    if (this != &rhs)
    {
        this->setName(rhs.getName());
    }
    return *this;

}
