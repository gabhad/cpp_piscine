#include "eval_expr.hpp"

std::string &treatParentheses(std::string *array, int i, int word, Fixed &result)
{
    while (array[i].compare(")"))
    {
        if (!array[i].compare("("))
            array = &treatParentheses(array, i, word, result);
        i++;
        result = workCalc(result, &array[i-3]);
    }
    return *array;
}