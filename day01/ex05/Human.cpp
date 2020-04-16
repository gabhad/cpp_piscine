#include "Human.hpp"

Human::Human(void) : _brainRef(*(new Brain))
{
    std::cout << "Human created" << std::endl;
    this->_brain = &(this->_brainRef);
}

Human::~Human()
{
    std::cout << "Human destroyed" << std::endl;
    delete this->_brain;
}

std::string Human::identify(void) const
{
    return this->_brain->identify();
}

Brain       &Human::getBrain(void) const
{
    return this->_brainRef;
}
