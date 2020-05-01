#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"
#include "CentralBureaucracy.hpp"

std::string rand_string(int n)
{
    char    letters[26] = {'a','b','c','d','e','f','g','h','i','j','k','l',
                        'm','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    std::string ran = "";
    for (int i = 0; i < n; i++)
        ran = ran + letters[rand()%26];
    return ran;
}

void    pushBureaucrat(CentralBureaucracy &cb)
{
    Bureaucrat *bu = new Bureaucrat(rand_string(5), rand()%150);
    cb.feedBureaucrat(*bu);
}

int main()
{
    CentralBureaucracy cb;
    for (int i = 0; i < 20; i++)
        pushBureaucrat(cb);
    for (int i = 0; i < 20; i++)
        cb.queueUp(rand_string(8));
    cb.doBureaucracy();
}
