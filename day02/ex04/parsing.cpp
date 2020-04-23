#include "eval_expr.hpp"

static Solver        *newElem(std::string buf)
{
    Solver      *sol = new Solver;

    std::string op("+-=/()");
    
    if (isANumber(buf))
    {
        Fixed   *fixed = new Fixed(std::stof(buf));
        solver->setValue(fixed);
        return solver;
    }
    else if (buf.length() == 1)
    {
        for (int i = 0; i < op.length(); i++)
            if (buf[0] == op[i])
            {
                solver->setOperator(buf[0]);
                return solver;
            }
    }
    cleanProgram(solver);
    errorMessage();
    return (0);
}

void                splitString(std::string expression)
{
    int                 i = countWords(expression);
    std::string         array[i];
    std::istringstream  iss;
    std::string         buf;
    Solver              solver;

    iss.str(expression);
    iss >> buf;
    solver = newElem(solver, buf);
    temp = solver;
    for (int n = 1; n < i; n++)
    {
        iss >> buf;
        temp->setNext(newElem());
        array[n] = buf;
    }
    evaluateExpression(array, i);
    cleanProgram(solver);
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
