//
// Created by lilya on 26.08.2023.
//
#include "ClapTrap.h"
#include "ScavTrap.h"

int main ( void ) {
    {
        ClapTrap jon("Jon");

        jon.attack("Dude");
        jon.takeDamage(3);
        jon.status();
        jon.beRepaired(3);
        jon.status();
    }
    {
       ScavTrap  jon("Scav-jon");

        jon.attack("Scav-Dude");
        jon.takeDamage(3);
        jon.status();
        jon.beRepaired(3);
        jon.status();
    }

    return 0;
}