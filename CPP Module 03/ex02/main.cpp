/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 19:46:55 by hben-laz          #+#    #+#             */
/*   Updated: 2025/01/01 19:18:28 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ClapTrap.hpp"

#include "FragTrap.hpp"


int main() {

    FragTrap frag("Fraggie");
    frag.attack("Target1");
    frag.takeDamage(100);
    frag.beRepaired(83);
    frag.highFivesGuys();

    std::cout << std::endl;
    
    FragTrap  fragX("fragX");
    fragX = frag;
    fragX.highFivesGuys();
    fragX.attack("Target2");

    std::cout << std::endl;
    
    FragTrap  fragCopy(frag);
    fragCopy.highFivesGuys();
    
    std::cout << std::endl;
}