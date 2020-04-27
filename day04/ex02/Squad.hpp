#ifndef SQUAD_HPP
# define SQUAD_HPP

#include "ISquad.hpp"
#include "TacticalMarine.hpp"

class Squad : public ISquad
{
private:
    int             _unitNb;
    ISpaceMarine    *_marine[];

public:
    Squad();
    Squad(Squad const & src);
    ~Squad();
    Squad   &operator=(Squad const & rhs);

    int             getCount() const;
    ISpaceMarine    *getUnit(int) const;
    int             push(ISpaceMarine*);
};

#endif