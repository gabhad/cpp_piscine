#ifndef CENTRALBUREAUCRACY_HPP
# define CENTRALBUREAUCRACY_HPP

#define TARGET_MAX_SIZE 25

class OfficeBlock;
class Bureaucrat;

#include <iostream>

class CentralBureaucracy
{
    private:
        OfficeBlock *_offices[20];
        std::string _targetQueue[TARGET_MAX_SIZE];
        int         _queuedTargets;

        CentralBureaucracy(const CentralBureaucracy &);
        CentralBureaucracy &operator=(const CentralBureaucracy &);

    public:
        CentralBureaucracy();
        ~CentralBureaucracy();

        void        feedBureaucrat(Bureaucrat &);
        void        queueUp(std::string &);
        void        doBureaucracy();

        class TargetQueueFullException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
};

#endif