/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 14:47:07 by gforns-s          #+#    #+#             */
/*   Updated: 2024/09/02 18:02:54 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string nm)
{
	name = nm;
}

HumanB::~HumanB()
{
	std::cout << "Destructor for HumanB was called" << std::endl;
}

void HumanB::setWeapon(Weapon& wnm)
{
	B = wnm;
}

void HumanB::attack()
{
	std::cout << name << " attacks with their " << B.getType() << std::endl;
}
