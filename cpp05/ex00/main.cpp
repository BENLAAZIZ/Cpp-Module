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

int main() {
	try {
		std::cout << "hamza : ---------------" << std::endl;
		Bureaucrat hamza("hamza", 150);
		std::cout << hamza << std::endl;
	} catch (const std::exception& e) {
		std::cerr << "Exception found: " << e.what() << std::endl;
	}

	try {
		std::cout << "bur : -----------------" << std::endl;
		Bureaucrat bur("bur", 150);
		std::cout << bur << std::endl;
		bur.decrement();
	} catch (const std::exception& e) {
		std::cerr << "Exception found: " << e.what() << std::endl;
	}

	try {
		std::cout << "inv : -------------------" << std::endl;
		Bureaucrat inv("inv", 0);
		std::cout << inv << std::endl;
	} catch (const std::exception& e) {
		std::cerr << "Exception found: " << e.what() << std::endl;
	}

	return 0;
}
	