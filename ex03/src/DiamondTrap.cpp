// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "../include/DiamondTrap.h"

//------------------------------------------------------------------------------

DiamondTrap::DiamondTrap( void ) :
    ClapTrap(),
    mName( "" )
{
    mAttackDamage = 30;

    std::cout << "DiamondTrap default constructor called" << std::endl;
}

//------------------------------------------------------------------------------

DiamondTrap::DiamondTrap( std::string pName ) :
    ClapTrap( pName + "_clap_name" ),
    mName( pName )
{
    mAttackDamage = 30;

    std::cout << "DiamondTrap constructor of " << mName << " called" << std::endl;
}

//------------------------------------------------------------------------------

DiamondTrap::DiamondTrap( const DiamondTrap& prDiamondTrap ) : ClapTrap(), FragTrap(), ScavTrap()
{
    std::cout << "Copy constructor called" << std::endl;
    *this = prDiamondTrap;
}

//------------------------------------------------------------------------------

DiamondTrap::~DiamondTrap( void )
{
    std::cout << "DiamondTrap destructor of " << getName() << " called" << std::endl;
}

//------------------------------------------------------------------------------

DiamondTrap& DiamondTrap::operator=( const DiamondTrap& prDiamondTrap )
{
    std::cout << "Copy assignment operator called " << std::endl;
    if ( this == &prDiamondTrap ) return (*this);

    mName = prDiamondTrap.getName();
    mHitPoints = prDiamondTrap.getHitPoints();
    mEnergyPoints = prDiamondTrap.getEnergyPoints();
    mAttackDamage = prDiamondTrap.getAttackDamage();
    
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
    std::cout << "ClapTrap name:    " << ClapTrap::getName() << std::endl;
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
