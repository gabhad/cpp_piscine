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
    InstMoveLeft    inst;
    prog.addInstruction(inst);
}

void    createMoveRight(Mindopen &prog)
{
    InstMoveRight   inst;
    prog.addInstruction(inst);
}

void    createIncrement(Mindopen &prog)
{
    InstIncrement   inst;
    prog.addInstruction(inst);
}

void    createDecrement(Mindopen &prog)
{
    InstDecrement   inst;
    prog.addInstruction(inst);
}

void    createInput(Mindopen &prog)
{
    InstInput       inst;
    prog.addInstruction(inst);
}

void    createOutput(Mindopen &prog)
{
    InstOutput      inst;
    prog.addInstruction(inst);
}

void    createJumpRight(Mindopen &prog)
{
    InstJumpRight   inst;
    prog.addInstruction(inst);
}

void    createJumpLeft(Mindopen &prog)
{
    InstJumpLeft    inst;
    prog.addInstruction(inst);
}
