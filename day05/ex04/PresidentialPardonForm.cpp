#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

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
    return *this;
}

bool    PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > this->getExGrade() && this->getSigned())
    {
        throw(Form::GradeTooLowException());
        return 0;
    }
    else if (!this->getSigned())
    {
        throw(Form::UnsignedFormException());
        return 0;
    }
    else
    {
        std::cout << this->_target << " has been pardonned by Zaphod Beeblebrox." << std::endl;
        return 1;
    }
}
