/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 10:34:49 by gforns-s          #+#    #+#             */
/*   Updated: 2024/10/03 09:19:17 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class WrongAnimal
{
	protected:
		std::string _type;
	public:
		WrongAnimal();
		WrongAnimal(std::string s);
		WrongAnimal(const WrongAnimal &other);
		WrongAnimal 			&operator=(const WrongAnimal &other);
		std::string		getType() const;
		virtual			~WrongAnimal();
		void	makeSound() const;
};
