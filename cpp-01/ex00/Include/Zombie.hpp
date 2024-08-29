/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 10:39:02 by gforns-s          #+#    #+#             */
/*   Updated: 2024/08/29 12:53:54 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

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

Zombie* newZombie( std::string name );
void randomChump( std::string name );