/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 03:18:15 by coder             #+#    #+#             */
/*   Updated: 2022/03/01 17:49:07 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/DiamondTrap.hpp"

int main ( void )
{
	DiamondTrap john = DiamondTrap("John");
	john.printInfos();
	john.attack("Monster");
	john.printInfos();
	return 0;
}
