#include "Fixed.class.hpp"

#include <sstream>

int main(int argc, char ** argv) 
{ 
	(void)argc;
	std::istringstream	iss;
	iss.str(argv[1]);

	for (int n = 0; n < 7; n++)
	{
		std::string	val;
		iss >> val;
		std::cout << val << '\n';
	}
    return 0;
}

// Use istringstream str() function to split into "words"