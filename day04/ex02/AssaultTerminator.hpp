#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
    private:

    public:
        AssaultTerminator();
        AssaultTerminator(AssaultTerminator const & src);
        ~AssaultTerminator();
        AssaultTerminator   &operator=(AssaultTerminator const & rhs);

        ISpaceMarine    *clone() const;
        void            battleCry() const;
        void            rangedAttack() const;
        void            meleeAttack() const;
};

#endif