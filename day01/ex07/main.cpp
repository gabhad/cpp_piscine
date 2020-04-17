#include "replace.hpp"

/* std::ofstream    write_output(std::string inp)
{
    std::ofstream    output;

    return output;
}*/

/* std::string     string_replace(std::string string, std::string s1, std::string s2)
{
   // int     n = 0;
    //int     i = 0;
    // Count occurrences of s1 in string
    return ("toto");

} */

std::string     strtoupper(std::string input)
{
    std::string output = input;
    int         i = -1;

    while (output[i++])
        output[i] = toupper(output[i]);
    return output;
}

int             main(int argc, char **argv)
{
    std::ifstream   ifs(argv[1]);
    std::string     buffer;
    std::string     filename;
    std::ofstream   ofs;

    // Error handling
    if (argc != 4)
        usage();
    else if (!ifs.is_open())
        fileclosed();
    
    // Get file content and modify it
    ifs >> buffer;
 //   buffer = string_replace(buffer, argv[2], argv[3]);

    // Get filename
    filename = strtoupper(argv[1]);
    filename.append(".replace");

    // Write to output
    //ofs.open(filename);
    //ofs.close();
    return 0;
}