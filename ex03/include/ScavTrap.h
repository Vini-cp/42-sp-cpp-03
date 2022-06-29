// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.h"

class ScavTrap : virtual public ClapTrap
{
public:

    ScavTrap( void );
    ScavTrap( std::string pName );
    ScavTrap( const ScavTrap& prScavTrap );
    ~ScavTrap( void );

    ScavTrap& operator=( const ScavTrap& prScavTrap );

    void attack( const std::string& pTarget );
    void guardGate( void );

};

#endif
