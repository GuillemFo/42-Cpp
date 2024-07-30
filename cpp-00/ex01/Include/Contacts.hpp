/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 13:51:15 by gforns-s          #+#    #+#             */
/*   Updated: 2024/07/30 09:37:39 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Contacts
{
	private:
		int			index;
		std::string name;
		std::string surname;
		std::string nick;
	public:
		Contacts(int x, std::string a, std::string b, std::string c);
		int 		getIndex();
		std::string getName();
		std::string getSurname();
		std::string getNick();
};
