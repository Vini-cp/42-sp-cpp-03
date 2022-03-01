/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 02:03:43 by coder             #+#    #+#             */
/*   Updated: 2022/03/01 13:51:33 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>

class ClapTrap {

	private:

		std::string _name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;

	public:

		ClapTrap( void );
		ClapTrap( std::string name );
		ClapTrap( const ClapTrap &ct );
		~ClapTrap( void );

		ClapTrap	&operator=( const ClapTrap &ct );

		void		attack( const std::string& target );
		void		takeDamage( unsigned int amount );
		void		beRepaired( unsigned int amount );
		void		printInfos( void );
		int			getHitPoints( void ) const;
		int			getEnergyPoints( void ) const;
		int			getAttackDamage( void ) const;
		std::string	getName( void ) const;
		

};

#endif
