#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        typedef typename std::stack<T>::container_type::iterator iterator;

        MutantStack() : std::stack<T>() {};
        MutantStack(const MutantStack &src) : std::stack<T>::stack(src) { *this = src; }
        virtual ~MutantStack() {};
        MutantStack &operator=(const MutantStack &rhs)
        {
            std::stack<T>::operator=(rhs);
            return *this;
        };

        iterator    begin() { return std::stack<T>::c.begin(); };
        iterator    end() { return std::stack<T>::c.end(); };


};

#endif