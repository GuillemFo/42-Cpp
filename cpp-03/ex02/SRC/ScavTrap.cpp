/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 08:49:47 by gforns-s          #+#    #+#             */
/*   Updated: 2024/10/02 09:12:21 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScavTrap.hpp>

ScavTrap::ScavTrap() : ClapTrap("Scav")
{
	std::cout << "ScavTrap default constructor called " << std::endl;
	this->_hit_pts = 100;
	this->_energy = 50;
	this->_attack = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor " << name << " called " << std::endl;
	this->_hit_pts = 100;
	this->_energy = 50;
	this->_attack = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor was called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = other;
}

ScavTrap 	&ScavTrap::operator=(const ScavTrap &a)
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

void	ScavTrap::attack(const std::string& target)
{
	std::cout << "ScavTrap class Attack <";
	if (_energy == 0)
	{
		std::cout << "Not enough energy to attack>" << std::endl;
		return;
	}
	_energy = _energy - 1;
	std::cout << _name << " attacks " << target << ", causing " << _attack << " points of damage!>" << std::endl;
}

void		ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}
