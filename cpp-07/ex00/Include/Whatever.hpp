/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 10:56:24 by gforns-s          #+#    #+#             */
/*   Updated: 2024/11/22 13:40:36 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template<typename T>
void	sTap(T &x, T &y)
{
	T tmp;
	tmp = x;
	x = y;
	y = tmp;
}

template<typename T>
const T &min(const T &x, const T &y)
{
	if (x < y)
		return (x);
	return (y);
}

template<typename T>
const T &max(const T &x, const T &y)
{
	if (x > y)
		return (x);
	return (y);
}
