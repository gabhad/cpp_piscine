#include <iostream>
#include <fstream>
#include <sstream>

void    fileclosed(void)
{
    std::cout << "I am sorry but I cannot find the file you are asking. Make sure you wrote the good file name and try again." << std::endl;
    exit(0);
}

void    usage(void)
{
    std::cout << "usage: replace [filename][s1][s2]\n";
    std::cout << "\t The program replaces every occurrence of s1 in the designated file with s2, and writes it to a new file." << std::endl;
    exit(0);
}

int     main(int argc, char **argv)
{
    std::ifstream   ifs(argv[1]);
    std::ofstream   ofs;
    std::string     buffer;

    if (argc != 4)
        usage();
    //ifs.open();
    if (!ifs.is_open())
        fileclosed();
    ifs.close();
    return 0;
}