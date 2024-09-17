/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 14:47:07 by gforns-s          #+#    #+#             */
/*   Updated: 2024/09/17 09:45:20 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string nm) : name(nm), w_typeB(NULL)
{
	name = nm;
}

HumanB::~HumanB()
{
	std::cout << "Destructor for HumanB was called" << std::endl;
}

void HumanB::setWeapon(Weapon& wnm)
{
	w_typeB = &wnm;
}

void HumanB::attack()const
{
	if (HumanB::w_typeB == NULL)
		std::cout << name << " attacks with their hands" << std::endl;
	else
		std::cout << name << " attacks with their " << w_typeB->getType() << std::endl;
}
