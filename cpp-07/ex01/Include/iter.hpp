/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 08:47:20 by gforns-s          #+#    #+#             */
/*   Updated: 2024/11/25 09:22:52 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

template< typename T, typename U, typename F >
void	iter(T &addr, U len, F f)
{
	U i = 0;
	while ( i < len)
	{
		f(addr[i]);
		i++;
	}
}
