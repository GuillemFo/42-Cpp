/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 13:52:14 by gforns-s          #+#    #+#             */
/*   Updated: 2024/08/26 15:34:10 by gforns-s         ###   ########.fr       */
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
	do
	{
		std::cout << "Please, introduce the NAME of your contact:" << std::endl;
		getline(std::cin, tmp);
		if (std::cin.eof())
			exit (1);
	}
	while (tmp.empty());
	name = tmp;
	do
	{
		std::cout << "Please, introduce the SURNAME of your contact:" << std::endl;
		getline(std::cin, tmp);
		if (std::cin.eof())
			exit (1);
	}
	while (tmp.empty());
	surname = tmp;
	do
	{
		std::cout << "Please, introduce the NICK of your contact:" << std::endl;
		getline(std::cin, tmp);
		if (std::cin.eof())
			exit (1);
	}
	while (tmp.empty());
	nick = tmp;
	do
	{
		std::cout << "Please, introduce the PHONE NUMBER of your contact:" << std::endl;
		getline(std::cin, tmp);
		if (std::cin.eof())
			exit (1);
		else if (!tmp.empty())
		{
			size_t i = 0;
			while (i < tmp.length())
			{
				if (!isdigit(tmp[i]))
				{
					tmp = "";
					std::cout << "Only numbers allowed" << std::endl;
					break;
				}
				i++;
			}
		}
	}
	while (tmp.empty());
	phone = tmp;
	do
	{
		std::cout << "Please, introduce the DARKEST SECRET of your contact:" << std::endl;
		getline(std::cin, tmp);
		if (std::cin.eof())
			exit (1);
	}
	while (tmp.empty());
	secret = tmp;
	return (0);
}


int	Contacts::printContact_small()
{
	unsigned long length = 10;
	if (getName() == "")
		return (1);
	std::cout << " ";
	if (name.length() > length)
		std::cout << name.substr(0, length -1) << ".";
	else if (name.length() < length)
	{
		int i = length - name.length();
		while (i > 0)
		{
			std::cout << " ";
			i--;
		}
		std::cout << name;
	}
	else
		std::cout << name;
	std::cout << " | ";
	if (surname.length() > length)
		std::cout << surname.substr(0, length -1) << ".";
	else if (surname.length() < length)
	{
		int i = length - surname.length();
		while (i > 0)
		{
			std::cout << " ";
			i--;
		}
		std::cout << surname;
	}
	else
		std::cout << surname;
	std::cout << " | ";
	if (nick.length() > length)
		std::cout << nick.substr(0, length -1) << ".";
	else if (nick.length() < length)
	{
		int i = length - nick.length();
		while (i > 0)
		{
			std::cout << " ";
			i--;
		}
		std::cout << nick;
	}
	else
		std::cout << nick;
	std::cout << std::endl;
	return (0);
}

int	Contacts::printContact_big()
{
	if (getName() == "")
		return (1);
	std::cout << "Contact: " << name << " | " << surname << " | " << nick << " | " << phone << " | " << secret << std::endl;
	std::cout << std::endl;
	return (0);
}
