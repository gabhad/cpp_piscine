#include "eval_expr.hpp"

void    evalExpr(std::string *array, int word)
{
    Fixed   result;
    int     i;

    while (i < word)
    {
        if (!array[i].compare("("))
            array = &treatParentheses(array, i, word);
        i++;
    }
}