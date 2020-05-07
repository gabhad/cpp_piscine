#include <iostream>
#include "Mindopen.hpp"


void    usage()
{
    std::cout << "usage : ./mindopen [filename] - The file linked must contain mindopen language code" << std::endl;
    exit(0);
}

int main(int argc, char **argv)
{
    if (argc == 1)
        usage();
    readFromFile(argv[1]);
    return(0);
}