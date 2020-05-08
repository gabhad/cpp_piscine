#ifndef INSTJUMPLEFT_HPP
# define INSTJUMPLEFT_HPP

#include "IInstructions.hpp"

class InstJumpLeft : public IInstructions
{
    public:
        InstJumpLeft();
        InstJumpLeft(const InstJumpLeft &);
        ~InstJumpLeft();
        InstJumpLeft &operator=(const InstJumpLeft &);

        virtual void    execute(Mindopen&);
};


#endif