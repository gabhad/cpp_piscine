#include "span.hpp"
#include <iostream>
#include <vector>

Span::Span(unsigned int num) : _numberOfInts(num)
{
}

Span::Span(const Span & src)
{
    *this = src;
}

Span::~Span()
{
}

Span &Span::operator=(const Span & rhs)
{
    if (this != &rhs)
    {
        this->_numberOfInts = rhs._numberOfInts;
        for (unsigned int i = 0; i < rhs._elements.size(); i++)
            this->addNumber(rhs._elements[i]);
    }
    return *this;
}

void    Span::addNumber(int n)
{
    if (this->_elements.size() == this->_numberOfInts)
        throw Span::StockageOverloadException();
    this->_elements.push_back(n);
}

int     Span::shortestSpan()
{
    if (_elements.size() < 2)
        throw Span::NoSpanToBeFoundException();
    int span;
    std::sort(this->_elements.begin(), this->_elements.end());
    std::vector<int>::iterator it1 = this->_elements.begin();
    std::vector<int>::iterator it2 = this->_elements.begin() + 1;
    span = *it2 - *it1;
    while (it2 != this->_elements.end())
    {
        if (*it2 - *it1 < span)
            span = *it2 - *it1;
        it1++;
        it2++;
    }
    return span;
}

int     Span::longestSpan()
{
    if (_elements.size() < 2)
        throw Span::NoSpanToBeFoundException();
    std::vector<int>::iterator max = std::max_element(this->_elements.begin(), this->_elements.end());
    std::vector<int>::iterator min = std::min_element(this->_elements.begin(), this->_elements.end());
    return (*max - *min);
}

const char* Span::StockageOverloadException::what() const throw()
{
    return ("Error : You cannot add any more element.");
}

const char* Span::NoSpanToBeFoundException::what() const throw()
{
    return ("Error : You do not have enough elements to return a span.");
}