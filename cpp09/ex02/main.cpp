/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 19:07:55 by hben-laz          #+#    #+#             */
/*   Updated: 2025/05/25 15:58:59 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    
    try
	{
		// std::string line;
        PmergeMe mer;
		if (ac < 2)
			throw std::runtime_error("Error: invalid number of argument !");
        check_parse(av);
        mer.set_vector(av);
        mer.set_deque(av);
        
        
        std::cout << "line" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return 1;
	}
    
	return 0;
    
}