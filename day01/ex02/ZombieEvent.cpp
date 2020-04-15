#include "Zombie.hpp"
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void)
{
    std::cout << "Zombie event created" << std::endl;
}

ZombieEvent::~ZombieEvent()
{
    std::cout << "Zombie event destructed" << std::endl;
}

void     ZombieEvent::setZombieType(std::string type)
{
    this->_type = type;
}

Zombie          *ZombieEvent::newZombie(std::string name)
{
    
    Zombie  *zombie = new Zombie(name, this->_type);

    return zombie;
}

Zombie          ZombieEvent::createZombie(std::string name)
{
    Zombie  zombie(name, this->_type);
    return  zombie;
}
