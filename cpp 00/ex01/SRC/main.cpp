/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 13:52:25 by gforns-s          #+#    #+#             */
/*   Updated: 2024/07/29 14:39:48 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Include/Contacts.hpp"
#include <iostream>

int	main()
{
	Contacts test1(5, "bob", "test", "nick");
	std::cout << test1.index << " | " << test1.name << " | "  << test1.surname << " | " << test1.nick << std::endl;
}
