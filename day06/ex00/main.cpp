#include "Convert.hpp"
#include <iostream>

static void usage(void)
{
    std::cout << "usage : ./convert [literal char, int, float, double]" << std::endl;
    exit(0);
}

int         main(int argc, char **argv)
{
    if (argc != 2)
        usage();
    Convert con(argv[1]);
    return 0;
}