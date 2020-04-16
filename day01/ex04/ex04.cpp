#include <iostream>

int     main(void)
{
    std::string     string("HI THIS IS BRAIN");
    std::string     *ptr;
    std::string     &ref = string;
    
    ptr = &string;
    std::cout << *ptr << std::endl;
    std::cout << ref << std::endl;
    return 0;
}