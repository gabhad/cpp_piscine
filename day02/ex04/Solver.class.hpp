#ifndef SOLVER_HPP
# define SOLVER_HPP

#include "eval_expr.hpp"

class Solver
{
private:
    Fixed       *_value;
    char        _operator;
    Solver      *_next;

    static int  _nb_of_words;

public:
    Solver();
    Solver(Fixed *n);
    Solver(char op);
    Solver(Solver const & src);
    ~Solver();

    Solver      &operator=(Solver const &rhs);

    Fixed       *getValue(void) const;
    void        setValue(Fixed *value);
    char        getOperator(void) const;
    void        setOperator(char const c);
    Solver      *getNext(void) const;
    void        setNext(Solver *next);

    static int  getNbOfWords(void);
    static void setNbOfWords(int const nb);
};


#endif