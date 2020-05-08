#include "InstMoveRight.hpp"
#include "Mindopen.hpp"

InstMoveRight::InstMoveRight()
{
}

InstMoveRight::InstMoveRight(const InstMoveRight & src)
{
    *this = src;
}

InstMoveRight::~InstMoveRight()
{
}

InstMoveRight &InstMoveRight::operator=(const InstMoveRight & rhs)
{
    (void) rhs;
    return *this;
}

void        InstMoveRight::execute(Mindopen &prog)
{
    prog.movePointerRight();
}