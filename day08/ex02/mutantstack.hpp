#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack
{
    private:
        std::stack<T>   _stack;
    public:
        MutantStack();
        MutantStack(const MutantStack &);
        ~MutantStack();
        MutantStack &operator=(const MutantStack &);

        void    push(T);
        void    pop();
        T       top();
        int     size(void);

        class iterator
        {
            public:
                iterator();
                iterator(const iterator &);
                ~iterator();
                iterator &operator=(const iterator &);

                // surcharge ++
                // surcharge --
                //surcharge ==
                // surcharge !=

        }
};

#endif