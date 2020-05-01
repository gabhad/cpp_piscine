#ifndef CENTRALBUREAUCRACY_HPP
# define CENTRALBUREAUCRACY_HPP

class OfficeBlock;
class Bureaucrat;

#include <iostream>

class CentralBureaucracy
{
    private:
        OfficeBlock *_offices[20];
    //    Bureaucrat  *_waitingRoom[];
    //    std::string _targetList[];

        CentralBureaucracy(const CentralBureaucracy &);
        CentralBureaucracy &operator=(const CentralBureaucracy &);

    public:
        CentralBureaucracy();
        ~CentralBureaucracy();

        void    queueUp(std::string &);
        void    doBureaucracy();
};

#endif