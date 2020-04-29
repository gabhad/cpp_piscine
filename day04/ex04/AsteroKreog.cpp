#include "AsteroKreog.hpp"

AsteroKreog::AsteroKreog() : _name("AsteroKreog")
{
}

AsteroKreog::AsteroKreog(const AsteroKreog & src)
{
}

AsteroKreog::~AsteroKreog()
{
}

AsteroKreog &AsteroKreog::operator=(const AsteroKreog & r)
{
}

std::string     AsteroKreog::beMined(DeepCoreMiner *src) const
{
    (void)src;
    return "Thorite";
}

std::string     AsteroKreog::beMined(StripMiner *src) const
{
    (void)src;
    return "Flavium";
}

std::string     AsteroKreog::getName() const
{
    return this->_name;
}