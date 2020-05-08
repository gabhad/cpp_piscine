#ifndef INSTMOVERIGHT_HPP
# define INSTMOVERIGHT_HPP

#include "IInstructions.hpp"

class InstMoveRight : public IInstructions
{
    public:
        InstMoveRight();
        InstMoveRight(const InstMoveRight &);
        ~InstMoveRight();
        InstMoveRight &operator=(const InstMoveRight &);

        virtual void    execute(Mindopen&);
};

#endif