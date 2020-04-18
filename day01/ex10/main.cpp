#include "includes.hpp"

void    usage(void)
{
    std::cout << "usage : ./cato9tails [filename/text]" << std::endl;
    exit(0);
}

int     main(int argc, char **argv)
{
    std::string     temp;

    if (argc == 1)
        usage();

    for (int i = 1; i < argc; i ++)
    {
        std::ifstream   ifs(argv[i]);
        if (ifs.is_open())
        {
            // Write and empty buffer
            std::cout << temp;
            temp = "";

            // Get length of string
            ifs.seekg (0, ifs.end);
            int length = ifs.tellg();
            ifs.seekg (0, ifs.beg);
            char *buffer = new char[length];

            // Read and replace
            ifs.read (buffer,length);
            std::cout << buffer;
            ifs.close();
        }
        else
        {
            if (temp[0])
                temp.append(" ");
            temp.append(argv[i]);
        }
        if (i == argc - 1)
            std::cout << temp;
    }
    return 0;
}