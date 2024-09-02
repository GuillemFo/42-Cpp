/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 14:47:11 by gforns-s          #+#    #+#             */
/*   Updated: 2024/09/02 16:18:49 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	type = "";
}

Weapon::Weapon(std::string nm)
{
	type = nm;
}

Weapon::~Weapon()
{
	std::cout << "Destructor for Weapon was called" << std::endl;
}
const std::string& Weapon::getType()
{
	return (type);	
}

void Weapon::setType(std::string set)
{
	type = set;
}
