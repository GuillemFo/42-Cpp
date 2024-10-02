/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 11:28:02 by gforns-s          #+#    #+#             */
/*   Updated: 2024/10/02 09:24:21 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("someone"), _hit_pts(10), _energy(10), _attack(0)
{
	std::cout << "ClapTrap default constructor called for " << _name << std::endl;
}
ClapTrap::ClapTrap(std::string a) : _hit_pts(10), _energy(10), _attack(0)
{
	_name = a;
	std::cout << "ClapTrap default constructor called for " << _name << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &a)
{
	//std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = a;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &a)
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

void	ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap class Attack" << std::endl;
	if (_energy == 0)
	{
		std::cout << "Not enough energy to attack" << std::endl;
		return;
	}
	_energy = _energy - 1;
	std::cout << _name << " attacks " << target << ", causing " << _attack << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int ammount)
{
	if (_hit_pts == 0)
	{
		std::cout << _name << " is already dead and cannot receive damage" << std::endl;
		return;
	}
	if (_hit_pts < ammount)
	{
		_hit_pts = 0;
		std::cout << _name << " died" << std::endl;
		return;
	}
	_hit_pts = _hit_pts - ammount;
	std::cout << _name << " received " << ammount << " of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int ammount)
{
	if (_energy == 0)
	{
		std::cout << "Not enough energy to repair" << std::endl;
		return;
	}
	if (_hit_pts == 0)
	{
		std::cout << _name << " is already dead and cannot be healed" << std::endl;
		return;
	}
	_energy = _energy - 1;
	_hit_pts = _hit_pts + ammount;
}
