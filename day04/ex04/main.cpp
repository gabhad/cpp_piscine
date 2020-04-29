#include "MiningBarge.hpp"
#include "AsteroKreog.hpp"
#include "KoalaSteroid.hpp"

#include <iostream>

int main()
{
    MiningBarge barge;
    IMiningLaser *deep = new DeepCoreMiner;
    IMiningLaser *strip = new StripMiner;
    IAsteroid   *kreog = new AsteroKreog;
    IAsteroid *koala = new KoalaSteroid;

    barge.equip(deep);
    barge.equip(strip);
    barge.mine(kreog);
    barge.mine(koala);

    delete deep;
    delete strip;
    delete kreog;
    delete koala;
}