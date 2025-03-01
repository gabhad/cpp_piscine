#include "MiningBarge.hpp"
#include "IMiningLaser.hpp"
#include "IAsteroid.hpp"
#include <iostream>

MiningBarge::MiningBarge()
{
    for (size_t i = 0; i < 4; i++)
    {
        this->_laser[i] = 0;
    }   
}

MiningBarge::MiningBarge(const MiningBarge & src)
{
    *this = src;
}

MiningBarge::~MiningBarge()
{
}

MiningBarge &MiningBarge::operator=(const MiningBarge & rhs)
{
    if (this != &rhs)
        for (size_t i = 0; i < 4; i++)
            this->_laser[i] = rhs._laser[i];
    return *this;
}

void    MiningBarge::equip(IMiningLaser* las)
{
    for (size_t i = 0; i < 4; i++)
        if (!this->_laser[i])
        {
            this->_laser[i] = las;
            return;
        }
}

void    MiningBarge::mine(IAsteroid* ast) const
{
    for (size_t i = 0; i < 4; i++)
    {
        if (this->_laser[i])
            this->_laser[i]->mine(ast);
    }
}

