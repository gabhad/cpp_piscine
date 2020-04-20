#include "eval_expr.hpp"

static std::string  parseArg(std::string input)
{
    std::string         buf;
    std::istringstream  iss;
    //int                 words = countWords(input);

    iss.str(input);
    for (int n = 0; n < countWords(input); n++)
    {

    }

}

void	            parseArgs(int argc, char **argv)
{
    std::string final;

    for (int i = 0; i < argc; i++)
    {
        final.append(parseArg(argv[i]));
    }
}


// Use istringstream str() function to split into "words"