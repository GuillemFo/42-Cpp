/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 10:41:18 by gforns-s          #+#    #+#             */
/*   Updated: 2024/10/02 16:46:10 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class Dog : Animal
{
	protected:

	public:
		Dog();
		Dog(std::string s);
		Dog(const Dog &other);
		~Dog();
		Dog &operator=(const Dog &other);
		void makeSound();
};