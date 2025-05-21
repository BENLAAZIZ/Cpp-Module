/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 19:07:55 by hben-laz          #+#    #+#             */
/*   Updated: 2025/05/21 09:43:53 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	BitcoinExchange bit;
	try
	{
		if (ac != 2)
			throw std::runtime_error("Error: could not open file.");
		bit.process_database();
		bit.process_file(av[1]);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}
}