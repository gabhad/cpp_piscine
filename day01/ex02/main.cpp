#include "Zombie.hpp"
#include "ZombieEvent.hpp"

void    randomChump(ZombieEvent *event)
{
    std::string     names[10] = {"Jason", "Bryan", "Kevin", "Dylan", 
                        "Jean-Michel", "Jean-Eudes", "Jean-Mouloud",
                        "Abdelkader", "Moïse", "Apu"};
    
    Zombie *zombie = event->newZombie(names[rand() %10]);
    zombie->announce();
    delete zombie;
}

int     main(void)
{
    ZombieEvent *event = new ZombieEvent("BrainEaters");
    
    for (int i = 0; i < 10; i++)
        randomChump(event);
    delete event;
    return 0;
}
