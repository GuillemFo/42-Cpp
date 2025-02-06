/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 08:38:29 by gforns-s          #+#    #+#             */
/*   Updated: 2025/02/06 10:46:38 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stack>


class RPN
{
	protected:
		std::stack<int> val;
	public:
		RPN();
		~RPN();
		RPN(const RPN &other);
		RPN &operator=(const RPN &other);
		void checkInput(const std::string in); //add a try catch in main func so it can opt the error std::logic_error &e!!
		bool IsAllowed(const char c);
};
