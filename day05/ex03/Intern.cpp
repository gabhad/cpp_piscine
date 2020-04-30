#include "Intern.hpp"
#include "Form.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern & src)
{
    *this = src;
}

Intern::~Intern()
{
}

Intern &Intern::operator=(const Intern & rhs)
{
    (void)rhs;
    return *this;
}

Form    *Intern::makeForm(std::string name, std::string target)
{

}

const char  *Intern::UnknownFormException::what() const throw()
{
    return "Error : Unknown form type";
}