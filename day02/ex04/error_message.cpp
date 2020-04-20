#include "eval_expr.hpp"

void    invalidOperation(void)
{
    std::cout << "Please enter a valid arithmetic expression." << std::cout;
    exit(0);
}

void    errorMessage(void)
{
    std::cout << "usage: ./eval_expr [arithmetic_expression]" << std::endl;
    exit (0);
}