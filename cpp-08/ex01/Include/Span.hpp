/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 10:21:39 by gforns-s          #+#    #+#             */
/*   Updated: 2024/12/09 10:34:43 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <stdexcept>
#include <iostream>

class Span
{
	protected:
		unsigned int _size;
	public:
		Span(unsigned int);
		~Span();
		Span(const Span &);
		Span &operator=(const Span &);

	class Err1 : std::exception
	{
		public:
			
	};
};
