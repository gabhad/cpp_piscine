#include "eval_expr.hpp"

void                splitString(std::string expression)
{
    int                 i = countWords(expression);
    std::string         array[i];
    std::istringstream  iss;
    std::string         buf;
    int                 n;
    Solver              *solver;

    solver->setNbOfWords(i);
    std::cout << expression << std::endl;
    exit(0);
    iss.str(expression);
    for (n = 0; n < i; n++)
    {
        iss >> buf;
        if (isdigit(buf[0]))

        array[n] = buf;
    }
    evaluateExpression(array, i);
}

static std::string  parseArg(std::string expression, std::string input)
{
    std::string         buf;
    std::istringstream  iss;

    iss.str(input);
    for (int n = 0; n < countWords(input); n++)
    {
        iss >> buf;
        expression.append(buf);
        expression.append(" ");
    }
    return expression;
}

void	            parseArgs(int argc, char **argv)
{
    std::string     expression;

    for (int i = 1; i < argc; i++)
        expression = parseArg(expression, argv[i]);

    splitString(expression);
}
