#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
    const std::string   _name;
    Weapon              *_weapPtr;
//    Weapon              &_weapRef;
public:
    HumanA(std::string name, Weapon weapon);
    ~HumanA();

    void        attack(void);
};

#endif