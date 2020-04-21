#include "eval_expr.hpp"

Fixed   &workCalc(Fixed &result, std::string *array)
{
    Fixed   lhs(stof(array[0]));
    Fixed   rhs(stof(array[2]));

    // inserer array de pointeurs sur fonctions membres comme dans les exos day01
}

void    evalExpr(std::string *array, int word)
{
    Fixed   result;
    int     i;

    while (i < word)
    {
        if (!array[i].compare("("))
            array = &treatParentheses(array, i, word, result);
        i++;
    }
}