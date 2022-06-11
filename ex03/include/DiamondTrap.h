// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

# include "FragTrap.h"
# include "ScavTrap.h"

class DiamondTrap : public FragTrap, public ScavTrap
{
public:

    DiamondTrap( void );
    DiamondTrap( std::string pName );
    DiamondTrap( const DiamondTrap& prDiamondTrap );
    ~DiamondTrap( void );

    DiamondTrap& operator=( const DiamondTrap& prDiamondTrap );

    void attack( const std::string& target );
	void whoAmI( void ) const;

	std::string getName( void ) const;

private:

    std::string mName;
};

std::ostream& operator<<( std::ostream& os, const DiamondTrap& prDiamondTrap );

#endif
