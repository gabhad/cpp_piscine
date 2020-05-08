#ifndef INSTDECREMENT_HPP
# define INSTDECREMENT_HPP

#include "IInstructions.hpp"

class InstDecrement : public IInstructions
{
    public:
        InstDecrement();
        InstDecrement(const InstDecrement &);
        virtual ~InstDecrement();
        InstDecrement &operator=(const InstDecrement &);

        virtual void    execute(Mindopen&);
};

#endif