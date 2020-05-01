#include "OfficeBlock.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"

OfficeBlock::OfficeBlock(Intern *intern, Bureaucrat *sign, Bureaucrat *exec) :
                    _intern(intern), _signBureau(sign), _execBureau(exec) {}

OfficeBlock::OfficeBlock() : _intern(NULL), _signBureau(NULL), _execBureau(NULL) {}

OfficeBlock::~OfficeBlock() {}

void    OfficeBlock::setIntern(Intern &intern)
{
    this->_intern = &intern;
}

void    OfficeBlock::setSigner(Bureaucrat &bur)
{
    this->_signBureau = &bur;
}

void    OfficeBlock::setExecutor(Bureaucrat &bur)
{
    this->_execBureau = &bur;
}

Intern  *OfficeBlock::getIntern() const
{
    return this->_intern;
}

Bureaucrat  *OfficeBlock::getSigner(void) const
{
    return this->_signBureau;
}

Bureaucrat  *OfficeBlock::getExecutor(void) const
{
    return this->_execBureau;
}

void    OfficeBlock::doBureaucracy(std::string name, std::string target)
{
    Form *form;
    try
    {
        if (!this->_intern || !this->_signBureau || !this->_execBureau)
        {
            throw (OfficeBlock::IncompleteOfficeException());
            return ;
        }
        else
        {            
            try
            {
                form = this->_intern->makeForm(name, target);
            }
            catch(const Intern::UnknownFormException & e)
            {
                std::cerr << "Error : Your intern does not know this form. The office resume their card game." << std::endl;
                return;
            }
            try
            {
                this->_signBureau->signForm(*form);
            }
            catch(const Form::GradeTooLowException& e)
            {
                std::cerr << "Error : Your bureaucrat is not allowed to sign this form. The office resume their card game." << std::endl;
                return;
            }
            try
            {
                this->_execBureau->executeForm(*form);
            }
            catch(const Form::GradeTooLowException& e)
            {
                std::cerr << "Error : Your bureaucrat is not allowed to execute this form. The office resume their card game." << std::endl;
                return;
            }
        }
    }
    catch(const OfficeBlock::IncompleteOfficeException & e)
    {
        std::cerr << e.what() << '\n';
    }
}

const char  *OfficeBlock::IncompleteOfficeException::what() const throw()
{
    return "Error : The office is incomplete. Nothing will be done.";
}