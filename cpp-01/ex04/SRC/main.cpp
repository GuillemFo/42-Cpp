/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 08:22:51 by gforns-s          #+#    #+#             */
/*   Updated: 2024/09/04 12:12:57 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace_me.hpp"

int	main(int ac, char **av)
{
	if (ac < 4)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);
	}
		std::string filename = av[1];
		std::string s1 = av[2];
		std::string s2 = av[3];
		if (filename.empty() || s1.empty() || s2.empty())
		{
			std::cout << "Program cannot tolerate empty fields" << std::endl;
			return (1);
		}
		std::ifstream in_file(filename); // c_str ??
		std::ofstream out_file(filename + ".replace");
		if (in_file.is_open() && out_file.is_open())
		{
			std::string line;
			std::string new_line;
			std::string tmp;
			while (std::getline(in_file, line))
			{
				size_t	start = line.find(s1);
				size_t len = s1.length();
				while (start != std::string::npos)
				{
					new_line = line.substr(0, start);
					tmp = line.substr(start + len);
					new_line = new_line + tmp;
					std::cout << new_line << std::endl;
				}
			}
		}
		
		
	return (0);
}