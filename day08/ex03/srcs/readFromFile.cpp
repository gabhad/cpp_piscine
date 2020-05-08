#include <fstream>
#include <iostream>

static void convertInput(std::string input)
{
    std::string inst = "<>+-.,[]";
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
    convertInput(input);
}