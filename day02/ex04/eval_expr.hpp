#ifndef EVAL_EXPR_HPP
# define EVAL_EXPR_HPP

#include <iostream>
#include <sstream>

#include "Fixed.class.hpp"

void    errorMessage(void);
void    invalidOperation(void);

void    parseArgs(int argc, char **argv);

int     countWords(std::string const str);

#endif