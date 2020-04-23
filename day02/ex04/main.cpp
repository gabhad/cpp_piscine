#include "eval_expr.hpp"

int			cleanProgram(Solver *solver)
{
	Solver	*temp;

	while (solver->getNext())
	{
		temp = solver;
		solver->setNext(solver);
		if (temp->getValue())
			delete temp->getValue();
		delete temp;
	}
	return 1;
}

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

