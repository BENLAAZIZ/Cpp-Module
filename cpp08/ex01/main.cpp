/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 20:25:07 by hben-laz          #+#    #+#             */
/*   Updated: 2025/05/17 15:59:37 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <list>

int main()
{
	Span sp = Span(8);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::list<int> lst;

	lst.push_back(1);
	lst.push_back(-2);
	lst.push_back(30);
	lst.push_back(4);
	try
	{
		sp.add_range(lst.begin(), lst.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	

	// Test with 10000 numbers using addRange
	Span bigSpan(10000);
	std::vector<int> numbers;
	for (int i = 0; i < 10000; ++i)
		numbers.push_back(i);
	bigSpan.add_range(numbers.begin(), numbers.end());
	std::cout << bigSpan.shortestSpan() << std::endl;
	std::cout << bigSpan.longestSpan() << std::endl;
	

	
	
	return 0;
}