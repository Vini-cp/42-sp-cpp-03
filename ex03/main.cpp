// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "./include/DiamondTrap.h"

int main ( void )
{
    DiamondTrap john = DiamondTrap("John");

    std::cout << john << std::endl << std::endl;
    john.attack("Monster");
    john.whoAmI();
    std::cout << john << std::endl << std::endl;

    return 0;
}
