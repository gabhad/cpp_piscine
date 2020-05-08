#include "Mindopen.hpp"
#include "IInstructions.hpp"

void    executeInstructions(Mindopen &prog)
{
    prog.initializeIterators();
    while (!prog.isInstructionEnd())
    {
        IInstructions *temp = *(prog.getInstructionIterator());
        temp->execute(prog);
        prog.moveInstructionIteratorRight();
    }
    prog.readOutput();
}