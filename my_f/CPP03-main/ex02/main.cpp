/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:35:58 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/17 15:38:04 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    FragTrap frag("Fraggy");
    frag.attack("Target-F");
    frag.takeDamage(100);
    frag.beRepaired(83);
    frag.highFivesGuys();

    std::cout << std::endl;
    
    FragTrap    fragX("fragX-32");
    fragX = frag;
    fragX.highFivesGuys();
    fragX.attack("Target-XH");

    std::cout << std::endl;
    
    FragTrap  fragCopy(frag);
    fragCopy.highFivesGuys();
    
    std::cout << std::endl;  
    return 0;
}