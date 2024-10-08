/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 13:01:37 by gforns-s          #+#    #+#             */
/*   Updated: 2024/09/13 09:38:42 by gforns-s         ###   ########.fr       */
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
		void	setName(std::string s);
};
Zombie* zombieHorde( int N, std::string name );
