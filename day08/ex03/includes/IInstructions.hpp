#ifndef IINSTRUCTIONS_HPP
# define IINSTRUCTIONS_HPP

class Mindopen;

class IInstructions
{
    public:
        virtual         ~IInstructions() {};
        virtual void    execute(Mindopen&) = 0;
};

#endif