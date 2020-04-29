#ifndef DEEPCOREMINER_HPP
# define DEEPCOREMINER_HPP

#include "IMiningLaser.hpp"

class DeepCoreMiner : public IMiningLaser
{
    private:

    public:
        DeepCoreMiner();
        DeepCoreMiner(const DeepCoreMiner &);
        ~DeepCoreMiner();
        DeepCoreMiner &operator=(const DeepCoreMiner &);

        virtual void mine(IAsteroid*) = 0;
};

#endif