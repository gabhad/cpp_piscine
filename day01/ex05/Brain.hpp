#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
private:

public:
    Brain(void);
    ~Brain(void);

    std::string identify(void) const;
};

#endif