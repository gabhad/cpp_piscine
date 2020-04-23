#ifndef EVAL_EXPR_HPP
# define EVAL_EXPR_HPP

#include <iostream>
#include <sstream>

#include "Fixed.class.hpp"
#include "Solver.class.hpp"

void        errorMessage(void);
void        invalidOperation(void);

void        parseArgs(int argc, char **argv);

int         countWords(std::string const str);
int         isANumber(std::string const str);

void        evaluateExpression(std::string *array, int word);

Fixed       opPlus(Fixed &lhs, Fixed &rhs);
Fixed       opMinus(Fixed &lhs, Fixed &rhs);
Fixed       opMultiply(Fixed &lhs, Fixed &rhs);
Fixed       opDivide(Fixed &lhs, Fixed &rhs);

Fixed       &workCalc(Fixed &result, std::string *array);
Fixed       &treatParentheses(std::string *array, int i, int word, int *order);

#endif