/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 13:52:14 by gforns-s          #+#    #+#             */
/*   Updated: 2024/07/29 14:51:57 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Include/Contacts.hpp"

Contacts::Contacts(int x, std::string a, std::string b, std::string c)
{
	index = x;
	name = a;
	surname = b;
	nick = c;
}

int 		Contacts::getIndex()
{
	return (index);
}

std::string Contacts::getName()
{
	return (name);
}

std::string getSurname()
{

}

std::string getNick();
{

}