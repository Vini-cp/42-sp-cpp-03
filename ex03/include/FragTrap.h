// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.h"

class FragTrap : virtual public ClapTrap
{
public:

    FragTrap( void );
    FragTrap( std::string pName );
    FragTrap( const FragTrap& prFragTrap );
    ~FragTrap( void );

    FragTrap &operator=( const FragTrap& FragTrap );

    void highFivesGuys( void );

private:
    bool compareStr( std::string pGreet );
};

#endif
