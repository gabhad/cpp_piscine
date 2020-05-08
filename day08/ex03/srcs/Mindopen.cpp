#include "Mindopen.hpp"
#include "IInstructions.hpp"

Mindopen::Mindopen()
{
}

Mindopen::Mindopen(const Mindopen & src)
{
    *this = src;
}

Mindopen::~Mindopen()
{
}

Mindopen &Mindopen::operator=(const Mindopen & rhs)
{
    if (this != &rhs)
    {
        this->_inst = rhs._inst;
        this->_prog = rhs._prog;
    }
}

void    Mindopen::addInstruction(IInstructions &inst)
{
    this->_inst.push_back(inst);
}

void    Mindopen::addElem(char)
{
    char c = 0;
    this->_prog.push_back(c);
}

