#include <fstream>
#include <iostream>
#include "Mindopen.hpp"

static void newInstruction(Mindopen &prog, int i)
{
    void    (*ptr[])(Mindopen &) = {
                &createMoveLeft,
                &createMoveRight,
                &createIncrement,
                &createDecrement,
                &createOutput,
                &createInput,
                &createJumpRight,
                &createJumpLeft };
    ptr[i](prog);
}

static void convertInput(std::string input)
{
    Mindopen    prog;
    std::string inst = "<>+-.,[]";

    for (unsigned int i = 0; i < input.length(); i++)
        for (int j = 0; j < 8; j++)
            if (input[i] == inst[j])
                newInstruction(prog, j);
    executeInstructions(prog);
}

void        readFromFile(std::string filename)
{
    std::ifstream   ifs;
    std::string     input;
    std::string     buf;

    ifs.open(filename);
    if (!ifs.is_open())
    {
        std::cout << "Error : file could not be opened." << std::endl;
        return ;
    }
    while (ifs.good())
    {
        std::getline(ifs, buf);
        input = input + buf;
    }
    ifs.close();
    convertInput(input);
}