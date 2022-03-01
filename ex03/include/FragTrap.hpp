/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 16:33:10 by coder             #+#    #+#             */
/*   Updated: 2022/03/01 16:58:27 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:

		FragTrap( void );
		FragTrap( std::string name );
		FragTrap( const FragTrap &ct );
		~FragTrap( void );

		FragTrap	&operator=( const FragTrap &st );

		void	highFivesGuys( void );

};

#endif
