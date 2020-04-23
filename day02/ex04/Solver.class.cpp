#include "Solver.class.hpp"

static int  _nb_of_words = 0;

Solver::Solver()
{

}

Solver::Solver(Fixed *n) : _value(n)
{
    this->_operator = 0;
    this->_next = NULL;
}

Solver::Solver(char op) : _operator(op)
{
    this->_value = NULL;
    this->_next = NULL;
}

Solver::Solver(Solver const & src)
{
    *this = src;
}

Solver::~Solver()
{

}

Solver      &Solver::operator=(Solver const &rhs)
{
    if (rhs._value)
        this->_value = rhs._value;
    if (rhs._operator)
        this->_operator = rhs._operator;
    if (rhs._next)
        this->_next = rhs._next;
    return *this;
}

Fixed       *Solver::getValue(void) const
{
    return this->_value;
}

void        Solver::setValue(Fixed *value)
{
    this->_value = value;
}

char        Solver::getOperator(void) const
{
    return this->_operator;
}

void        Solver::setOperator(char const c)
{
    this->_operator = c;
}

Solver      *Solver::getNext(void) const
{
    return this->_next;
}

void        Solver::setNext(Solver *next)
{
    this->_next = next;
}

int         Solver::getNbOfWords(void)
{
    return _nb_of_words;
}

void        Solver::setNbOfWords(int const nb)
{
    _nb_of_words = nb;
}

