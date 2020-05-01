#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    Intern  someRandomIntern;
    Form*   f1;
    Form*   f2;
    Form*   f3;
    Form*   f4;
    f1 = someRandomIntern.makeForm("robotomy request", "Bender");
    f2 = someRandomIntern.makeForm("shruberry creation", "Toto");
    f3 = someRandomIntern.makeForm("presidential pardon", "Tutu");
    f4 = someRandomIntern.makeForm("b201", "Pouet");
    std::cout << *f1 << std::endl;
    std::cout << *f2 << std::endl;
    std::cout << *f3 << std::endl;
}