#include "StripMiner.hpp"

StripMiner::StripMiner(/*args*/)
{
}

StripMiner::StripMiner()
{
}

StripMiner::StripMiner(const StripMiner & src)
{
}

StripMiner::~StripMiner()
{
}

StripMiner &StripMiner::operator=(const StripMiner & r)
{
}

void        StripMiner::mine(IAsteroid *ast)
{
    std::cout << "* strip mining ... got " << ast->beMined(this) << " ! *" << std::endl;
}