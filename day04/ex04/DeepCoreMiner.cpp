#include "DeepCoreMiner.hpp"
#include "IAsteroid.hpp"

DeepCoreMiner::DeepCoreMiner()
{
}

DeepCoreMiner::DeepCoreMiner(const DeepCoreMiner & src)
{
    *this = src;
}

DeepCoreMiner::~DeepCoreMiner()
{
}

DeepCoreMiner &DeepCoreMiner::operator=(const DeepCoreMiner & rhs)
{
    (void)rhs;
    return *this;
}

void        DeepCoreMiner::mine(IAsteroid *ast)
{
    std::cout << "* mining deep ... got " << ast->beMined(this) << " ! *" << std::endl;
}