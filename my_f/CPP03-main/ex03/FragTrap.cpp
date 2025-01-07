/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 15:48:02 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/17 15:07:38 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(){
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "FragTrap Default Constructed Called" << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "FragTrap " << name << " has been created." << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy){
    std::cout << "FragTrap Copy Constructor" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& rhs){
    std::cout << "FragTrap Copy Assignement Constructor" << std::endl;
    ClapTrap::operator=(rhs);
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " ;
    if (!name.empty())
        std::cout << name;
    std:: cout << " Detructor Called" << std::endl;
}

void FragTrap::attack(const std::string& target) {
    if (hitPoints <= 0 || energyPoints <= 0) {
        std::cout << "FragTrap " << name
                  << " cannot attack"
                  << std::endl;
        return ;
    }
    energyPoints--;
    std::cout << "FragTrap " << name
              << " attacks " << target
              << ", causing " << attackDamage
              << " points of damage"
              << std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap requests a positive high five" << std::endl;
}

    
