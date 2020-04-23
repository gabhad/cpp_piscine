#include "eval_expr.hpp"

int			main(int argc, char ** argv) 
{ 
	if (argc == 1)
		errorMessage();
	else if (argc == 2 && isANumber(argv[1]))
	{
		std::cout << "The answer is " << argv[1] << std::endl;
		return 0;
	}
	else if (argc == 2 && !isANumber(argv[1]))
		errorMessage();
	parseArgs(argc, argv);
	return 0;
}

