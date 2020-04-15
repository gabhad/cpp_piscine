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
    ZombieEvent(void);
    ~ZombieEvent(void);
    
    void            setZombieType(std::string type);
    Zombie          *newZombie(std::string name);
    Zombie          createZombie(std::string name);
};

#endif