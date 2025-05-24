/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 19:07:55 by hben-laz          #+#    #+#             */
/*   Updated: 2025/05/24 19:01:22 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    std::string line;
	if (ac < 2)
    {
        std::cerr << "Error: invalid number of argument !" << std::endl;
        return 1;
    }
    av = av + 1;
    while (*av)
    {
        std::string arg;
        arg = *av;
        if(arg.size() == 1)
        arg = arg + " ";
        line += arg;
        ++av;
    }

    std::cout << line << std::endl;
    
}