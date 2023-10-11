//
// Created by lilya on 10.08.2023.
//

#ifndef CPP42_HARL_H
#define CPP42_HARL_H
#include "iostream"

class Harl {

public:

    void complain (const std::string level );

private:

    void debug( void );
    void info( void );
    void warning( void );
    void error( void );

};


#endif //CPP42_HARL_H
