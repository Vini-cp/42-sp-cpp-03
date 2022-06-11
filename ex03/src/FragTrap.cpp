// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "../include/FragTrap.h"

//------------------------------------------------------------------------------

FragTrap::FragTrap( void ): ClapTrap()
{
    setHitPoints( 100 );
    setEnergyPoints( 100 );
    setAttackDamage( 30 );
    std::cout << "FragTrap default constructor called" << std::endl;
}

//------------------------------------------------------------------------------

FragTrap::FragTrap( std::string pName ): ClapTrap( pName )
{
    setHitPoints( 100 );
    setEnergyPoints( 100 );
    setAttackDamage( 30 );
    std::cout << "FragTrap constructor of " << getName() << " called" << std::endl;
}

//------------------------------------------------------------------------------

FragTrap::FragTrap( const FragTrap& prFragTrap )
{
    std::cout << "Copy constructor called" << std::endl;
    *this = prFragTrap;
}

//------------------------------------------------------------------------------

FragTrap::~FragTrap( void )
{
    std::cout << "FragTrap destructor of " <<  getName() << " called" << std::endl;
}

//------------------------------------------------------------------------------

FragTrap& FragTrap::operator=( const FragTrap& prFragTrap )
{
    std::cout << "Copy assignment operator called " << std::endl;
    if ( this == &prFragTrap ) return *this;

    setName( prFragTrap.getName() );
    setHitPoints( prFragTrap.getHitPoints() );
    setEnergyPoints( prFragTrap.getEnergyPoints() );
    setAttackDamage( prFragTrap.getAttackDamage() );

    return *this;
}

//------------------------------------------------------------------------------

std::string FragTrap::getClassName( void ) const
{
    return "FragTrap";
}

//------------------------------------------------------------------------------

bool FragTrap::compareStr( std::string pGreet )
{
    for ( size_t i = 0; i < pGreet.length(); i++ )
        pGreet[ i ] = std::tolower( pGreet[ i ] );
    return ( pGreet == "high five" );
}

//------------------------------------------------------------------------------

void FragTrap::highFivesGuys( void )
{
    std::string greeting = "";
    std::cout << "High five:" << std::endl;

    while ( !compareStr( greeting ) )
        std::getline( std::cin, greeting );
}

//------------------------------------------------------------------------------
