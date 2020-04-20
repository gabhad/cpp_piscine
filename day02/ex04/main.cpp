#include "eval_expr.hpp"

int			main(int argc, char ** argv) 
{ 
	if (argc == 1)
		errorMessage();
	//parseArgs(argc, argv);
	std::cout << "le nombre de mots est de " << countWords(argv[1]) << std::endl;
	return 0;
}

