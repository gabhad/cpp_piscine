#include "InstJumpLeft.hpp"
#include "InstJumpRight.hpp"
#include "Mindopen.hpp"

InstJumpLeft::InstJumpLeft()
{
}

InstJumpLeft::InstJumpLeft(const InstJumpLeft & src)
{
    *this = src;
}

InstJumpLeft::~InstJumpLeft()
{
}

InstJumpLeft &InstJumpLeft::operator=(const InstJumpLeft & rhs)
{
    return *this;
}

void    InstJumpLeft::execute(Mindopen &prog)
{
    if (*prog.getIt() == 0)
        return;
    int i = 1;
    while (i > 0)
    {
        prog.moveInstructionIteratorLeft();
        try
        {
            InstJumpRight &temp = dynamic_cast<InstJumpRight&>(*prog.getInstructionIterator());
            (void)temp;
            i--;
        }
        catch(const std::bad_cast& e)
        {
            try
            {
                InstJumpLeft &tempbis = dynamic_cast<InstJumpLeft&>(*prog.getInstructionIterator());
                (void)tempbis;
                i++;
            }
            catch(const std::bad_cast& e)
            {
            }
        }
    }
    prog.moveInstructionIteratorLeft();
}