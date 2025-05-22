/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 11:53:53 by hben-laz          #+#    #+#             */
/*   Updated: 2025/05/22 12:26:52 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
	RPN rpn;
	try
	{
		if (ac < 2)
			throw std::runtime_error("Error: invalide numbers of arguments.");
		av = av + 1;
		if(rpn.pars_line(av) == false)
			throw std::runtime_error("Error: invalide.");
		int result = rpn.calculator_process(av);
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return 1;
	}
	
}