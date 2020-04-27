#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const & src)
{
    *this = src;
}

SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh ..." << std::endl;
}

SuperMutant &SuperMutant::operator=(SuperMutant const & rhs)
{
    if (this != &rhs)
    {
        this->_hp = rhs._hp;
        this->_type = rhs._type;
    }
    return *this;
}

void    SuperMutant::takeDamage(int damage)
{
    this->_hp -= damage - 3;
}