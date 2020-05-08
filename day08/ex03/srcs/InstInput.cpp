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
    return *this;
}

void    InstInput::execute(Mindopen &prog)
{
    std::cout << "Please enter a character (note, only the first character you type will be considered) : " << std::endl;
    prog.setIterator(getchar());
}