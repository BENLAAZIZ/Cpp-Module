/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 19:45:58 by hben-laz          #+#    #+#             */
/*   Updated: 2025/01/05 12:38:58 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ClapTrap.hpp"

#include "ScavTrap.hpp"


int main()
{

	ClapTrap clap("Avatar");
	ScavTrap scav("Scavvy");

	ClapTrap h(clap);
	std::cout << std::endl << "-----------------------------" << std::endl;
	h.attack("vectim");
	std::cout << std::endl << "-----------------------------" << std::endl;


	ScavTrap t(scav);
	t.attack("vectim2");
	t.guardGate();

	std::cout << std::endl << "--- Testing ClapTrap ---" << std::endl;
	clap.attack("Enemy");
	clap.takeDamage(5);
	clap.beRepaired(3);

	std::cout << std::endl << "--- Testing ScavTrap ---" << std::endl;
	scav.attack("Enemy");
	scav.takeDamage(30);
	scav.beRepaired(20);
	scav.guardGate();

	std::cout << std::endl << "--- Program Ends ---" << std::endl;
	
	return 0;
}