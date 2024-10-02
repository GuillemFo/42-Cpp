/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 08:49:51 by gforns-s          #+#    #+#             */
/*   Updated: 2024/10/02 08:37:06 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <ClapTrap.hpp>
#include <iostream>

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap(const ScavTrap &a);
		ScavTrap 	&operator=(const ScavTrap &a);
		void		guardGate();
		void		attack(const std::string& target);
};
