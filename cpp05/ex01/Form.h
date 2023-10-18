//
// Created by lilya on 16.08.2023.
//

#ifndef CPP42_FORM_H
#define CPP42_FORM_H
#include "Bureaucrat.h"

class Form {

public:

    Form( const std::string &name, int gradeToSign, int gradeToExecute );
    Form( const Form &src );
    ~Form( void );

    const std::string getName( void ) const;
    const int getGradeToSign( void ) const;
    const int getGradeToExecute( void ) const;
    bool getSignStatus( void );

    void checkGrade( void );
    void checkExecution( const Bureaucrat &src );
    bool checkSignStatus( const Bureaucrat &src );

private:

    Form( void );

    bool _isSigned;
    const std::string _name;
    const int _gradeToSign;
    const int _gradeToExecute;

public:

Class GradeTooHighException: public std::exception {
    virtual const char* what() const throw() {
        return "Grade Too High Exception";
    }
};

Class GradeTooLowException: public std::exception {
    virtual const char* what() const throw() {
        return "Grade too low exception";
    }
};

};

std::oftream &operator <<(std::ofstream &osrt, Form const &info);

#endif //CPP42_FORM_H
