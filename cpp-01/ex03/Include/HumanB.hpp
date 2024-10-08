/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 14:46:59 by gforns-s          #+#    #+#             */
/*   Updated: 2024/09/13 10:35:10 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string	name;
		Weapon	*w_typeB; 
	public:
		HumanB(std::string nm);
		~HumanB();
		void	attack()const;
		void	setWeapon(Weapon& wnm);
};
