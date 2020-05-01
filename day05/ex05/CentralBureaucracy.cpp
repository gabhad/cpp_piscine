#include "CentralBureaucracy.hpp"
#include "OfficeBlock.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"

CentralBureaucracy::CentralBureaucracy()
{
    Intern  *intern[20];
    for (size_t i = 0; i < 20; i++)
    {
        intern[i] = new Intern;
        this->_offices[i] = new OfficeBlock;
        this->_offices[i]->setIntern(*intern[i]);
    }
 }

CentralBureaucracy::~CentralBureaucracy()
{
    for (int i = 0; i < 21; i++)
        delete this->_offices[i]->getIntern();
}

void        queueUp(std::string &target)
{
    (void)target;
}