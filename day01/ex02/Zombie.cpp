#include "Zombie.hpp"
#include "ZombieEvent.hpp"

Zombie::Zombie(std::string name, std::string type) :
                _name(name), _type(type)
{
    std::cout << "Zombie created" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie destructed" << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << "<" << this->_name << " (";
    std::cout << this->_type << ")> Braiiiiiiiiiiiiiins..." << std::endl;
}
