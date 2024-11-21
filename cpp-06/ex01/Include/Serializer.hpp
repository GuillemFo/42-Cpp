/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:07:44 by gforns-s          #+#    #+#             */
/*   Updated: 2024/11/21 11:35:04 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <stdint.h>

typedef struct Data
{
	int					my_Num;
	char				my_Char;
	float				my_Float;
	double				my_Double;
	long int			*my_LInt_ptr;
	unsigned long int	my_ULInt;
	uintptr_t			*my_UintPtr_T_ptr;
	uint64_t			my_Uint64_T;
	long double			my_LDouble;
}						Data;

class Serializer
{
	private:
		Serializer();
		Serializer(const Serializer &cpy);
		~Serializer();
		Serializer &operator=(const Serializer &other);
	public:
		static uintptr_t	serialize(Data *ptr);
		static Data			*deserialize(uintptr_t raw);
		

};
