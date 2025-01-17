/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 04:00:23 by hben-laz          #+#    #+#             */
/*   Updated: 2025/01/17 18:00:06 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <stdexcept>


int main() {
	try {
		Bureaucrat john("John", 2);
		std::cout << john << std::endl;

		john.increment();
		std::cout << john << std::endl;

		john.increment();
	} catch (const std::exception& e) {
		std::cerr << "Exception found: " << e.what() << std::endl;
	}

	try {
		Bureaucrat jane("Jane", 149);
		std::cout << jane << std::endl;

		jane.decrement();
		std::cout << jane << std::endl;

		jane.increment();
		jane.increment();
		jane.increment();

		jane.decrement();
		jane.decrement();
		jane.decrement();
		jane.decrement();

		std::cout << jane << std::endl;
	} catch (const std::exception& e) {
		std::cerr << "Exception found: " << e.what() << std::endl;
	}

	try {
		Bureaucrat invalid("Invalid", -5);
		std::cout << invalid << std::endl;
	} catch (const std::exception& e) {
		std::cerr << "Exception found: " << e.what() << std::endl;
	}

	return 0;
}
	