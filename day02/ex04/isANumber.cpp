#include "eval_expr.hpp"

int     isANumber(std::string const str)
{
    for (int i = 0; i < str.length(); i++)
        if (!isdigit(str[i]) && str[i] != '.')
            return 0;
    return 1;
}