/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 10:34:49 by gforns-s          #+#    #+#             */
/*   Updated: 2024/10/03 11:46:21 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Animal
{
	protected:
		std::string _type;
	public:
		Animal();
		Animal(std::string s);
		Animal(const Animal &other);
		Animal 			&operator=(const Animal &other);
		std::string		getType() const;
		virtual			~Animal();
		virtual	void	makeSound() const;
		/*	This is for testing deep or shallow copies*/
		virtual  void setType(std::string a);
};
