// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "./include/ClapTrap.h"

int main ( void )
{
    ClapTrap ctJohn = ClapTrap( "John" );

	std::cout << std::endl << ctJohn << std::endl;
    ctJohn.attack( "Monster" );
    ctJohn.takeDamage( 3 );
    ctJohn.beRepaired( 4 );
    std::cout << ctJohn << std::endl << std::endl;


    ClapTrap ctWill = ctJohn;

	ctWill.setName( "Will" );
	std::cout << std::endl << ctWill << std::endl;
    ctWill.attack( "Monster 2" );
    ctWill.takeDamage( 15 );
    std::cout << ctWill << std::endl;
    ctWill.beRepaired( 4 );
    std::cout << ctWill << std::endl;

    return 0;
}
