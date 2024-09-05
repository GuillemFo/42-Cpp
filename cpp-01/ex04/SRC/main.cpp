/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 08:22:51 by gforns-s          #+#    #+#             */
/*   Updated: 2024/09/05 09:52:36 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace_me.hpp"

int	main(int ac, char **av)
{
	if (ac < 4 || ac > 4)
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
	std::string	tmp_name = filename + ".replace";
	std::ifstream in_file(filename.c_str());
	std::ofstream out_file(tmp_name.c_str());
	if (in_file.is_open() && out_file.is_open())
	{
		std::string	line;
		while (std::getline(in_file, line))
		{
			size_t	start = line.find(s1);
			if (start != std::string::npos)
			{
				size_t	len_s1 = s1.length();
				size_t	len_newl = 0;
				std::string	new_line = line.substr(len_newl, start);
				while (start != std::string::npos)
				{
					out_file << new_line + s2;
					line = line.substr(start + len_s1);
					start = line.find(s1);
					new_line = line.substr(0, start);
				}
				out_file << line.substr(0);
			}
			else
				out_file << line;
			out_file << std::endl;	
		}
		in_file.close();
		out_file.close();
	}
	return (0);
}
