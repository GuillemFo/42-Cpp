/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 13:52:14 by gforns-s          #+#    #+#             */
/*   Updated: 2024/08/29 09:36:13 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	name = "";
	surname = "";
	nick = "";
	phone = "";
	secret = "";
}

std::string Contact::getName(){return(name);}
std::string Contact::getSurname(){return(surname);}
std::string Contact::getNick(){return(nick);}
std::string	Contact::getPhone(){return(phone);}
std::string	Contact::getSecret(){return (secret);}

void Contact::setName(std::string s){name = s;}
void Contact::setSurname(std::string s){surname = s;}
void Contact::setNick(std::string s){nick = s;}
void Contact::setPhone(std::string s){phone = s;}
void Contact::setSecret(std::string s){secret = s;}

std::string	Contact::trim(const std::string& str)
{
	size_t first = str.find_first_not_of(' ');
	if (first == std::string::npos)
		return ("");
	size_t	last = str.find_last_not_of(' ');
	return (str.substr(first, (last - first +1)));
}

int	Contact::fillContact()
{
	std::string tmp;
	do
	{
		std::cout << "Please, introduce the NAME of your contact:" << std::endl;
		getline(std::cin, tmp);
		if (std::cin.eof())
			exit (1);
		tmp = trim(tmp);
	}
	while (tmp.empty());
	name = tmp;
	do
	{
		std::cout << "Please, introduce the SURNAME of your contact:" << std::endl;
		getline(std::cin, tmp);
		if (std::cin.eof())
			exit (1);
		tmp = trim(tmp);
	}
	while (tmp.empty());
	surname = tmp;
	do
	{
		std::cout << "Please, introduce the NICK of your contact:" << std::endl;
		getline(std::cin, tmp);
		if (std::cin.eof())
			exit (1);
		tmp = trim(tmp);
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
		tmp = trim(tmp);
	}
	while (tmp.empty());
	secret = tmp;
	return (0);
}


int	Contact::printContact_small()
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

int	Contact::printContact_big()
{
	if (getName() == "")
		return (1);
	std::cout << "Contact info:" << std::endl << "Name: " << name << std::endl << "Surname: " << surname << std::endl << "Nick: "  << nick << std::endl << "Phone: " << phone << std::endl << "Secret: " << secret << std::endl;
	std::cout << std::endl;
	return (0);
}
