/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:35:58 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/17 15:25:41 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
    ScavTrap scav("Scavy");
    scav.attack("Target-S");
    scav.takeDamage(75);
    scav.beRepaired(56); 
    scav.guardGate();   

    std::cout << std::endl;
    
    ScavTrap    scavX("scavX-32");
    scavX = scav;
    scavX.guardGate();
    scavX.attack("Target-X");

    std::cout << std::endl;
    
    ScavTrap  scavCopy(scav);
    scavCopy.guardGate();
    
    std::cout << std::endl;
    return 0;
}