// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "../include/ScavTrap.h"

//------------------------------------------------------------------------------

ScavTrap::ScavTrap( void ) : ClapTrap()
{
    setHitPoints( 100 );
    setEnergyPoints( 50 );
    setAttackDamage( 20 );

    std::cout << getClassName() << " default constructor called" << std::endl;
}

//------------------------------------------------------------------------------

ScavTrap::ScavTrap( std::string pName ) : ClapTrap( pName )
{
    setHitPoints( 100 );
    setEnergyPoints( 50 );
    setAttackDamage( 20 );

    std::cout << getClassName() << " constructor of " << getName() << " called" << std::endl;
}

//------------------------------------------------------------------------------

ScavTrap::ScavTrap( const ScavTrap& prScavTrap ) : ClapTrap()
{
    std::cout << "Copy constructor called" << std::endl;
    *this = prScavTrap;
}

//------------------------------------------------------------------------------

ScavTrap::~ScavTrap( void )
{
    std::cout << getClassName() << " destructor of " << getName() << " called" << std::endl;
}

//------------------------------------------------------------------------------

ScavTrap& ScavTrap::operator=( const ScavTrap& prScavTrap )
{
    std::cout << "Copy assignment operator called " << std::endl;
    if ( this == &prScavTrap ) return *this;

    setName( prScavTrap.getName() );
    setHitPoints( prScavTrap.getHitPoints() );
    setEnergyPoints( prScavTrap.getEnergyPoints() );
    setAttackDamage( prScavTrap.getAttackDamage() );

    return *this;
}

//------------------------------------------------------------------------------

std::string ScavTrap::getClassName( void ) const
{
    return "ScavTrap";
}

//------------------------------------------------------------------------------

void ScavTrap::attack( const std::string& pTarget )
{
    if ( canExecuteAction() )
    {
        setEnergyPoints( getEnergyPoints() - 1 );
        std::cout << getClassName() << " " << getName() << " attacks " << pTarget
                  << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
    }
}

//------------------------------------------------------------------------------

void ScavTrap::guardGate( void )
{
    std::cout << getClassName() << " " << getName() << " is now in Gate keeper mode" << std::endl;
}

//------------------------------------------------------------------------------
