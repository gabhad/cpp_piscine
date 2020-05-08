#include "InstMoveLeft.hpp"
#include "Mindopen.hpp"

InstMoveLeft::InstMoveLeft()
{
}

InstMoveLeft::InstMoveLeft(const InstMoveLeft & src)
{
    *this = src;
}

InstMoveLeft::~InstMoveLeft()
{
}

InstMoveLeft &InstMoveLeft::operator=(const InstMoveLeft & rhs)
{
    return *this; 
}

void        InstMoveLeft::execute(Mindopen &prog)
{
    prog.movePointerLeft();
}