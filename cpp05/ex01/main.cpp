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
#include "Form.hpp"

int main() {
	try {
		Bureaucrat b("Alice", 50);
		Form f("TopSecretForm", 40, 30);

		std::cout << f << std::endl;
		b.signForm(f);  // grade too low to sign

		Bureaucrat boss("Boss", 10);
		boss.signForm(f);  // should work
		std::cout << f << std::endl;

	} catch (std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}
}