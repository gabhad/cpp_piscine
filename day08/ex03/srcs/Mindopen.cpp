#include "Mindopen.hpp"
#include "IInstructions.hpp"

Mindopen::Mindopen()
{
}

Mindopen::Mindopen(const Mindopen & src)
{
    *this = src;
}

Mindopen::~Mindopen()
{
    std::list<IInstructions*>::iterator it = this->_inst.begin();
    std::list<IInstructions*>::iterator it2 = it;
    std::advance(it2,1);
    while (it != this->_inst.end())
    {
        delete *it;
        it = it2;
        std::advance(it2,1);
    }
}

Mindopen &Mindopen::operator=(const Mindopen & rhs)
{
    if (this != &rhs)
    {
        this->_inst = rhs._inst;
        this->_instructionIterator = rhs._instructionIterator;
        this->_prog = rhs._prog;
        this->_it = rhs._it;
        this->_output = rhs._output;
    }
    return *this;
}

void    Mindopen::addInstruction(IInstructions *inst)
{
    this->_inst.push_back(inst);
}

void    Mindopen::addElem(void)
{
    this->_prog.push_back(0);
}

void    Mindopen::incrementPointer(void)
{
    *this->_it = *this->_it + 1;
}
void    Mindopen::decrementPointer(void)
{
    *this->_it = *this->_it - 1;
}
void    Mindopen::moveInstructionIteratorLeft(void)
{
    this->_instructionIterator--;
}
void    Mindopen::moveInstructionIteratorRight(void)
{
    this->_instructionIterator++;
}
void    Mindopen::movePointerLeft(void)
{
    if (this->_it == this->_prog.begin())
        this->_prog.push_front(0);
    this->_it--;
}
void    Mindopen::movePointerRight(void)
{
    std::list<char>::iterator it2 = this->_it;
    it2++;
    if (it2 == this->_prog.end())
        this->_prog.push_back(0);
    this->_it++;
}

void    Mindopen::addChar(char c)
{
    this->_output += c;
}

std::list<IInstructions*>            Mindopen::getInst() const
{
    return this->_inst;
}
std::list<IInstructions*>::iterator  Mindopen::getInstructionIterator() const
{
    return this->_instructionIterator;
}
std::list<char>                     Mindopen::getProg() const
{
    return this->_prog;
}
std::list<char>::iterator           Mindopen::getIt() const
{
    return this->_it;
}
char    Mindopen::getChar()
{
    return *this->_it;
}

void    Mindopen::setIterator(char c)
{
    *this->_it = c;
}

void    Mindopen::initializeIterators()
{
    this->_prog.push_back(0);
    this->_it = this->_prog.begin();
    this->_instructionIterator = this->_inst.begin();
}

bool    Mindopen::isInstructionEnd()
{
    if (this->_instructionIterator == this->_inst.end())
        return 1;
    return 0;
}

void    Mindopen::readOutput()
{
    std::cout << this->_output;
}

