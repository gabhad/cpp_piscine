#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    try
    {
        if (grade > 150)
            throw Bureaucrat::GradeTooLowException();
        else if (grade < 1)
            throw Bureaucrat::GradeTooHighException();
        else
            this->_grade = grade;
    }
    catch(Bureaucrat::GradeTooHighException const &e)
    {
        std::cout << e.what() << std::endl;
    }
    catch(Bureaucrat::GradeTooLowException const &e)
    {
        std::cout << e.what() << std::endl;
    }
}

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const Bureaucrat & src)
{
    *this = src;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat & rhs)
{
    if (this != &rhs)
        this->_grade = rhs._grade;
    return *this;
}

std::string Bureaucrat::getName() const
{
    return this->_name;
}

int         Bureaucrat::getGrade() const
{
    return this->_grade;
}

void        Bureaucrat::incrementGrade()
{
    try 
    {
        if (this->_grade == 1)
            throw Bureaucrat::GradeTooHighException();
        else
            this->_grade--;
    }
    catch(Bureaucrat::GradeTooHighException const &e)
    {
        std::cout << e.what() << std::endl;
    }

}

void        Bureaucrat::decrementGrade()
{
    try 
    {
        if (this->_grade == 150)
            throw Bureaucrat::GradeTooLowException();
        else
            this->_grade++;
    }
    catch(Bureaucrat::GradeTooLowException const &e)
    {
        std::cout << e.what() << std::endl;
    }

}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Error : Grade too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Error : Grade too low");
}

std::ostream &operator<<(std::ostream & o, Bureaucrat const & src)
{
    o << src.getName() << ", bureaucrat grade " << src.getGrade() << ".";
    return o;
}
