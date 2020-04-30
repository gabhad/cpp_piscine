#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    Bureaucrat              bu("Toto", 30);
    ShrubberyCreationForm   f1("Prout");
    RobotomyRequestForm     f2("Pouet");
    PresidentialPardonForm  f3 ("Nounou");

    std::cout << bu << std::endl;
    std::cout << f1 << std::endl;
    std::cout << f2 << std::endl;
    bu.signForm(f1);
    bu.signForm(f2);
    bu.signForm(f1);
    std::cout << f1 << std::endl;
    std::cout << f2 << std::endl;
}