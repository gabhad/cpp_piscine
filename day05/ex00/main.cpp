#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat bu("toto", 30);
    std::cout << bu << std::endl;
    bu.incrementGrade();
    std::cout << bu << std::endl;
    bu.decrementGrade();
    std::cout << bu <<std::endl;
    for (size_t i = 0; i < 30; i++)
    {
        bu.incrementGrade();
    }
    Bureaucrat bz("Tutu", 0);
    Bureaucrat by("Titi", 151);
}