#ifndef INSTOUTPUT_HPP
# define INSTOUTPUT_HPP

#include "IInstructions.hpp"

class InstOutput : public IInstructions
{
    public:
        InstOutput();
        InstOutput(const InstOutput &);
        ~InstOutput();
        InstOutput &operator=(const InstOutput &);

        virtual void    execute(Mindopen&);
};

#endif