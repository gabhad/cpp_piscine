#include "eval_expr.hpp"

std::string &treatParentheses(std::string *array, int i, int word)
{
    int     i = 0;

    while (array[i].compare(")"))
    {
        if (!array[i].compare("("))
            array = &treatParentheses(array, i, word);
        i++;
    }
    return *array;
}