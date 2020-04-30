#ifndef IMININGLASER_HPP
# define IMININGLASER_HPP

class IMiningLaser
{
    public:
        virtual ~IMiningLaser() {}
        virtual void mine(IAsteroid *target) = 0;
};

#endif