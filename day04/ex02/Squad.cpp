#include "Squad.hpp"

Squad::Squad()
{
}

Squad::Squad(Squad const & src)
{
    *this = src;
}

Squad::~Squad()
{
    if (this->_unitNb)
    {
        for (int i = 0; i < this->_unitNb; i++)
            delete this->_marine[i];
    }
    
}

Squad   &Squad::operator=(Squad const & rhs)
{
    if (this->_unitNb)
    {
        for (int i = 0; i < this->_unitNb; i++)
            delete this->_marine[i];
    }

    ISpaceMarine    *_new[rhs._unitNb];    
    for (int i = 0; i < rhs.getCount(); i++)
        _new[i] = rhs.getUnit(i);
    *this->_marine = *_new;
    return *this;
}

int             Squad::getCount() const
{
    return  this->_unitNb;
}

ISpaceMarine    *Squad::getUnit(int n) const
{
    if (n >= this->_unitNb)
        return NULL;
    else
        return this->_marine[n];
}

int             Squad::push(ISpaceMarine* marine)
{
    ISpaceMarine    *_new[this->_unitNb + 1];

    for (int i = 0; i < _unitNb; i++)
        _new[i] = _marine[i];
    _new[this->_unitNb] = marine;
    for (int i = 0; i < this->_unitNb; i++)
        delete this->_marine[i];
    *this->_marine = *_new;
    return ++this->_unitNb;
}

