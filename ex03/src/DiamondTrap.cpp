// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "../include/DiamondTrap.h"

//------------------------------------------------------------------------------

DiamondTrap::DiamondTrap( void ):
    ScavTrap(),
    mName( "" )
{
    FragTrap::setHitPoints( FragTrap::getHitPoints() );
    ScavTrap::setEnergyPoints( ScavTrap::getEnergyPoints() );
    FragTrap::setAttackDamage( FragTrap::getAttackDamage() );
    std::cout << "DiamondTrap default constructor called" << std::endl;
}

//------------------------------------------------------------------------------

DiamondTrap::DiamondTrap( std::string pName ):
    ScavTrap( pName + "_clap_name" ),
    mName( pName )
{
    FragTrap::setHitPoints( FragTrap::getHitPoints() );
    ScavTrap::setEnergyPoints( ScavTrap::getEnergyPoints() );
    FragTrap::setAttackDamage( FragTrap::getAttackDamage() );
    std::cout << "DiamondTrap constructor of " << mName << " called" << std::endl;
}

//------------------------------------------------------------------------------

DiamondTrap::DiamondTrap( const DiamondTrap& prDiamondTrap )
{
    std::cout << "Copy constructor called" << std::endl;
    *this = prDiamondTrap;
}

//------------------------------------------------------------------------------

DiamondTrap::~DiamondTrap( void )
{
    std::cout << "DiamondTrap destructor of " <<  ScavTrap::getName() << " called" << std::endl;
}

//------------------------------------------------------------------------------

DiamondTrap& DiamondTrap::operator=( const DiamondTrap& prDiamondTrap )
{
    std::cout << "Copy assignment operator called " << std::endl;
    if ( this == &prDiamondTrap ) return (*this);

    mName = prDiamondTrap.getName();
    FragTrap::setHitPoints( prDiamondTrap.FragTrap::getHitPoints() );
    ScavTrap::setEnergyPoints( prDiamondTrap.ScavTrap::getEnergyPoints() );
    FragTrap::setAttackDamage( prDiamondTrap.FragTrap::getAttackDamage() );
    
    return *this;
}

//------------------------------------------------------------------------------

void DiamondTrap::attack( const std::string& pTarget )
{
    ScavTrap::attack( pTarget );
}

//------------------------------------------------------------------------------

std::string DiamondTrap::getName( void ) const
{
    return mName;
}

//------------------------------------------------------------------------------

void DiamondTrap::whoAmI( void ) const
{
    std::cout << "DiamondTrap name: " << mName << std::endl;
    std::cout << "ClapTrap name:    " << ScavTrap::getName() << std::endl;
}

//------------------------------------------------------------------------------

std::ostream& operator<<( std::ostream& os, const DiamondTrap& prDiamondTrap )
{
    os << prDiamondTrap.getName()
       << " HP:" << prDiamondTrap.FragTrap::getHitPoints()
       << " EP:" << prDiamondTrap.ScavTrap::getEnergyPoints();

    return os;
}

//------------------------------------------------------------------------------