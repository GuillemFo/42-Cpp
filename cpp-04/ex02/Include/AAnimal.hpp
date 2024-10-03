/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 10:34:49 by gforns-s          #+#    #+#             */
/*   Updated: 2024/10/03 12:49:17 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class AAnimal
{
	protected:
		std::string _type;
	public:
		AAnimal();
		AAnimal(std::string s);
		AAnimal(const AAnimal &other);
		AAnimal 			&operator=(const AAnimal &other);
		std::string		getType() const;
		virtual			~AAnimal();
		virtual	void	makeSound() const = 0;
};
