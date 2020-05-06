#include "span.hpp"

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
        for (int i = 0; i < rhs._elements.size; i++)
            this->addNumber(rhs._elements[i]);
    }
    return *this;
}

void    Span::addNumber(int n)
{
    if (this->_elements.size == this->_numberOfInts)
        throw Span::StockageOverloadException();
    this->_elements.push_back(n);
}

int     Span::shortestSpan()
{
    if (_elements.size < 2)
        throw Span::NoSpanToBeFoundException();
    // use sort to rearrange
    // calculate the difference between each element, and store the minimum.
    // return final minimum
}

int     Span::longestSpan()
{
    if (_elements.size < 2)
        throw Span::NoSpanToBeFoundException();
    // use min and max 
    // 
}

const char* Span::StockageOverloadException::what() const throw()
{
    return ("Error : You cannot add any more element to your class.");
}

const char* Span::NoSpanToBeFoundException::what() const throw()
{
    return ("Error : You do not have enough elements to return a span.");
}