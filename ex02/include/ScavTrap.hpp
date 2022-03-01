/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 13:59:33 by coder             #+#    #+#             */
/*   Updated: 2022/03/01 15:10:36 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:

		ScavTrap( void );
		ScavTrap( std::string name );
		ScavTrap( const ScavTrap &ct );
		~ScavTrap( void );

		ScavTrap	&operator=( const ScavTrap &st );

		void	attack( const std::string& target );
		void	guardGate( void );

};

#endif
