/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 16:58:34 by coder             #+#    #+#             */
/*   Updated: 2022/03/01 17:21:52 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"
#include <string>

FragTrap::FragTrap( void )
	: ClapTrap()
{
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap( std::string name )
	: ClapTrap(name)
{
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
	std::cout << "FragTrap constructor of " << name << " called" << std::endl;
}

FragTrap::FragTrap( const FragTrap &ct )
{
	std::cout << "Copy constructor called" << std::endl;
	setName(ct.getName());
	setHitPoints(ct.getHitPoints());
	setEnergyPoints(ct.getEnergyPoints());
	setAttackDamage(ct.getAttackDamage());
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap destructor of " <<  getName() << " called" << std::endl;
}

FragTrap	&FragTrap::operator=( const FragTrap &ct )
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

static bool	compareStr( std::string greet )
{
	for (size_t i = 0; i < greet.length(); i++)
		greet[i] = std::tolower(greet[i]);
	return (greet == "high five");
}

void	FragTrap::highFivesGuys( void )
{
	std::string greeting = "";
	std::cout << "High five:" << std::endl;
	while (!compareStr(greeting))
		std::getline(std::cin, greeting);
}
