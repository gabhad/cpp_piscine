#include "eval_expr.hpp"

int     invalidOperation(void)
{
    std::cout << "Please enter a valid arithmetic expression." << std::endl;
    exit(0);
}

int     errorMessage(void)
{
    std::cout << "usage: ./eval_expr [arithmetic_expression]" << std::endl;
    exit (0);
}