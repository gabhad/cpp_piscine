#include <iostream>
#include "InstInput.hpp"
#include "Mindopen.hpp"

InstInput::InstInput()
{
}

InstInput::InstInput(const InstInput & src)
{
    *this = src;
}

InstInput::~InstInput()
{
}

InstInput &InstInput::operator=(const InstInput & rhs)
{
    (void) rhs;
    return *this;
}

void    InstInput::execute(Mindopen &prog)
{
    prog.setIterator(getchar());
}