// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>

class ClapTrap
{
public:

    ClapTrap( void );
    ClapTrap( std::string pName );
    ClapTrap( const ClapTrap& prClapTrap );
    ~ClapTrap( void );

    ClapTrap& operator=( const ClapTrap& prClapTrap );

    void setName( std::string pName );
    std::string getName( void ) const;

    unsigned int getHitPoints( void ) const;
    void setHitPoints( unsigned int pHitPoints );

    unsigned int getEnergyPoints( void ) const;
    void setEnergyPoints( unsigned int pEnergyPoints );

    unsigned int getAttackDamage( void ) const;
    void setAttackDamage( unsigned int pAttackDamage );

    void attack( const std::string& pTarget );
    void takeDamage( unsigned int pAmount );
    void beRepaired( unsigned int pAmount );

protected:

	bool canExecuteAction( void ) const;

private:

    std::string mName;
    unsigned int mHitPoints;
    unsigned int mEnergyPoints;
    unsigned int mAttackDamage;

	std::string getClassName( void ) const;

};

std::ostream& operator<<( std::ostream& os, const ClapTrap& prClapTrap );

#endif
