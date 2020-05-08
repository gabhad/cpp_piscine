#ifndef INSTJUMPRIGHT_HPP
# define INSTJUMPRIGHT_HPP

#include "IInstructions.hpp"

class InstJumpRight : public IInstructions
{
    public:
        InstJumpRight();
        InstJumpRight(const InstJumpRight &);
        ~InstJumpRight();
        InstJumpRight &operator=(const InstJumpRight &);

        virtual void    execute(Mindopen&);
};

#endif