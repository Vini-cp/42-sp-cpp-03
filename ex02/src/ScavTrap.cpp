/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 15:11:01 by coder             #+#    #+#             */
/*   Updated: 2022/03/01 15:32:59 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap( void )
	: ClapTrap()
{
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap( std::string name )
	: ClapTrap(name)
{
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
	std::cout << "ScavTrap constructor of " << name << " called" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &ct )
{
	std::cout << "Copy constructor called" << std::endl;
	setName(ct.getName());
	setHitPoints(ct.getHitPoints());
	setEnergyPoints(ct.getEnergyPoints());
	setAttackDamage(ct.getAttackDamage());
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap destructor of " <<  getName() << " called" << std::endl;
}

ScavTrap	&ScavTrap::operator=( const ScavTrap &ct )
{
	std::cout << "Copy assignment operator called " << std::endl;
	if(this == &ct)
		return (*this);
	setName(ct.getName());
	setHitPoints(ct.getHitPoints());
	setEnergyPoints(ct.getEnergyPoints());
	setAttackDamage(ct.getAttackDamage());
	return (*this);
}

void	ScavTrap::attack( const std::string& target )
{
	if (getHitPoints() > 0 && getEnergyPoints() > 0)
	{
		setEnergyPoints(getEnergyPoints() - 1);
		std::cout << "ScavTrap " << getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
	}
	else if (getHitPoints() == 0)
		std::cout << "ScavTrap " << getName() << " is dead!" << std::endl;
	else
		std::cout << "ScavTrap has no energy points!" << std::endl;
}

void	ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode" << std::endl;
}
