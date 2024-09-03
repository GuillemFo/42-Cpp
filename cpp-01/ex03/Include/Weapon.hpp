/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 14:46:54 by gforns-s          #+#    #+#             */
/*   Updated: 2024/09/03 12:29:44 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Weapon
{
	private:
		std::string type;
	public:
		Weapon(const std::string& type_name);
		~Weapon();
		const std::string& getType()const;
		void setType(const std::string& type);
	
};