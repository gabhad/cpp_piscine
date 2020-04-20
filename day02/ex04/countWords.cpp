#include "eval_expr.hpp"

int     countWords(std::string const str)
{
    int     word = 0;
    
    for (size_t i = 0; i < str.length(); i++)
    {
        while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
            i++;
        if (str[i])
            word++;
        while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
            i++;
    }
    return word;
}