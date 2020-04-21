#ifndef EVAL_EXPR_HPP
# define EVAL_EXPR_HPP

#include <iostream>
#include <sstream>

#include "Fixed.class.hpp"

void        errorMessage(void);
void        invalidOperation(void);

void        parseArgs(int argc, char **argv);

int         countWords(std::string const str);

void        evaluateExpression(std::string *array, int word);

Fixed       opPlus(Fixed &lhs, Fixed &rhs);
Fixed       opMinus(Fixed &lhs, Fixed &rhs);
Fixed       opMultiply(Fixed &lhs, Fixed &rhs);
Fixed       opDivide(Fixed &lhs, Fixed &rhs);

Fixed   &workCalc(Fixed &result, std::string *array);
std::string &treatParentheses(std::string *array, int i, int word, Fixed &result);

#endif