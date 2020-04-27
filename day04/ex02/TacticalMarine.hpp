#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
    private:
       
    public:
        TacticalMarine();
        TacticalMarine(TacticalMarine const & src);
        ~TacticalMarine();
        TacticalMarine  &operator=(TacticalMarine const & rhs);

        ISpaceMarine    *clone() const;
        void            battleCry() const;
        void            rangedAttack() const;
        void            meleeAttack() const;
};

#endif