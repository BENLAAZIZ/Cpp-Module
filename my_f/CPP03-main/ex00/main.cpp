/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:35:58 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/01 21:41:11 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    
    ClapTrap clap("CLAP5-FG");
    
    clap.attack("target1");
    clap.takeDamage(6);
    clap.beRepaired(2);
    clap.attack("target2");
    clap.takeDamage(10);
    clap.beRepaired(3);
    clap.attack("target3");
    return 0;
}