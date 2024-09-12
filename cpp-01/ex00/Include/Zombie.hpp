/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 10:39:02 by gforns-s          #+#    #+#             */
/*   Updated: 2024/09/12 09:35:14 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class	Zombie
{
	private:
		std::string	name;
	public:
		Zombie();
		Zombie(std::string s);
		~Zombie();
		void announce( void );
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);
