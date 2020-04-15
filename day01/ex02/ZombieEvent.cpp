#include "Zombie.hpp"
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(std::string type) :
            _type(type)
{
    std::cout << "Zombie event created" << std::endl;
}

ZombieEvent::~ZombieEvent()
{
    std::cout << "Zombie event destructed" << std::endl;
}

std::string     ZombieEvent::setZombieType(void)
{
    return this->_type;
}

Zombie          *ZombieEvent::newZombie(std::string name)
{
    Zombie  *zombie = new Zombie(name, this->_type);

    return zombie;
}
