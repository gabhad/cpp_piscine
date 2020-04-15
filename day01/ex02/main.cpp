#include "Zombie.hpp"
#include "ZombieEvent.hpp"

void    randomChump(ZombieEvent *event)
{
    std::string     names[10] = {"Jason", "Bryan", "Kevin", "Dylan", 
                        "Jean-Michel", "Jean-Eudes", "Jean-Mouloud",
                        "Abdelkader", "Moïse", "Apu"};
    
    event->setZombieType("Heaper");
    Zombie  *zombie = event->newZombie(names[rand() %10]);
    
    zombie->announce();
    delete zombie;
}

void    stack_zombie(ZombieEvent *event)
{
    event->setZombieType("Stacker");
    Zombie  zombie = event->createZombie("Jean-Michel Zombie");
    zombie.announce();
}

int     main(void)
{
    ZombieEvent *event = new ZombieEvent();
    
    for (int i = 0; i < 5; i++)
        randomChump(event);
    stack_zombie(event);
    delete event;
    return 0;
}
