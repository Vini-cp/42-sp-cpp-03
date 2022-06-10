// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "../include/ClapTrap.h"

//------------------------------------------------------------------------------

ClapTrap::ClapTrap( void ):
    mName( "" ),
    mHitPoints( 10 ),
    mEnergyPoints( 10 ),
    mAttackDamage( 0 )
{
    std::cout << "Default constructor called" << std::endl;
}

//------------------------------------------------------------------------------

ClapTrap::ClapTrap( std::string pName ):
    mName( pName ),
    mHitPoints( 10 ),
    mEnergyPoints( 10 ),
    mAttackDamage( 0 )
{
    std::cout << "Name constructor of " <<  mName << " called" << std::endl;
}

//------------------------------------------------------------------------------

ClapTrap::ClapTrap( const ClapTrap& prClapTrap )
{
    std::cout << "Copy constructor called" << std::endl;
    *this = prClapTrap;
}

//------------------------------------------------------------------------------

ClapTrap::~ClapTrap( void )
{
    std::cout << "Destructor of " <<  mName << " called" << std::endl;
}

//------------------------------------------------------------------------------

ClapTrap& ClapTrap::operator=( const ClapTrap& prClapTrap )
{
    std::cout << "Copy assignment operator called " << std::endl;
    if ( this == &prClapTrap ) return *this;

    mName = prClapTrap.getName();
    mHitPoints = prClapTrap.getHitPoints();
    mEnergyPoints = prClapTrap.getEnergyPoints();
    mAttackDamage = prClapTrap.getAttackDamage();
    return *this;
}

//------------------------------------------------------------------------------

bool ClapTrap::canExecuteAction( void ) const
{
    if ( mHitPoints > 0 && mEnergyPoints > 0 ) return true;

    if ( mHitPoints == 0 )
    {
        std::cout << "ClapTrap " << mName << " is dead!" << std::endl;
    }
    else if ( mEnergyPoints == 0 )
    {
        std::cout << "ClapTrap has no energy points!" << std::endl;
    }

    return false;
}

//------------------------------------------------------------------------------

void ClapTrap::attack( const std::string& pTarget )
{
    if ( canExecuteAction() )
    {
        mEnergyPoints--;
        std::cout << "ClapTrap " << mName << " attacks " << pTarget
                  << ", causing " << mAttackDamage << " points of damage!" << std::endl;
    }
}

//------------------------------------------------------------------------------

void	ClapTrap::takeDamage( unsigned int pAmount )
{
    if ( mHitPoints < pAmount )
    {
        mHitPoints = 0;
    }
    else
    {
        mHitPoints -= pAmount;
    }

    std::cout << "ClapTrap " << mName << " was attacked, causing "
              << pAmount << " points of damage!" << std::endl;
}

//------------------------------------------------------------------------------

void	ClapTrap::beRepaired( unsigned int pAmount )
{
    if ( canExecuteAction() )
    {
        mHitPoints += pAmount;
        mEnergyPoints--;
        std::cout << "ClapTrap " << mName << " repaired " << pAmount << " hit points!" << std::endl;
    }
}

//------------------------------------------------------------------------------

void ClapTrap::setName( std::string pName )
{
	mName = pName;
}

//------------------------------------------------------------------------------

std::string ClapTrap::getName( void ) const
{
    return mName;
}

//------------------------------------------------------------------------------

unsigned int ClapTrap::getHitPoints( void ) const
{
    return mHitPoints;
}

//------------------------------------------------------------------------------

unsigned int ClapTrap::getEnergyPoints( void ) const
{
    return mEnergyPoints;
}

//------------------------------------------------------------------------------

unsigned int ClapTrap::getAttackDamage( void ) const
{
    return mAttackDamage;
}

//------------------------------------------------------------------------------

std::ostream& operator<<( std::ostream& os, const ClapTrap& prClapTrap )
{
    os << prClapTrap.getName()
       << " HP:" << prClapTrap.getHitPoints()
       << " EP:" << prClapTrap.getEnergyPoints();

    return os;
}

//------------------------------------------------------------------------------
