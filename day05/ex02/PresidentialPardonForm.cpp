#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
                    Form("Presidential Pardon Form", 25, 5)
{
    this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm() :
                    Form("Presidential Pardon Form", 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & src)
{
    *this = src;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm & rhs)
{
    if (this != &rhs)
        this->_target = rhs._target;
    return *this
}

void    PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
}