/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 14:46:59 by gforns-s          #+#    #+#             */
/*   Updated: 2024/09/03 10:28:48 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon B; 
	public:
		HumanB();
		HumanB(std::string nm);
		~HumanB();
		void	attack();
		void	setWeapon(Weapon& wnm);

};