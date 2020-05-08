#ifndef MINDOPEN_HPP
# define MINDOPEN_HPP

#include <iostream>
#include <list>

class IInstructions;

void    readFromFile(std::string filename);

class Mindopen
{
    private:
        std::list<IInstructions>            _inst;
        std::list<IInstructions>::iterator  _instructionIterator;
        std::list<char>                     _prog;
        std::list<char>::iterator           _it;
    public:
        Mindopen();
        Mindopen(const Mindopen &);
        ~Mindopen();
        Mindopen &operator=(const Mindopen &);

        void    addInstruction(IInstructions&);
        void    addElem(char);
        void    incrementPointer(void);
        void    decrementPointer(void);
        void    moveInstructionIteratorLeft(void);
        void    moveInstructionIteratorRight(void);
        void    movePointerLeft(void);
        void    movePointerRight(void);

        // Getters
        std::list<IInstructions>            getInst() const;
        std::list<IInstructions>::iterator  getInstructionIterator() const;
        std::list<char>                     getProg() const;
        std::list<char>::iterator           getIt() const;
};

#endif