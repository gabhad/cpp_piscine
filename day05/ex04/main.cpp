#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"

int main()
{
    Intern      idiotOne;
    Bureaucrat  hermes = Bureaucrat("Hermes Conrad", 37);
    Bureaucrat  bob = Bureaucrat("Bobby Bobson", 123);
    OfficeBlock ob;
    ob.setIntern(idiotOne);
    ob.setSigner(bob);
    ob.setExecutor(hermes);
    ob.doBureaucracy("mutant pig termination", "Pigley");
    ob.doBureaucracy("presidential pardon", "toto");
    ob.doBureaucracy("shruberry creation", "Titi");
}