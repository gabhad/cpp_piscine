#include "eval_expr.hpp"

int			main(int argc, char ** argv) 
{ 
	if (argc == 1)
		errorMessage();
	parseArgs(argc, argv);
	return 0;
}

