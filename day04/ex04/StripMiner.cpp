#include "StripMiner.hpp"

StripMiner::StripMiner()
{
}

StripMiner::StripMiner(const StripMiner & src)
{
    *this = src;
}

StripMiner::~StripMiner()
{
}

StripMiner &StripMiner::operator=(const StripMiner & rhs)
{
    (void)rhs;
    return *this;
}

void        StripMiner::mine(IAsteroid *ast)
{
    std::cout << "* strip mining ... got " << ast->beMined(this) << " ! *" << std::endl;
}
