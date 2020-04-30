#ifndef KOALASTEROID_HPP
# define KOALASTEROID_HPP

class DeepCoreMiner;
class StripMiner;
#include <iostream>
#include "IAsteroid.hpp"

class KoalaSteroid : public IAsteroid
{
    private:
        std::string     _name;
    public:
        KoalaSteroid();
        KoalaSteroid(const KoalaSteroid &);
        ~KoalaSteroid();
        KoalaSteroid &operator=(const KoalaSteroid &);

        virtual std::string beMined(DeepCoreMiner *) const;
        virtual std::string beMined(StripMiner *) const;
        virtual std::string getName() const;
};

#endif