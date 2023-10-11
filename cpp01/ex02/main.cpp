//
// Created by lilya on 01.08.2023.
//
#include "iostream"

int main( void ) {

    std::string someString = "HI THIS IS A BRAIN";
    std::string*  stringPTR  = &someString;
    std::string& stringREF = someString;

    std::cout << "Original string address: " << &someString << std::endl;
    std::cout << "using stringPTR: " << &(*stringPTR) << std::endl;
    std::cout << "using stringREF: " << &stringREF << std::endl;

    std::cout << "Original string: " << someString << std::endl;
    std::cout << "stringPTR: " << *stringPTR << std::endl;
    std::cout << "stringREF: " << stringREF << std::endl;

}