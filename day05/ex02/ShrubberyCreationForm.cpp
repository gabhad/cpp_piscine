#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
                    Form("Shruberry Creation Form", 145, 137)
{
    this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm() :
                    Form("Shruberry Creation Form", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & src)
{
    *this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm & rhs)
{
    if (this != &rhs)
        this->_target = rhs._target;
    return *this;
}
