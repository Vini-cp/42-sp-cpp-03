// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "../include/ScavTrap.h"

//------------------------------------------------------------------------------

ScavTrap::ScavTrap( void ) : ClapTrap()
{
    mHitPoints = 100;
    mEnergyPoints = 50;
    mAttackDamage = 20;

    std::cout << "ScavTrap default constructor called" << std::endl;
}

//------------------------------------------------------------------------------

ScavTrap::ScavTrap( std::string pName ) : ClapTrap( pName )
{
    mHitPoints = 100;
    mEnergyPoints = 50;
    mAttackDamage = 20;

    std::cout << "ScavTrap name constructor of " << mName << " called" << std::endl;
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
    std::cout << "ScavTrap destructor of " << mName << " called" << std::endl;
}

//------------------------------------------------------------------------------

ScavTrap& ScavTrap::operator=( const ScavTrap& prScavTrap )
{
    std::cout << "Copy assignment operator called " << std::endl;
    if ( this == &prScavTrap ) return *this;

    mName = prScavTrap.getName();
    mHitPoints = prScavTrap.getHitPoints();
    mEnergyPoints = prScavTrap.getEnergyPoints();
    mAttackDamage = prScavTrap.getAttackDamage();

    return *this;
}

//------------------------------------------------------------------------------

void ScavTrap::attack( const std::string& pTarget )
{
    if ( canExecuteAction() )
    {
        mEnergyPoints--;
        std::cout << "ScavTrap " << mName << " attacks " << pTarget
                  << ", causing " << mAttackDamage << " points of damage!" << std::endl;
    }
}

//------------------------------------------------------------------------------

void ScavTrap::guardGate( void )
{
    std::cout << "ScavTrap " << mName << " is now in Gate keeper mode" << std::endl;
}

//------------------------------------------------------------------------------
