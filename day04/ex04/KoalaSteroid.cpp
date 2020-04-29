#include "KoalaSteroid.hpp"

KoalaSteroid::KoalaSteroid() : _name("KoalaSteroid")
{
}

KoalaSteroid::KoalaSteroid(const KoalaSteroid & src)
{
}

KoalaSteroid::~KoalaSteroid()
{
}

KoalaSteroid &KoalaSteroid::operator=(const KoalaSteroid & r)
{
}

std::string     KoalaSteroid::getName() const
{
    return this->_name;
}

std::string     KoalaSteroid::beMined(DeepCoreMiner *src) const
{
    (void)src;
    return "Zazium";
}

std::string     KoalaSteroid::beMined(StripMiner *src) const
{
    (void)src;
    return "Krpite";
}
