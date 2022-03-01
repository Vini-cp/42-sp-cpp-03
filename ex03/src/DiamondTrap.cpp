/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 17:43:31 by coder             #+#    #+#             */
/*   Updated: 2022/03/01 18:10:08 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void )
	: ScavTrap()
{
	FragTrap::setHitPoints(FragTrap::getHitPoints());
	ScavTrap::setEnergyPoints(ScavTrap::getEnergyPoints());
	FragTrap::setAttackDamage(FragTrap::getAttackDamage());
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap( std::string name )
	: ScavTrap(name + "_clap_name")
{
	_name = name;
	FragTrap::setHitPoints(FragTrap::getHitPoints());
	ScavTrap::setEnergyPoints(ScavTrap::getEnergyPoints());
	FragTrap::setAttackDamage(FragTrap::getAttackDamage());
	std::cout << "DiamondTrap constructor of " << name << " called" << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap &ct )
{
	std::cout << "Copy constructor called" << std::endl;
	_name = ct.ScavTrap::getName();
	FragTrap::setHitPoints(ct.FragTrap::getHitPoints());
	ScavTrap::setEnergyPoints(ct.ScavTrap::getEnergyPoints());
	FragTrap::setAttackDamage(ct.FragTrap::getAttackDamage());
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap destructor of " <<  ScavTrap::getName() << " called" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=( const DiamondTrap &ct )
{
	std::cout << "Copy assignment operator called " << std::endl;
	if(this == &ct)
		return (*this);
	_name = ct.ScavTrap::getName();
	FragTrap::setHitPoints(ct.FragTrap::getHitPoints());
	ScavTrap::setEnergyPoints(ct.ScavTrap::getEnergyPoints());
	FragTrap::setAttackDamage(ct.FragTrap::getAttackDamage());
	return (*this);
}

void	DiamondTrap::attack( const std::string& target )
{
	ScavTrap::attack(target);
}

void	DiamondTrap::printInfos( void )
{
	std::cout << _name << " HP:" << FragTrap::getHitPoints() << " EP:" << ScavTrap::getEnergyPoints() << std::endl;
}
