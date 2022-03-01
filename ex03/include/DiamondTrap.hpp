/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 17:32:02 by coder             #+#    #+#             */
/*   Updated: 2022/03/01 17:57:18 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:

		std::string _name;

	public:

		DiamondTrap( void );
		DiamondTrap( std::string name );
		DiamondTrap( const DiamondTrap &ct );
		~DiamondTrap( void );

		DiamondTrap	&operator=( const DiamondTrap &st );

		void	attack( const std::string& target );
		void	printInfos( void );

};

#endif
