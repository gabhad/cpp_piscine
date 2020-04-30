#ifndef MININGBARGE_HPP
# define MININGBARGE_HPP

class IMiningLaser;
class IAsteroid;

class MiningBarge
{
    private:
        IMiningLaser *_laser[4];
    public:
        MiningBarge();
        MiningBarge(const MiningBarge &);
        ~MiningBarge();
        MiningBarge &operator=(const MiningBarge &);

        void    equip(IMiningLaser*);
        void    mine(IAsteroid*) const;
};

#endif