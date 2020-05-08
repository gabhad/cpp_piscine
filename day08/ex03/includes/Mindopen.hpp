#ifndef MINDOPEN_HPP
# define MINDOPEN_HPP

#include <iostream>
#include <list>

class IInstructions;

void    readFromFile(std::string filename);

class Mindopen
{
    private:
        std::list<IInstructions>  _inst;
        std::list<char>           _prog;
    public:
        Mindopen();
        Mindopen(const Mindopen &);
        ~Mindopen();
        Mindopen &operator=(const Mindopen &);

        void    addInstruction(IInstructions&);
        void    addElem(char);
};

#endif