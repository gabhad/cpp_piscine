#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>

class Span
{
    private:
        Span();
        unsigned int        _numberOfInts;
        std::vector<int>    _elements;
    public:
        Span(unsigned int num);
        Span(const Span &);
        ~Span();
        Span &operator=(const Span &);

        void    addNumber(int n);
        int     shortestSpan();
        int     longestSpan();

        class   StockageOverloadException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        class   NoSpanToBeFoundException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
};

#endif