//
// Created by lilya on 26.08.2023.
//

#ifndef CPP42_SCAVTRAP_H
#define CPP42_SCAVTRAP_H
#include "ClapTrap.h"

class ScavTrap: public ClapTrap {

public:

    ScavTrap( ScavTrap const &src );
    ScavTrap( void );
    ScavTrap( const std::string &name );
    ~ScavTrap( void );

    ScavTrap & operator=( ScavTrap const & src );
    ScavTrap & operator=( ClapTrap const & src );

    void guardGate();
    void attack( const std::string & target );

};


#endif //CPP42_SCAVTRAP_H
