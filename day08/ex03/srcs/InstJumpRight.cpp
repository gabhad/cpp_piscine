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
    (void) rhs;
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
            std::list<IInstructions*>::iterator it = prog.getInstructionIterator();
            InstJumpLeft &temp = dynamic_cast<InstJumpLeft&>(**it);
            (void)temp;
            i--;
        }
        catch(const std::bad_cast& e)
        {
            try
            {
                std::list<IInstructions*>::iterator it2 = prog.getInstructionIterator();
                InstJumpRight &tempbis = dynamic_cast<InstJumpRight&>(**it2);
                (void)tempbis;
                i++;
            }
            catch(const std::bad_cast& e)
            {
            }
        }
    }

}