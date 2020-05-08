#include "Mindopen.hpp"
#include "InstDecrement.hpp"
#include "InstIncrement.hpp"
#include "InstInput.hpp"
#include "InstJumpLeft.hpp"
#include "InstJumpRight.hpp"
#include "InstMoveLeft.hpp"
#include "InstMoveRight.hpp"
#include "InstOutput.hpp"

void    createMoveLeft(Mindopen &prog)
{
    InstMoveLeft *inst = new InstMoveLeft;
    prog.addInstruction(inst);
}

void    createMoveRight(Mindopen &prog)
{
    InstMoveRight *inst = new InstMoveRight;
    prog.addInstruction(inst);
}

void    createIncrement(Mindopen &prog)
{
    InstIncrement *inst = new InstIncrement;
    prog.addInstruction(inst);
}

void    createDecrement(Mindopen &prog)
{
    InstDecrement *inst = new InstDecrement;
    prog.addInstruction(inst);
}

void    createInput(Mindopen &prog)
{
    InstInput *inst = new InstInput;
    prog.addInstruction(inst);
}

void    createOutput(Mindopen &prog)
{
    InstOutput *inst = new InstOutput;
    prog.addInstruction(inst);
}

void    createJumpRight(Mindopen &prog)
{
    InstJumpRight *inst = new InstJumpRight;
    prog.addInstruction(inst);
}

void    createJumpLeft(Mindopen &prog)
{
    InstJumpLeft *inst = new InstJumpLeft;
    prog.addInstruction(inst);
}
