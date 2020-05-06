#include "Array.hpp"
#include <iostream>

int main (void)
{
	Array<int>		arr(1);
    std::cout << "arr[0] = " << arr[0] << std::endl;
    arr[0] = 1;
    std::cout << "arr[0] = " << arr[0] << std::endl;
    std::cout << "Now I will try to add 1th element, should throw exception !" << std::endl;
    arr[1] = 2;
    std::cout << arr[1] << std::endl;
	std::cout << "*** Will to do something with an empty array ***" << std::endl;
    std::cout << "*Creating an empty array" << std::endl;
    Array<int>		test;
    std::cout << "*Trying to reach non existing item" << std::endl;
    std::cout << test[10] << std::endl;
}
