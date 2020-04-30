#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
    private:
        std::string const   _name;
        int                 _grade;
    public:
        Bureaucrat(std::string name, int grade);
        Bureaucrat();
        Bureaucrat(const Bureaucrat &);
        ~Bureaucrat();
        Bureaucrat &operator=(const Bureaucrat &);

        std::string getName() const;
        int         getGrade() const;

        void        incrementGrade();
        void        decrementGrade();

        class       GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        class       GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

};

std::ostream &operator<<(std::ostream & o, Bureaucrat const & src);

#endif