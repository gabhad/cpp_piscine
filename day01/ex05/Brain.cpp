#include "Brain.hpp"

#include <sstream>

Brain::Brain(void)
{
    std::cout << "Brain created" << std::endl;

}

Brain::~Brain(void)
{
    std::cout << "Brain destroyed" << std::endl;
}

std::string     Brain::identify(void) const
{   
    std::stringstream addr;
    
    addr << this;
    return (addr.str());
 }