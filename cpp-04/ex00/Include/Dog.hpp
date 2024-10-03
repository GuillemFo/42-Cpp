/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 10:41:18 by gforns-s          #+#    #+#             */
/*   Updated: 2024/10/03 09:03:51 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
	protected:

	public:
		Dog();
		Dog(std::string s);
		Dog(const Dog &other);
		~Dog();
		Dog 	&operator=(const Dog &other);
		void	makeSound() const;
};
