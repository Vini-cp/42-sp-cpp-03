/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 03:18:15 by coder             #+#    #+#             */
/*   Updated: 2022/03/01 17:05:15 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/FragTrap.hpp"

int main ( void )
{
	FragTrap john = FragTrap("John");
	john.attack("Monster");
	john.takeDamage(34);
	john.beRepaired(4);
	john.highFivesGuys();
	john.printInfos();
	john.attack("Monster 2");
	john.takeDamage(15);
	john.printInfos();
	john.takeDamage(56);
	john.printInfos();
	john.attack("Monster 3");
	john.printInfos();
	return 0;
}
