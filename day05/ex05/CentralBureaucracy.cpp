#include "CentralBureaucracy.hpp"
#include "OfficeBlock.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"

CentralBureaucracy::CentralBureaucracy()
{
    for (size_t i = 0; i < 20; i++)
    {
        this->_offices[i]->setIntern(new Intern);
    }
    
}

CentralBureaucracy::~CentralBureaucracy()
{
}

void        queueUp(std::string &target)
{

}