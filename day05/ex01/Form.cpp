#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(const std::string name, const int signGrade, const int exGrade) :
            _name(name), _signed(0)
{
    try
    {
        if (this->_signGrade > 150 || this->_exGrade > 150)
            throw(Form::GradeTooLowException());
        else if (this->_signGrade < 1 || this->_exGrade < 1)
            throw(Form::GradeTooHighException());
        else
        {
            this->_signGrade = signGrade;
            this->_exGrade = exGrade;
        } 
    }
    catch(Form::GradeTooHighException const &e)
    {
        std::cout << e.what() << std::endl;
    }
    catch(Form::GradeTooLowException const &e)
    {
        std::cout << e.what() << std::endl;
    }
}

Form::Form(const Form & src)
{
    *this = src;
}

Form::~Form()
{
}

Form &Form::operator=(const Form & rhs)
{
    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->_signed = rhs._signed;
        this->_signGrade = rhs._signGrade;
        this->_exGrade = rhs._exGrade;
    }
}

std::string Form::getName() const
{
    return this->_name;
}

bool        Form::getSigned() const
{
    return this->_signed;
}

int         Form::getSignGrade() const
{
    return this->_signGrade;
}

int         Form::getExGrade() const
{
    return this->_exGrade;
}

bool        Form::beSigned(Bureaucrat &bu)
{
    try
    {
        if (bu.getGrade() <= this->_signGrade && !this->_signed)
        {
            throw(Form::GradeTooLowException());
            return 0;
        }
        else if (this->_signed)
        {
            throw(Form::AlreadySignedException());
            return 0;
        }
        else
        {
            bu.signForm(*this);
            this->_signed = 1;
            return 1;
        }
    }
    catch (Form::GradeTooLowException const &e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (Form::AlreadySignedException const &e)
    {
        std::cout << e.what() << std::endl;
    }
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("Error : Grade too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("Error : Grade too low");
}

const char* Form::AlreadySignedException::what() const throw()
{
    return ("Error : Grade too low");
}

std::ostream    &operator<<(std::ostream &o, Form const &rhs)
{
    o << "Form " << rhs.getName() << ", requiring grade " << rhs.getSignGrade() << " to be signed and level " << rhs.getExGrade << "to be executed.";
    if (rhs.getSigned())
        o << "Has been signed already.";
    else
        o << "Has not been signed yet.";
    return o;
}
