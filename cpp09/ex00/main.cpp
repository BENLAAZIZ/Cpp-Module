/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 19:07:55 by hben-laz          #+#    #+#             */
/*   Updated: 2025/05/20 20:32:57 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <iostream>
#include <istream>
#include <fstream>


int main(int ac, char **av)
{
	BitcoinExchange bit;
	try
	{
		if (ac != 2)
			throw std::runtime_error("Error: could not open file.");
			// Open the file
		std::ifstream file(av[1]);
		
		if (!file.is_open())
			throw std::runtime_error("Error: could not open file.");
		// store the data data.csv in a map
		std::ifstream data_file("data.csv");
		if (!data_file.is_open())
			throw std::runtime_error("Error: could not open data.csv.");
		std::string line;
		while (std::getline(data_file, line))
			bit.parse_line(line);
		std::cout << "Data loaded successfully." << std::endl;
		// map with iterator

		for (std::map<std::string, std::string>::iterator it = bit.data.begin(); it != bit.data.end(); ++it)
		{

			std::cout << it->first << " => " << it->second << std::endl;
		}

		
		// std::string line;
		// while (std::getline(file, line))
		// {
		// 	// Process each line
		// 	std::cout << line << std::endl;
		// }
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}
}