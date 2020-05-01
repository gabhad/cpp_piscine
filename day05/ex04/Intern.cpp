#include "Intern.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <iostream>

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
    std::string array[3] = {"presidential pardon", "shruberry creation", "robotomy request"};
    Form *form;
 
    if (name.compare(array[0])
        && name.compare(array[1])
        && name.compare(array[2]))
        throw(Intern::UnknownFormException());
    else
    {
        if (!name.compare(array[0]))
            form = new PresidentialPardonForm(target);
        else if (!name.compare(array[1]))
            form = new ShrubberyCreationForm(target);
        else
            form = new RobotomyRequestForm(target);
        std::cout << "Intern creates " << *form << std::endl;
        return form;
    }
}

const char  *Intern::UnknownFormException::what() const throw()
{
    return "Error : Unknown form type";
}