// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "./include/ScavTrap.h"

int main ( void )
{
    ScavTrap john = ScavTrap( "John" );

    std::cout << std::endl << john << std::endl;
    john.attack( "Monster" );
    john.takeDamage( 34 );
    john.beRepaired( 4 );
    john.guardGate();

    std::cout << john << std::endl << std::endl;

    john.attack( "Monster 2" );
    john.takeDamage( 15 );

    std::cout << john << std::endl << std::endl;

    john.guardGate();
    john.takeDamage( 56 );
    
    std::cout << john << std::endl << std::endl;
    
    john.attack( "Monster 3" );
    
    std::cout << john << std::endl << std::endl;

    return 0;
}
