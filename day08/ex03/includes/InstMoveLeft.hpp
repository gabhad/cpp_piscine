#ifndef INSTMOVELEFT_HPP
# define INSTMOVELEFT_HPP

#include "IInstructions.hpp"

class InstMoveLeft : public IInstructions
{
    public:
        InstMoveLeft();
        InstMoveLeft(const InstMoveLeft &);
        ~InstMoveLeft();
        InstMoveLeft &operator=(const InstMoveLeft &);

        virtual void    execute(Mindopen&);
};

#endif