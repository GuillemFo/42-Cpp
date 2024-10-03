/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 09:46:35 by gforns-s          #+#    #+#             */
/*   Updated: 2024/10/03 10:06:17 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

# define NB_IDEAS 100

class Brain
{
	protected:
		std::string _ideas[NB_IDEAS];
	public:
		Brain();
		Brain(const Brain &other);
		~Brain();
		Brain &operator=(const Brain &other);
};
