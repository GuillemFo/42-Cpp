/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 11:28:12 by gforns-s          #+#    #+#             */
/*   Updated: 2024/09/23 10:32:06 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class ClapTrap
{
	private:
		std::string		_name;
		unsigned int	_hit_pts;
		unsigned int	_energy;
		unsigned int	_attack;
	public:
		ClapTrap(std::string a);
		~ClapTrap();
		ClapTrap(const ClapTrap &a);
		
		ClapTrap	&operator=(const ClapTrap &a);
		void		attack(const std::string& target);
		void		takeDamage(unsigned int ammount);
		void		beRepaired(unsigned int ammount);
};
