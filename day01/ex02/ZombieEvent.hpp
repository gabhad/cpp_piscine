#ifndef ZOMBIE_EVENT_HPP
#define ZOMBIE_EVENT_HPP

#include <iostream>
#include <string>

//class   Zombie;

class   ZombieEvent
{
private:
    std::string     _type;

public:
    ZombieEvent(std::string type);
    ~ZombieEvent();
    
    std::string     setZombieType(void);
    Zombie          *newZombie(std::string name);
};

#endif