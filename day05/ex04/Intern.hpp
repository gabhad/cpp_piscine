#ifndef INTERN_HPP
# define INTERN_HPP

class Form;

#include <iostream>

class Intern
{
    private:

    public:
        Intern();
        Intern(const Intern &);
        ~Intern();
        Intern &operator=(const Intern &);

        Form    *makeForm(std::string name, std::string target);

        class           UnknownFormException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

};

#endif