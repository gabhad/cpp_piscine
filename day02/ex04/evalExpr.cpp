#include "eval_expr.hpp"

static int  countOperands(std::string *array, int word)
{
    int     i = 0;
    int     count = 0;

    while (i < word)
    {
        if (!array[i].compare("+") || !array[i].compare("-")
            || !array[i].compare("*") || !array[i].compare("/"))
        {
            if (i == 0 || i == word - 1)
                invalidOperation();
            count++;
        }
        i++;
    }
    if (count == 0)
        invalidOperation();
    return count;
}

Fixed       &workCalc(Fixed &result, std::string *array)
{
    Fixed       lhs(stof(array[0]));
    Fixed       rhs(stof(array[2]));
    Fixed       (*ptr[])(Fixed &, Fixed &) = {
                    &opPlus, &opMinus,
                    &opMultiply, &opDivide };
    std::string func[4] = {
                    "+", "-", "*", "/"};
    int         i = 0;

    while (i < 4)
    {
        if (array[1] == func[i])
        {
            result = result + ptr[i](lhs, rhs);
            return (result);
        }
        i++;
    }
    return result;
}

void        evaluateExpression(std::string *array, int word)
{
    Fixed       result;
    int         i = 0;
    int         count = countOperands(array, word);
    int         order[count];

    for (int n = 0; n < count; n++)
        order[n] = 0;

    while (i < word)
    {
        // First priority parentheses
        if (!array[i].compare("("))
            order = treatParentheses(array, i, word, order);
        i++;
    }
    //result = calcPriorities(array, i, word, result);
    std::cout << "result = " << result << std::endl;
    std::cout << "array = ";
    for (int n = 0; n < word; n++)
    {
        std::cout << array[n] << " ";
    }
}