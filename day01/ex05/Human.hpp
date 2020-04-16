#ifndef HUMAN_HPP
# define HUMAN_HPP

#include <iostream>
#include "Brain.hpp"

class Human
{
private:
    const Brain     *_brain;
    Brain           &_brainRef;

public:
    Human(void);
    ~Human(void);

    std::string     identify(void) const;
    Brain           &getBrain(void) const;

};

#endif