//
// Created by lilya on 16.08.2023.
//

#include "Bureaucrat.h"

const std::string Bureaucrat::getName( void ) const {
    return this->_name;
}

int Bureaucrat::getGrade( void ) const {
    return this->_grade;
}

Bureaucrat::Bureaucrat():_name("ANY default name"),_grade(1) {}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) {
    this->_grade = copy._grade;

    healthcheck();
}

Bureaucrat::Bureaucrat(const std::string &name, const int grade):_name(name),_grade(grade) {


    healthcheck();
}

void Bureaucrat::healthcheck() {
    if (this->_grade > 150) throw Bureaucrat::GradeTooLowException();
    else if (this->_grade < 1) throw Bureaucrat::GradeTooHighException();
}

int Bureaucrat::incrementGrade() {
    this->_grade += 1;

    healthcheck();

    return this->_grade;
}

int Bureaucrat::decrementGrade() {
    this->_grade -= 1;

    healthcheck();

    return this->_grade;
}

std::ostream &	operator<<( std::ostream & ostr, Bureaucrat const & instance) {
    ostr << instance.getName() << ", Bureaucrat grade " << instance.getGrade();
    return ostr;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy) {
    this->_grade = copy._grade;

    return *this;
}