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
    this->_queuedTargets = 0;
 }

CentralBureaucracy::~CentralBureaucracy()
{
    for (int i = 0; i < 20; i++)
        delete this->_offices[i]->getIntern();
}

void        CentralBureaucracy::feedBureaucrat(Bureaucrat &bu)
{
    for (int i = 0; i < 20; i++)
    {
        if (!this->_offices[i]->getSigner())
            return (this->_offices[i]->setSigner(bu));
        else if (!this->_offices[i]->getExecutor())
            return (this->_offices[i]->setExecutor(bu));
    }
    std::cout << "Sorry, the admistration does not accept bureaucrats unemployment." << std::endl;
}


void        CentralBureaucracy::queueUp(std::string &target)
{
    try
    {
        if (this->_queuedTargets > TARGET_MAX_SIZE)
            throw(CentralBureaucracy::TargetQueueFullException());
        else
            this->_targetQueue[this->_queuedTargets++] = target;
    }
    catch(const CentralBureaucracy::TargetQueueFullException & e)
    {
        std::cerr << e.what() << '\n';
    }
}

void        CentralBureaucracy::doBureaucracy()
{
    std::string form_type[3] = {"presidential pardon", "shruberry creation", "robotomy request"};
    for (int i = 0; i < this->_queuedTargets; i++)
    {
        try
        {
            for (int n = 0; n < 20; n++)
            {                
                try
                {
                    this->_offices[i]->doBureaucracy(form_type[rand()%3], this->_targetQueue[i]);
                    std::cout << "ici" << std::endl;
                }
                catch(const std::exception& e)
                {
                    std::cerr << e.what() << '\n';
                }
            }                
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
}

const char* CentralBureaucracy::TargetQueueFullException::what() const throw()
{
    return "Error : Target queue full. Please try again later. Or do nothing.";
}