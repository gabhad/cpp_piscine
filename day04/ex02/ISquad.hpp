#ifndef ISQUAD_HPP
# define ISQUAD_HPP

#include <iostream>
#include "ISpaceMarine.hpp"

class ISquad
{
    private:
        /* data */
    public:
        virtual ~ISquad() {}
        virtual int     getCount() const = 0;
        virtual         ISpaceMarine* getUnit(int) const = 0;
        virtual int     push(ISpaceMarine*) = 0;
};

#endif