/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 13:52:14 by gforns-s          #+#    #+#             */
/*   Updated: 2024/08/03 23:03:46 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.hpp"
#include <cstdlib> 

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

void Contacts::setName(std::string s){name = s;}
void Contacts::setSurname(std::string s){surname = s;}
void Contacts::setNick(std::string s){nick = s;}
void Contacts::setPhone(std::string s){phone = s;}
void Contacts::setSecret(std::string s){secret = s;}

int	Contacts::fillContact()
{
	std::string tmp;
	std::cout << "Please, introduce the NAME of your contact:" << std::endl;
	do
	{
		getline(std::cin, tmp);
		if (std::cin.eof())
			exit (1);
	}
	while (tmp.empty());
	name = tmp;
	std::cout << "Please, introduce the SURNAME of your contact:" << std::endl;
	do
	{
		getline(std::cin, tmp);
		if (std::cin.eof())
			exit (1);
	}
	while (tmp.empty());
	surname = tmp;
	std::cout << "Please, introduce the NICK of your contact:" << std::endl;
	do
	{
		getline(std::cin, tmp);
		if (std::cin.eof())
			exit (1);
	}
	while (tmp.empty());
	nick = tmp;
	std::cout << "Please, introduce the PHONE NUMBER of your contact:" << std::endl;
	do
	{
		getline(std::cin, tmp);
		if (std::cin.eof())
			exit (1);
	}
	while (tmp.empty());
	phone = tmp;
	std::cout << "Please, introduce the DARKEST SECRET of your contact:" << std::endl;
	do
	{
		getline(std::cin, tmp);
		if (std::cin.eof())
			exit (1);
	}
	while (tmp.empty());
	secret = tmp;
	return (0);
}
