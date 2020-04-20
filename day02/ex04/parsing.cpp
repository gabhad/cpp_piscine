#include "eval_expr.hpp"

static Sentence  *parseArg(Sentence *expression, std::string input)
{
    std::string         buf;
    std::istringstream  iss;
    Sentence            *temp = expression;

    iss.str(input);
    for (int n = 0; n < countWords(input); n++)
    {
        iss >> buf;
        std::cout << "test1" << std::endl;
        if (expression == NULL)
            expression->setWord(buf);
        std::cout << buf << std::endl;
        std::cout << "test2" << std::endl;
        while (temp->getNext())
            temp = temp->getNext();
        Sentence    mot(buf);
        temp->setNext(&mot);
        std::cout << "ici ?" << std::endl;
    }
    return expression;
}

void	            parseArgs(int argc, char **argv)
{
    Sentence    *expression;
    std::string word;

    for (int i = 1; i < argc; i++)
        expression = parseArg(expression, argv[i]);

    expression->getSentence();
}


// Use istringstream str() function to split into "words"