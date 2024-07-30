/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 13:51:15 by gforns-s          #+#    #+#             */
/*   Updated: 2024/07/30 15:03:41 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Contacts
{
	private:
		std::string name;
		std::string surname;
		std::string nick;
		std::string phone;
		std::string secret;
	public:
		Contacts();
		std::string	getName();
		std::string	getSurname();
		std::string	getNick();
		std::string	getPhone();
		std::string	getSecret();
		void	setName(std::string s);
		void	setSurname(std::string s);
		void	setNick(std::string s);
		void	setPhone(std::string s);
		void	setSecret(std::string s);
		int	fillContact();
};
