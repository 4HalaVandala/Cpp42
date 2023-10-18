//
// Created by lilya on 16.08.2023.
//

#ifndef CPP42_BUREAUCRAT_H
#define CPP42_BUREAUCRAT_H
#include "iostream"
#include "stdexcept"
#include "Form.h"


class Bureaucrat {

public:

    Bureaucrat();
    Bureaucrat(const Bureaucrat &copy);
    Bureaucrat(const std::string &name, const int grade);

    const std::string getName( void ) const;
    int getGrade( void ) const;
    void healthcheck( void );

    int incrementGrade( void );
    int decrementGrade( void );

    bool signForm( Form &form ) const;
    bool executeForm( Form &form ) const;

    Bureaucrat &operator =(const Bureaucrat &copy);

private:

    const std::string _name;
    int _grade;

public:

class GradeTooHighException : public std::exception {
    virtual const char* what() const throw() {
        return "Grade is too high exception";
    }
};

class GradeTooLowException : public std::exception {
    virtual const char* what() const throw() {
        return "Grade is too low exception";
    }
};

};
std::ostream &operator <<( std::ostream &ostr,  Bureaucrat const &instance );


#endif //CPP42_BUREAUCRAT_H
