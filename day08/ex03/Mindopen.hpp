#ifndef MINDOPEN_HPP
# define MINDOPEN_HPP

#include <iostream>

void    readFromFile(std::string filename);

class Mindopen
{
    private:
        /* args */
    public:
        Mindopen(/* args */);
        Mindopen();
        Mindopen(const Mindopen &);
        ~Mindopen();
        Mindopen &operator=(const Mindopen &);
};

Mindopen::Mindopen(/*args*/)
{
}

Mindopen::Mindopen()
{
}

Mindopen::Mindopen(const Mindopen & src)
{
}

Mindopen::~Mindopen()
{
}

Mindopen &Mindopen::operator=(const Mindopen & rhs)
{
}

#endif