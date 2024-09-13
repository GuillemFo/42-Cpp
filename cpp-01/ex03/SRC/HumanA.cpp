/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 14:47:04 by gforns-s          #+#    #+#             */
/*   Updated: 2024/09/13 10:18:11 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string nm, Weapon& wnm) : name(nm), w_typeA(wnm){}

HumanA::~HumanA()
{
	std::cout << "Destructor for HumanA was called" << std::endl;
}

void HumanA::attack()const
{
	std::cout << name << " attacks with their " << w_typeA.getType() << std::endl;
}
