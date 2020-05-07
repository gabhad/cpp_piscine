#include "span.hpp"
#include <iostream>

int main() 
{
    Span sp = Span(1);
    try
    {
        sp.addNumber(1);
        sp.addNumber(2);

    }
    catch(const Span::StockageOverloadException& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    Span sp2 = Span(10000);
    for (int i = 0; i < 10000; i++)
        sp2.addNumber(rand());
    try
    {    
        std::cout << sp2.shortestSpan() << std::endl;
    }
    catch(const Span::NoSpanToBeFoundException& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        std::cout << sp2.longestSpan() << std::endl;
    }
    catch(const Span::NoSpanToBeFoundException& e)
    {
        std::cerr << e.what() << std::endl;
    }
}