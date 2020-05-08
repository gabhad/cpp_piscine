#include "InstIncrement.hpp"
#include "Mindopen.hpp"

InstIncrement::InstIncrement()
{
}

InstIncrement::InstIncrement(const InstIncrement & src)
{
    *this = src;
}

InstIncrement::~InstIncrement()
{
}

InstIncrement &InstIncrement::operator=(const InstIncrement & rhs)
{
    return *this;
}

void    InstIncrement::execute(Mindopen &prog)
{
    prog.incrementPointer();
}