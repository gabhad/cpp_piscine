#include "eval_expr.hpp"

std::string removeRow(std::string *array, int i, int nb, int word)
{
    std::string final[word - nb];
    int         n = 0;
    
    std::cout << "toto" << std::endl;
    while (n <= i)
    {
        final[n] = array[n];
        n++;
    }
    std::cout << "n = " << n << std::endl;
    while (n < word - nb)
    {
        final[n] = array[n + nb];
        n++;
    }
/*     std::cout << "n = " << n << std::endl;
    std::cout << "array = " << *array << std::endl;
    std::cout << "final = " << *final << std::endl;
 */    return *final;
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
            array[0] = std::to_string(result.toFloat());
            return (result);
        }
        i++;
    }
    return result;
}

void        evaluateExpression(std::string *array, int word)
{
    Fixed   result;
    int     i = 0;

    result = workCalc(result, array);
    *array = removeRow(array, i, 2, word);
    while (i < word)
    {
        if (!array[i].compare("("))
            array = &treatParentheses(array, i, word, result);
        i++;
    }
    std::cout << "result = " << result << std::endl;
    std::cout << "array = ";
    for (int n = 0; n < word; n++)
    {
        std::cout << array[n] << " ";
    }
}