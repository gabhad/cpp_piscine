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
    (void) rhs;
    return *this;
}

void    InstJumpLeft::execute(Mindopen &prog)
{
    if (!prog.getChar())
        return;
    int i = 1;
    while (i > 0)
    {
        prog.moveInstructionIteratorLeft();
        try
        {
            std::list<IInstructions*>::iterator it = prog.getInstructionIterator();
            InstJumpRight &temp = dynamic_cast<InstJumpRight&>(**it);
            (void)temp;
            i--;
        }
        catch(const std::bad_cast& e)
        {
            try
            {
                std::list<IInstructions*>::iterator it2 = prog.getInstructionIterator();
                InstJumpLeft &tempbis = dynamic_cast<InstJumpLeft&>(**it2);
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