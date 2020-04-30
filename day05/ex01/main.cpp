#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat  bu("Toto", 30);
    Form        f1("B212", 50, 20);
    Form        f2("B325", 25, 15);

    std::cout << bu << std::endl;
    std::cout << f1 << std::endl;
    std::cout << f2 << std::endl;
    bu.signForm(f1);
    bu.signForm(f2);
    bu.signForm(f1);
    std::cout << f1 << std::endl;
    std::cout << f2 << std::endl;
}