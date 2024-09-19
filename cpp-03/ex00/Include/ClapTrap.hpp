/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 11:28:12 by gforns-s          #+#    #+#             */
/*   Updated: 2024/09/19 11:35:33 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class ClapTrap
{
	private:
		std::string		_name;
		unsigned int	_hit_pts;
		unsigned int	_energy;
		unsigned int	_attack;
	public:
		void	attack(const std::string& target);
		void	takeDamage(unsigned int ammount);
		void	beRepaired(unsigned int ammount);
};
