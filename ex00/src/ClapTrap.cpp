/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 02:04:06 by coder             #+#    #+#             */
/*   Updated: 2022/03/01 03:34:11 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap( void )
{
	_name = "";
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string name )
{
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "Constructor of " <<  _name << " called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &ct )
{
	std::cout << "Copy constructor called" << std::endl;
	ClapTrap(ct.getName());
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "Destructor of " <<  _name << " called" << std::endl;
}

ClapTrap	&ClapTrap::operator=( const ClapTrap &ct )
{
	std::cout << "Copy assignment operator called " << std::endl;
	if(this == &ct)
		return (*this);
	ClapTrap(ct.getName());
	return (*this);
}

void	ClapTrap::attack( const std::string& target )
{
	if (_hitPoints > 0 && _energyPoints > 0)
	{
		_energyPoints--;
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	}
	else if (_hitPoints == 0)
		std::cout << "ClapTrap has no more hit points " << std::endl;
	else
		std::cout << "ClapTrap has no more energy points " << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if (_hitPoints - amount < 0)
		_hitPoints = 0;
	else
		_hitPoints -= amount;
	std::cout << "ClapTrap " << _name << " was attacked, causing " << amount << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (_hitPoints > 0 && _energyPoints > 0)
	{
		_hitPoints += amount;
		_energyPoints--;
		std::cout << "ClapTrap " << _name << " repaired " << amount << " hit points!" << std::endl;
	}
	else if (_hitPoints == 0)
		std::cout << "ClapTrap has no more hit points " << std::endl;
	else
		std::cout << "ClapTrap has no more energy points " << std::endl;
}

void	ClapTrap::printInfos( void )
{
	std::cout << "Name: " << _name << std::endl;
	std::cout << "Hit points: " << _hitPoints << std::endl;
	std::cout << "Energy points: " << _energyPoints << std::endl;
	std::cout << "Attack damage: " << _attackDamage << std::endl;
}

std::string	ClapTrap::getName( void ) const
{
	return (_name);
}
