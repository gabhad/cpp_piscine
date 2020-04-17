#include "replace.hpp"


std::string     string_replace(std::string string, std::string s1, std::string s2)
{
    int         i = 0;
    std::string final;

    if (!s1.compare(s2))
        return (string);

    final = string;
    while (string[i])
    {
        i = string.find(s1, i);
        if ( i > -1 )
        {
            final = string.replace(i, s1.length(), s2);
            i = i + s1.length();
        }
    }
    return (final);

}

std::string     strtoupper(std::string input)
{
    std::string output = input;
    int         i = -1;

    while (output[i++])
        output[i] = toupper(output[i]);
    return output;
}