/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 19:07:55 by hben-laz          #+#    #+#             */
/*   Updated: 2025/05/25 16:59:34 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{ 
	try
	{
		if (ac < 2)
			throw std::runtime_error("Error: invalid number of argument !");
		check_parse(av);
		PmergeMe mer(av);
		mer.process_sort();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return 1;
	}
	return 0;
}