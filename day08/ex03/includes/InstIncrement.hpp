#ifndef INSTINCREMENT_HPP
# define INSTINCREMENT_HPP

#include "IInstructions.hpp"

class InstIncrement : public IInstructions
{
    public:
        InstIncrement();
        InstIncrement(const InstIncrement &);
        virtual ~InstIncrement();
        InstIncrement &operator=(const InstIncrement &);

        virtual void    execute(Mindopen&);
};

#endif