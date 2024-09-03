/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 14:47:01 by gforns-s          #+#    #+#             */
/*   Updated: 2024/09/03 10:28:47 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string name;
		Weapon A;
	public:
		// HumanA();
		HumanA(std::string n, Weapon& wnm);
		~HumanA();
		void attack();
};