#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weapon) : 
        _name(name)
{
    Weapon *weap = new Weapon;
    weap = &weapon;
    this->_weapPtr = weap;
    std::cout << "HumanA created" << std::endl;

}

HumanA::~HumanA()
{
    std::cout << "HumanA destroyed" << std::endl;
}

void    HumanA::attack(void)
{
    std::cout << this->_name <<" attacks with his " << this->_weapPtr->getType() << std::endl;
}