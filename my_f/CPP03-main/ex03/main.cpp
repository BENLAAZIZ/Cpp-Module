/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:35:58 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/19 18:23:27 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
    DiamondTrap diamond("Diamo-Xfd33");
    
    diamond.attack("Enemy");
    diamond.takeDamage(83);
    diamond.beRepaired(12);
    diamond.takeDamage(5);
    diamond.guardGate();
    diamond.highFivesGuys();
    diamond.whoAmI();
    return 0;
}