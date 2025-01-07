/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 21:52:55 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/19 18:20:40 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScaveTrap Default Constructed Called" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name, int) {
    energyPoints = 50;
    std::cout << "ScaveTrap " << name << " has been created." << std::endl;
}


ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScaveTrap " << name << " has been created." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy){
    std::cout << "ScavTrap Copy Constructor" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs){
    std::cout << "ScavTrap Copy Assignement Constructor" << std::endl;
    ClapTrap::operator=(rhs);
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScaveTrap " ;
    if (!name.empty())
        std::cout << name;
    std:: cout << " Detructor Called" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if (hitPoints <= 0 || energyPoints <= 0) {
        std::cout << "Scavtrap " << name
                  << " cannot attack"
                  << std::endl;
        return ;
    }
    energyPoints--;
    std::cout << "Scavtrap " << name
              << " attacks " << target
              << ", causing " << attackDamage
              << " points of damage"
              << std::endl;
}

void ScavTrap::guardGate(){
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}
