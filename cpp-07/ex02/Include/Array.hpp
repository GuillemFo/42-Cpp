/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 09:43:25 by gforns-s          #+#    #+#             */
/*   Updated: 2024/11/25 12:29:33 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <stdexcept>
#include <iostream>
#include <string>

template< typename T >
class Array
{
	private:
		T	*_val;
		int	_nb;
	public:
		Array():_val(NULL), _nb(0){};
		Array(int size) : _val(new T[size]), _nb(size){};
		~Array()
		{
			delete[] _val;
		};

		Array(const Array &other) : _val(new T[other._nb]), _nb(other._nb)
		{
			for (int i = 0; i < other._nb; i++)
				_val[i] = other._val[i];
		};

		Array operator=(const Array &other)
		{
			if (*this != other)
			{
				delete[] this->_val;
				this->_nb = other._nb;
				this->_val = new T[other._nb];
				for (int i = 0; i < _nb; i++)
					this->_val[i] = other._val[i];
				return (*this);
			}
			return (*this);
		};

		T &operator[](int index)
		{
			if (index >= size() || index < 0)
				throw std::out_of_range("Invalid index");
			return (this->_val[index]);
		}
		
		const T &operator[](int index) const
		{
			if (index >= size() || index < 0)
				throw std::out_of_range("Invalid index");
			return (this->_val[index]);
		}
		
		int size(){return (this->_nb);}
};
