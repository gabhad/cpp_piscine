#include <iostream>

template<typename T>
void    iter(T *array, int len, void (&f)(T &))
{
    for (int i = 0; i < len; i++)
        f(array[i]);
}

// ************************************************** //

template< typename T >
void		print_arr(T & data)
{
	std::cout << "Received data: " << data << std::endl;
}

int			main(void)
{
	int		test[] = {
		0, 1, 2, 3, 4, 5, 6, 7, 8, 9
	};
	std::string	strArr[] = {
		"Test1", "Test2", "Test3"
	};

	std::cout << "Testing: " << std::endl;
	iter(test, 10, print_arr);
	std::cout << "--- Will test with different type: string ---" << std::endl;
	iter(strArr, 3, print_arr);
}
