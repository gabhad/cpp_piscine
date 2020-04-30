#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    Bureaucrat bu("Toto", 30);
    Form *f1 = new ShrubberyCreationForm("Prout");
    Form *f2 = new RobotomyRequestForm("Pouet");
    Form *f3 = new PresidentialPardonForm("Nounou");

    std::cout << bu << std::endl;
    std::cout << f1 << std::endl;
    std::cout << f2 << std::endl;
    std::cout << f3 << std::endl;
    bu.signForm(*f1);
    bu.signForm(*f2);
    bu.signForm(*f3);
    std::cout << f1 << std::endl;
    std::cout << f2 << std::endl;
    std::cout << f3 << std::endl;
    bu.executeForm(*f1);
    bu.executeForm(*f2);
    bu.executeForm(*f3);
    Bureaucrat bx("Kevin", 1);
    bx.executeForm(*f3);
    delete f1;
    delete f2;
    delete f3;
}