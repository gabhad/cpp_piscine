#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
                Form("Robotomy Request Form", 72, 45)
{
    this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm() :
                Form("Robotomy Request Form", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & src)
{
    *this = src;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm & rhs)
{
    if (this != &rhs)
        this->_target = rhs._target;
    return *this;
}

bool    RobotomyRequestForm::execute(Bureaucrat const & executor) const
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
        std::cout << "* drilling noises *" << std::endl;
        if (rand()%2)
            std::cout << this->_target << " has been robotized." << std::endl;
        else
            std::cout << this->_target << " escaped robotization." << std::endl;
        return 1;
    }
}
