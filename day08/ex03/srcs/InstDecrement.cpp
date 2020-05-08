#include "InstDecrement.hpp"
#include "Mindopen.hpp"

InstDecrement::InstDecrement()
{
}

InstDecrement::InstDecrement(const InstDecrement & src)
{
    *this = src;
}

InstDecrement::~InstDecrement()
{
}

InstDecrement &InstDecrement::operator=(const InstDecrement & rhs)
{
    return *this;
}

void    InstDecrement::execute(Mindopen &prog)
{
    prog.decrementPointer();
}