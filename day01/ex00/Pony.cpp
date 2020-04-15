#include "Pony.hpp"

Pony::Pony(std::string name) : _name(name)
{
    std::cout << this->_name << " vient de naitre. Quel évènement merveilleux !" << std::endl;
}

Pony::~Pony()
{
    std::cout << this->_name << " a vécu une vie magnifique. Il est maintenant temps pour lui de retourner à Ponyland.";
    std::cout << std::endl;
}

void    Pony::gambade(void)
{
    std::cout << this->_name << " se promène allègrement dans la prairie." << std::endl;
}

void    Pony::broute(void)
{
    std::cout << this->_name << " se ravitaille." << std::endl;
}
