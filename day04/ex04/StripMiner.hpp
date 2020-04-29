#ifndef STRIPMINER_HPP
# define STRIPMINER_HPP

#include "IMiningLaser.hpp"

class StripMiner : public IMiningLaser
{
    private:

    public:
        StripMiner();
        StripMiner(const StripMiner &);
        ~StripMiner();
        StripMiner &operator=(const StripMiner &);

        virtual void    StripMiner::mine(IAsteroid *ast);
};

#endif