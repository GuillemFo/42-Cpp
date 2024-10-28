/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:11:15 by gforns-s          #+#    #+#             */
/*   Updated: 2024/10/24 17:59:19 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

class Intern : public AForm
{
	private:

	public:
		Intern();
		Intern(const std::string nm, int i);
		~Intern();
		Intern(const Intern &other);
		Intern &operator=(const Intern &other);

};
