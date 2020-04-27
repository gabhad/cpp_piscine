#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type) : 
            _hp(hp), _type(type)
{
}

Enemy::Enemy(void)
{
}

Enemy::Enemy(Enemy const & src)
{
    *this = src;
}

Enemy::~Enemy()
{
}

Enemy &Enemy::operator=(Enemy const & rhs)
{
    if (this != &rhs)
    {
        this->_hp = rhs._hp;
        this->_type = rhs._type;
    }
}

std::string     Enemy::getType() const
{
    return this->_type;
}

int             Enemy::getHP() const
{
    return this->_hp;
}

void            Enemy::takeDamage(int damage)
{
    this->_hp -= damage;
}