#ifndef OFFICEBLOCK_HPP
# define OFFICEBLOCK_HPP

class Intern;
class Bureaucrat;

#include <iostream>

class OfficeBlock
{
    private:
        Intern      *_intern;
        Bureaucrat  *_signBureau;
        Bureaucrat  *_execBureau;

        OfficeBlock(const OfficeBlock &);
        OfficeBlock &operator=(const OfficeBlock &);

    public:
        OfficeBlock(Intern *, Bureaucrat *, Bureaucrat *);
        OfficeBlock();
        ~OfficeBlock();

        void    setIntern(Intern &);
        void    setSigner(Bureaucrat &);
        void    setExecutor(Bureaucrat &);

        Intern  *getIntern(void) const;

        void    doBureaucracy(std::string name, std::string target);

        class IncompleteOfficeException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
};

#endif