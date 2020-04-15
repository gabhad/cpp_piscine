#ifndef PONY_CLASS_HPP
#define PONY_CLASS_HPP

#include <iostream>

class Pony
{
private:
    std::string     _name;

public:
    Pony(std::string name);
    ~Pony();

    void    gambade(void);
    void    broute(void);

};


#endif