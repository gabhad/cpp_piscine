#ifndef ASTEROKREOG_HPP
# define ASTEROKREOG_HPP

#include <iostream>
#include "IAsteroid.hpp"
class DeepCoreMiner;
class StripMiner;

class AsteroKreog : public IAsteroid
{
    private:
        std::string     _name;
    public:
        AsteroKreog();
        AsteroKreog(const AsteroKreog &);
        ~AsteroKreog();
        AsteroKreog &operator=(const AsteroKreog &);

        virtual std::string beMined(DeepCoreMiner *src) const;
        virtual std::string beMined(StripMiner *src) const;
        virtual std::string getName() const;
};

#endif