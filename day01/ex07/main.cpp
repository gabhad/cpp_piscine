#include "replace.hpp"

/* std::ofstream    write_output(std::string inp)
{
    std::ofstream    output;

    return output;
}*/

int             main(int argc, char **argv)
{
    std::ifstream   ifs(argv[1]);
    std::string     buffer;
    std::string     input;
    std::string     final;
    std::string     filename;
    std::ofstream   ofs;

    // Error handling
    if (argc != 4)
        usage();
    else if (!ifs.is_open())
        fileclosed();
    
    // Get file content and modify it
    while (std::getline(ifs, buffer))
        input.append(buffer);
    final = string_replace(input, argv[2], argv[3]);
    std::cout << final << std::endl;

    // Get filename
    filename = strtoupper(argv[1]);
    filename.append(".replace");

    // Write to output
    ofs.open(filename);
    ofs.close();
    return 0;
}