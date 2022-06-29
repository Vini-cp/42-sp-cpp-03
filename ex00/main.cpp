// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "./include/ClapTrap.h"

int main ( void )
{
    std::cout << std::endl << "-------------------- John --------------------" << std::endl;

    ClapTrap ctJohn = ClapTrap( "John" );

    std::cout << std::endl << ctJohn << std::endl;
    ctJohn.attack( "Monster" );
    ctJohn.takeDamage( 3 );
    ctJohn.beRepaired( 4 );
    std::cout << ctJohn << std::endl;

    std::cout << "----------------------------------------------" << std::endl;

    std::cout << std::endl << "-------------------- Will --------------------" << std::endl;

    ClapTrap ctWill = ctJohn;

    ctWill.setName( "Will" );
    std::cout << std::endl << ctWill << std::endl;
    ctWill.attack( "Monster 2" );
    ctWill.takeDamage( 15 );
    std::cout << ctWill << std::endl;
    ctWill.beRepaired( 4 );
    std::cout << ctWill << std::endl;

    std::cout << "----------------------------------------------" << std::endl << std::endl;

    return 0;
}
