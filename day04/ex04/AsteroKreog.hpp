#ifndef ASTEROKREOG_HPP
# define ASTEROKREOG_HPP

#include "IAsteroid.hpp"

class AsteroKreog : public IAsteroid
{
    private:
        std::string     _name;
    public:
        AsteroKreog();
        AsteroKreog(const AsteroKreog &);
        ~AsteroKreog();
        AsteroKreog &operator=(const AsteroKreog &);

        virtual std::string beMined(DeepCoreMiner *) const;
        virtual std::string beMined(StripMiner *) const;
        virtual std::string getName() const;

};

#endif