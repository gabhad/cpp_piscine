#ifndef MINDOPEN_HPP
# define MINDOPEN_HPP

#include <iostream>
#include <list>

class IInstructions;

class Mindopen
{
    private:
        std::list<IInstructions*>           _inst;
        std::list<IInstructions*>::iterator _instructionIterator;
        std::list<char>                     _prog;
        std::list<char>::iterator           _it;
        std::string                         _output;
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
        void    addChar(char c);

        // Getters
        std::list<IInstructions*>           getInst() const;
        std::list<IInstructions*>::iterator getInstructionIterator() const;
        std::list<char>                     getProg() const;
        std::list<char>::iterator           getIt() const;

        void    setIterator(char c);
        void    initializeIterators(void);
        bool    isInstructionEnd(void);
        void    readOutput(void);
};

void    readFromFile(std::string);
void    createMoveLeft(Mindopen&);
void    createMoveRight(Mindopen&);
void    createIncrement(Mindopen&);
void    createDecrement(Mindopen&);
void    createInput(Mindopen&);
void    createOutput(Mindopen&);
void    createJumpRight(Mindopen&);
void    createJumpLeft(Mindopen&);
void    executeInstructions(Mindopen&);

#endif