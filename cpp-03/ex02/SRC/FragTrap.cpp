/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 09:30:22 by gforns-s          #+#    #+#             */
/*   Updated: 2024/10/02 10:07:25 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <FragTrap.hpp>

FragTrap::FragTrap() : ClapTrap("Frag default")
{
	std::cout << "FragTrap default constructor called " << std::endl;
	this->_hit_pts = 100;
	this->_energy = 100;
	this->_attack = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor " << name << " called " << std::endl;
	this->_hit_pts = 100;
	this->_energy = 100;
	this->_attack = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor was called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = other;
}

FragTrap 	&FragTrap::operator=(const FragTrap &a)
{
		if (this != &a)
	{
		this->_attack = a._attack;
		this->_energy = a._energy;
		this->_hit_pts = a._hit_pts;
		this->_name = a._name;
	}
	return (*this);
}

void FragTrap::highFivesGuys()
{
	std::string ans;
	std::cout << "high fives request" << std::endl;
	std::cout << "Do you agree? yes / no" << std::endl;
	while (ans.empty() || ans.compare("yes") || ans.compare("no"))
	{
		getline(std::cin, ans);
		if (std::cin.eof())
			return;
		if (ans == "yes")
		{
			std::cout << "Thanks, well played" << std::endl;
			return;
		}
		else if (ans == "no")
		{
			std::cout << "Sad..." << std::endl;
			return;
		}
	}
}
