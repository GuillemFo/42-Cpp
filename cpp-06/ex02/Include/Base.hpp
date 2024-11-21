/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:25:53 by gforns-s          #+#    #+#             */
/*   Updated: 2024/11/21 13:02:19 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include <cstdlib>
#include <exception>
#include <ctime>

class	Base
{
	public:
		virtual ~Base();
};

class	A : public Base{};
class	B : public Base{};
class	C : public Base{};

Base 	*generate(void);
void 	identify(Base* p);
void 	identify(Base& p);

