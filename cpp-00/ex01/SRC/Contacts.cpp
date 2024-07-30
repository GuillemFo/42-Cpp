/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 13:52:14 by gforns-s          #+#    #+#             */
/*   Updated: 2024/07/30 13:07:49 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.hpp"

Contacts::Contacts()
{
	name = "";
	surname = "";
	nick = "";
	phone = "";
	secret = "";
}

std::string Contacts::getName(){return(name);}
std::string Contacts::getSurname(){return(surname);}
std::string Contacts::getNick(){return(nick);}
std::string	Contacts::getPhone(){return(phone);}
std::string	Contacts::getSecret(){return (secret);}

std::string Contacts::setName(std::string s){return(name = s);}
std::string Contacts::setSurname(std::string s){return(surname = s);}
std::string Contacts::setNick(std::string s){return(nick = s);}
std::string Contacts::setPhone(std::string s){return(phone = s);}
std::string Contacts::setSecret(std::string s){return(secret = s);}

int	fillContact()
{
	std::string tmp;
	std::cout << "Please, introduce the NAME of your contact:" << std::endl;
	getline(std::cin, tmp);
	while (std::string tmp )
}