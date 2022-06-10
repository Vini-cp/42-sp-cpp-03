// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "./include/FragTrap.h"

int main ( void )
{
    FragTrap john = FragTrap( "John" );
    
    std::cout << john << std::endl << std::endl;
    john.attack( "Monster" );
    john.takeDamage( 34 );
    john.beRepaired( 4 );
    john.highFivesGuys();
    
    std::cout << john << std::endl << std::endl;
    john.attack( "Monster 2" );
    john.takeDamage( 15 );
    
    std::cout << john << std::endl << std::endl;
    john.takeDamage( 56 );
    
    std::cout << john << std::endl << std::endl;
    john.attack( "Monster 3" );
    
    std::cout << john << std::endl << std::endl;
    
    return 0;
}
