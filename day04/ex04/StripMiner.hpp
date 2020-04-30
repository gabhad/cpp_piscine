#ifndef STRIPMINER_HPP
# define STRIPMINER_HPP

class IMiningLaser;
class IAsteroid;

#include "IMiningLaser.hpp"

class StripMiner : public IMiningLaser
{
    private:

    public:
        StripMiner();
        StripMiner(const StripMiner &);
        ~StripMiner();
        StripMiner &operator=(const StripMiner &);

        virtual void    mine(IAsteroid *ast);
};

#endif