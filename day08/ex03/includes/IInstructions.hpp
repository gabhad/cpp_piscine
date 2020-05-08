#ifndef IINSTRUCTIONS_HPP
# define IINSTRUCTIONS_HPP

#include <vector>

class IInstructions
{
    public:
        virtual         ~IInstructions() {};
        virtual void    execute(std::vector<char>) = 0;
};

#endif