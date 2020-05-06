#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>

template <typename T>
int easyfind(T &cont, int elem)
{
    typename T::iterator it;
    typename T::iterator itB = cont.begin();
    typename T::iterator itE = cont.end();

    it = find(itB, itE, elem);
    if (it == itE)
        return (-1);
    return (distance(itB, it));
}

#endif