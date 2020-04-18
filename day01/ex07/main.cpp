#include "replace.hpp"

int             main(int argc, char **argv)
{
    std::ifstream   ifs(argv[1]);
    std::string     final;
    std::string     filename;
    std::ofstream   ofs;

    // Error handling
    if (argc != 4)
        usage();
    else if (!ifs.is_open())
        fileclosed();
    
    // Get length of string
    ifs.seekg (0, ifs.end);
    int length = ifs.tellg();
    ifs.seekg (0, ifs.beg);
    char *buffer = new char[length];

    // Read and replace
    ifs.read (buffer,length);
    ifs.close();
    final = string_replace(buffer, argv[2], argv[3]);
    
    // Get filename
    filename = strtoupper(argv[1]);
    filename.append(".replace");

    // Write to output
    ofs.open(filename);
    ofs << final;
    ofs.close();
    return 0;
}