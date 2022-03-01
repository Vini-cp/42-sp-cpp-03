/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 03:18:15 by coder             #+#    #+#             */
/*   Updated: 2022/03/01 13:56:43 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/ClapTrap.hpp"

int main ( void )
{
	ClapTrap ctJohn = ClapTrap("John");
	ctJohn.attack("Monster");
	ctJohn.takeDamage(3);
	ctJohn.beRepaired(4);
	ctJohn.printInfos();
	ClapTrap ctWill;
	ctWill = ctJohn;
	ctWill.printInfos();
	return 0;
}
