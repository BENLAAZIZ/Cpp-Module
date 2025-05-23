/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 11:53:53 by hben-laz          #+#    #+#             */
/*   Updated: 2025/05/23 16:49:57 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
	RPN rpn;
	try
	{
		std::string line;
		if (ac < 2)
			throw std::runtime_error("Error: invalide numbers of arguments.");
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
		rpn.calculator_process(line);
		std::cout << rpn.get_result() << std::endl;
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return 1;
	}
}