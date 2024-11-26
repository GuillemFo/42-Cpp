/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:56:59 by gforns-s          #+#    #+#             */
/*   Updated: 2024/11/27 00:43:32 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <algorithm>

template< typename T >
int easyfind( T &v, int nb)
{
	return (std::find(v.begin(), v.end(), nb));
}




/*	THIS DOES NOT US THE <algorithm> lib imposed by the subject :)
template< typename T >
bool easyfind(const T v , int nb)
{
	if (v.empty())
		return (false);
	for (unsigned long i = 0; i <= v.size(); i++)
	{
		if (v[i] == nb)
			return (true);
	}
	return (false);
}
*/


// MUST WATCH!!!!!!!!!!!!!
//https://elearning.intra.42.fr/notions/piscine-c-d07-templates/subnotions
//https://elearning.intra.42.fr/notions/piscine-c-d08-stl/subnotions/piscine-c-d08-stl-stl/videos/stl-1e60e486-1b8b-4f10-89bd-b2b3871bd3e9
