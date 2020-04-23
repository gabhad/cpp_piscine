#include "eval_expr.hpp"

int     *treatParentheses(std::string *array, int i, int word, int *order)
{
    while (array[i].compare(")"))
    {
        if (!array[i].compare("("))
            order = treatParentheses(array, i, word, order);
        i++;
        result = workCalc(result, &array[i-3]);
    }
    return order;
}