/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 14:46:54 by gforns-s          #+#    #+#             */
/*   Updated: 2024/09/04 08:18:14 by gforns-s         ###   ########.fr       */
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
