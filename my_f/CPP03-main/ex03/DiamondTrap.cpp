/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 18:11:56 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/20 15:05:16 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;
    std::cout << "DiamondTrap Default Constructed Called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& Name) : 
    ClapTrap(Name + "_clap_name"), FragTrap(Name),
    ScavTrap(Name, 1), name(Name) {
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;
    std::cout << "DiamondTrap " << this->name << " has been created." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy) : ClapTrap(copy){
    std::cout << "DiamondTrap Copy Constructor" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& rhs){
    std::cout << "DiamondTrap Copy Assignement Constructor" << std::endl;
    ClapTrap::operator=(rhs);
    return *this;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " ;
    if (!name.empty())
        std::cout << this->name;
    std:: cout << " Detructor Called" << std::endl;
}

void DiamondTrap::attack(const std::string& target) {
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
    std::cout << "I am " << this->name
              << ", also known as " << ClapTrap::name
              << std::endl;
}

