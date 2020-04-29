#include "DeepCoreMiner.hpp"

DeepCoreMiner::DeepCoreMiner(/*args*/)
{
}

DeepCoreMiner::DeepCoreMiner()
{
}

DeepCoreMiner::DeepCoreMiner(const DeepCoreMiner & src)
{
}

DeepCoreMiner::~DeepCoreMiner()
{
}

DeepCoreMiner &DeepCoreMiner::operator=(const DeepCoreMiner & r)
{
}

void        DeepCoreMiner::mine(IAsteroid *ast)
{
    std::cout << "* mining deep ... got " << ast->beMined(this) << " ! *" << std::endl;
}