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
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
	try{
	Bureaucrat b1("Alice", 1);
	ShrubberyCreationForm f1("home");


		try {
			b1.signForm(f1);
			b1.executeForm(f1);
		} catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		std::cout << "-----------------" << std::endl;

		RobotomyRequestForm f2("Bob");
		
		try {
			b1.signForm(f2);
			b1.executeForm(f2);
		} catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		std::cout << "-----------------" << std::endl;

		PresidentialPardonForm f3("Charlie");

		try {
			b1.signForm(f3);
			b1.executeForm(f3);
		} catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}