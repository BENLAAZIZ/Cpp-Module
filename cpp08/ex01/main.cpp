/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 20:25:07 by hben-laz          #+#    #+#             */
/*   Updated: 2025/05/19 13:15:01 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp = Span(9);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	
	std::cout << "------- Adding range ------------" << std::endl;

	std::vector<int> v;
	v.push_back(8);
	v.push_back(2);
	v.push_back(-4);
	v.push_back(0);

	try
	{
		sp.add_range(v.begin(), v.end());
	}
	catch (std::exception &e)
	{
		std::cerr << "exception : " << e.what() << std::endl;
	}
	

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	
	return 0;
}