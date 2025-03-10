#ifndef FORM_HPP
# define FORM_HPP

class Bureaucrat;

#include <iostream>

class Form
{
    private:
        std::string _name;
        bool        _signed;
        int         _signGrade;
        int         _exGrade;

    public:
        Form(const std::string name, const int signGrade, const int exGrade);
        Form();
        Form(const Form &);
        ~Form();
        Form &operator=(const Form &);

        std::string getName() const;
        bool        getSigned() const;
        int         getSignGrade() const;
        int         getExGrade() const;

        bool        beSigned(Bureaucrat &);

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
        class       AlreadySignedException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

};

std::ostream    &operator<<(std::ostream &, Form const &);

#endif