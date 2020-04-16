#include "Zombie.hpp"
#include "ZombieHorde.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
    std::cout << "Zombie created" << std::endl;
}

Zombie::Zombie(void)
{
    std::cout << "Zombie created" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie destructed" << std::endl;
}

void    Zombie::announce(void) const
{
    std::cout << "<" << this->_name << "> Braiiiiiiiiiiiiiins..." << std::endl;
}

void     Zombie::setName(std::string name)
{
    this->_name = name;
}