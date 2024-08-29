/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 10:38:58 by gforns-s          #+#    #+#             */
/*   Updated: 2024/08/29 12:51:59 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	name = "Foo";
}
Zombie::Zombie(std::string s)
{
	name = s;
}

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Destructor was called" << std::endl;
}