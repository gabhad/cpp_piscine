#include "easyfind.hpp"
#include <list>
#include <iostream>

int main()
{
    std::list<int> lst1;
    lst1.push_back(1);
    lst1.push_back(2);
    lst1.push_back(3);
    lst1.push_back(4);
    lst1.push_back(5);

    int pos = easyfind(lst1, 3);
    if (pos == -1)
        std::cout << "Element not found !" << std::endl;
    else
        std::cout << "Element found at position number " << pos << std::endl;
    return (0);
}