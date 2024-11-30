/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 17:33:49 by hben-laz          #+#    #+#             */
/*   Updated: 2024/11/30 17:18:21 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ClapTrap.hpp"

#include "ScavTrap.hpp"


int main()
{
    std::cout << "--- Creating ClapTrap ---\n";
    ClapTrap clap("Avatar");

    std::cout << "\n--- Creating ScavTrap ---\n";
    ScavTrap scav("Scavvy");

    std::cout <<"\n************* Creating Copy constructor\n";

    ClapTrap h(clap);
    h.attack("vectim");

    ScavTrap t(scav);

    std::cout << "\n--- Testing ClapTrap ---\n";
    // clap.attack("Enemy");
    // clap.takeDamage(5);
    // clap.beRepaired(3);

    // std::cout << "\n--- Testing ScavTrap ---\n";
    // scav.attack("Enemy");
    // scav.takeDamage(30);
    // scav.beRepaired(20);
    // scav.guardGate();

    // std::cout << "\n--- Program Ends ---\n";
    
    return 0;
}