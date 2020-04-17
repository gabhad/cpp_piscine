#ifndef REPLACE_HPP
# define REPLACE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

void        usage(void);
void        fileclosed(void);

std::string strtoupper(std::string input);
std::string string_replace(std::string string, std::string s1, std::string s2);

#endif