#ifndef INSTINPUT_HPP
# define INSTINPUT_HPP

#include "IInstructions.hpp"

class InstInput : public IInstructions
{
    public:
        InstInput();
        InstInput(const InstInput &);
        ~InstInput();
        InstInput &operator=(const InstInput &);

        virtual void    execute(Mindopen&);
};

#endif