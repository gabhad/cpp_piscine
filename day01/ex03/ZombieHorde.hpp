#ifndef ZOMBIE_HORDE_HPP
# define ZOMBIE_HORDE_HPP

#include "Zombie.hpp"

class ZombieHorde
{
private:
    Zombie  *_zombie;
public:
    ZombieHorde(int n);
    ~ZombieHorde();
};

#endif