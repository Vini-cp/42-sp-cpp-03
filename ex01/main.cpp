/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 03:18:15 by coder             #+#    #+#             */
/*   Updated: 2022/03/01 16:05:42 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/ScavTrap.hpp"

int main ( void )
{
	ScavTrap john = ScavTrap("John");
	john.attack("Monster");
	john.takeDamage(34);
	john.beRepaired(4);
	john.guardGate();
	john.printInfos();
	john.attack("Monster 2");
	john.takeDamage(15);
	john.printInfos();
	john.guardGate();
	john.takeDamage(56);
	john.printInfos();
	john.attack("Monster 3");
	john.printInfos();
	return 0;
}
