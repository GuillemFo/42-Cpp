/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 14:47:04 by gforns-s          #+#    #+#             */
/*   Updated: 2024/09/03 12:16:17 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string nm, Weapon& wnm) : name(nm), A(wnm){}

HumanA::~HumanA()
{
	std::cout << "Destructor for HumanA was called" << std::endl;
}

void HumanA::attack()const
{
	std::cout << name << " attacks with their " << A.getType() << std::endl;
}
