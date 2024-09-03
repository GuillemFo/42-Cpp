/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 14:47:11 by gforns-s          #+#    #+#             */
/*   Updated: 2024/09/03 12:30:05 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& type_name) : type(type_name){}

Weapon::~Weapon()
{
	std::cout << "Destructor for Weapon was called" << std::endl;
}
const std::string& Weapon::getType()const
{
	return (type);	
}

void Weapon::setType(const std::string& newType)
{
	type = newType;
}
