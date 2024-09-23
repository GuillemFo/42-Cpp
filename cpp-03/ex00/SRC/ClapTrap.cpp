/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 11:28:02 by gforns-s          #+#    #+#             */
/*   Updated: 2024/09/23 13:25:56 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string a) : _hit_pts(10), _energy(10), _attack(0)
{
	std::cout << "Default constructor called for " << a << std::endl;
	_name = a;
}

ClapTrap::~ClapTrap()
{

}

ClapTrap::ClapTrap(const ClapTrap &a)
{
	std::cout << "This is a copy constructor" << std::endl;
	*this = a;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &a)
{
	if (this != &a)
	{
		this->_attack = a._attack;
		this->_energy = a._energy;		//have to double check if i need setters and getters (check if setter and getter is per class or element)
		this->_hit_pts = a._hit_pts;
		this->_name = a._name;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (_energy == 0)
	{
		std::cout << "Not enough energy to attack" << std::endl;
		return;
	}
	_energy = _energy - 1;
	std::cout << this->_name << "attacks" << &target << ", causing " << _attack << "points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int ammount)
{
	if (_hit_pts == 0)
	{
		std::cout << "the target is already dead" << std::endl;
		return;
	}
	if (_hit_pts < ammount)
	{
		_hit_pts = 0;
		std::cout << "the target died" << std::endl;
	}
	_hit_pts = _hit_pts - ammount;
}

void	ClapTrap::beRepaired(unsigned int ammount)
{
	if (_energy == 0)
	{
		std::cout << "Not enough energy to repair" << std::endl;
		return;
	}
	_energy = _energy - 1;
	_hit_pts = _hit_pts + ammount;
}
