#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
    std::string     names[10] = {"Jason", "Bryan", "Kevin", "Dylan", 
                        "Jean-Michel", "Jean-Eudes", "Jean-Mouloud",
                        "Abdelkader", "Moïse", "Apu"};
    
    this->_zombie = new Zombie[n];
    for (int i = 0; i < n; i++)
    {
        this->_zombie[i].setName(names[rand() %10]);
        this->_zombie[i].announce();
    }
}

ZombieHorde::~ZombieHorde()
{
    delete [] this->_zombie;
}
