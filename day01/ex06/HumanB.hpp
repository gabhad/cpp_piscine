#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
    const std::string   _name;
    Weapon              *_weapon;
public:
    HumanB(std::string name);
    ~HumanB();

    void        attack(void);
    void        setWeapon(Weapon &weapon);
};

#endif