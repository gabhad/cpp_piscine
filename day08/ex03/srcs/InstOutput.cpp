#include "InstOutput.hpp"
#include "Mindopen.hpp"
#include <iostream>

InstOutput::InstOutput()
{
}

InstOutput::InstOutput(const InstOutput & src)
{
    *this = src;
}

InstOutput::~InstOutput()
{
}

InstOutput &InstOutput::operator=(const InstOutput & rhs)
{
    (void) rhs;
    return *this;
}

void    InstOutput::execute(Mindopen &prog)
{
    prog.addChar(prog.getChar());
}