#include "Array.hpp"
#include <iostream>

int main (void)
{
 	Array<int>		arr(1);
    try
    {
        std::cout << "arr[0] = " << arr[0] << std::endl;
        arr[0] = 1;
        std::cout << "arr[0] = " << arr[0] << std::endl;
        arr[1] = 2;
        std::cout << "arr[1] = " << arr[1] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "**error : out of bounds**" << std::endl;
    }
    Array<int>		test;
    try
    {
        std::cout << test[10] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "**error : out of bounds**" << std::endl;
    }
}
