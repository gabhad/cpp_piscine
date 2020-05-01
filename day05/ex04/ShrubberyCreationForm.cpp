#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

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

bool    ShrubberyCreationForm::execute(Bureaucrat const & executor) const
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
        this->createTree();
        return 1;
    }
}

void    ShrubberyCreationForm::createTree() const
{
    std::string     filename;
    std::ofstream   ofs;    

    filename = this->_target;
    filename.append("_shruberry");
    ofs.open(filename);
    ofs << "    ,*-.\n";
    ofs << "    |  |\n";
    ofs << ",.  |  |\n";
    ofs << "| |_|  | ,.\n";
    ofs << "`---.  |_| |\n";
    ofs << "    |  .--`\n";
    ofs << "    |  |\n";
    ofs << "    |  |\n";
    ofs.close();
}