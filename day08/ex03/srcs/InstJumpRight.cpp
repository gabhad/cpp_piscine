#include "InstJumpRight.hpp"
#include "InstJumpLeft.hpp"
#include "Mindopen.hpp"

InstJumpRight::InstJumpRight()
{
}

InstJumpRight::InstJumpRight(const InstJumpRight & src)
{
    *this = src;
}

InstJumpRight::~InstJumpRight()
{
}

InstJumpRight &InstJumpRight::operator=(const InstJumpRight & rhs)
{
    return *this;
}


void    InstJumpRight::execute(Mindopen &prog)
{
    if (*prog.getIt() != 0)
        return;
    int i = 1;
    while (i > 0)
    {
        prog.moveInstructionIteratorRight();
        try
        {
            InstJumpLeft &temp = dynamic_cast<InstJumpLeft&>(*prog.getInstructionIterator());
            (void)temp;
            i--;
        }
        catch(const std::bad_cast& e)
        {
            try
            {
                InstJumpRight &tempbis = dynamic_cast<InstJumpRight&>(*prog.getInstructionIterator());
                (void)tempbis;
                i++;
            }
            catch(const std::bad_cast& e)
            {
            }
        }
    }

}