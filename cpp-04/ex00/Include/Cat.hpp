/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 10:42:03 by gforns-s          #+#    #+#             */
/*   Updated: 2024/10/02 16:45:53 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class Cat : Animal
{
	protected:

	public:
		Cat();
		Cat(std::string s);
		Cat(const Cat &other);
		~Cat();
		Cat &operator=(const Cat &other);
		void makeSound();
};