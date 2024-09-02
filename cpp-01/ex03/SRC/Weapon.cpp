/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 14:47:11 by gforns-s          #+#    #+#             */
/*   Updated: 2024/09/02 15:07:01 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	type = "";
}
Weapon::~Weapon()
{
	
}
const std::string& Weapon::getType()
{
	return (type);	
}

void Weapon::setType(std::string set)
{
	type = set;
}
