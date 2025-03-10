#ifndef IASTEROID_HPP
# define IASTEROID_HPP

class DeepCoreMiner;
class StripMiner;

#include <iostream>

class IAsteroid
{
    public:
        virtual ~IAsteroid() {}
        virtual std::string beMined(DeepCoreMiner *src) const = 0;
        virtual std::string beMined(StripMiner *src) const = 0;
        virtual std::string getName() const = 0;
};

#endif