/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:36:23 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/17 15:13:49 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : 
    hitPoints(10),
    energyPoints(10),
    attackDamage(0) {
    std::cout << "ClapTrap Default constructor called" << std::endl; 
}

ClapTrap::ClapTrap(const std::string& name) :
    name(name),
    hitPoints(10),
    energyPoints(10),
    attackDamage(0) {
    std::cout << "ClapTrap " << name << " has been created." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy) :
    hitPoints(copy.hitPoints),
    energyPoints(copy.energyPoints),
    attackDamage(copy.attackDamage) {
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs) {
    if (this != &rhs) {
        hitPoints = rhs.hitPoints;
        energyPoints = rhs.energyPoints;
        attackDamage = rhs.attackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " ;
    if (!name.empty())
        std::cout << name;
    std:: cout << " Detructor Called" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (hitPoints <= 0 || energyPoints <= 0) {
        std::cout << "ClapTrap " << name
                  << " cannot attack"
                  << std::endl;
        return ;
    }
    energyPoints--;
    std::cout << "ClapTrap " << name 
              << " attacks " << target
              << ", causing " << attackDamage
              << " points of damage!"
              << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if ((int)amount >= hitPoints)
        hitPoints = 0;
    else
        hitPoints -= amount;
    std::cout << "ClapTrap " << name << " take " 
              << amount << " points of damage"
              << std::endl; 
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (hitPoints <= 0 || energyPoints <= 0) {
        std::cout << "ClapTrap " << name
                  << " cannot be repaired"
                  << std::endl;
        return ;
    }
    energyPoints--;
    hitPoints += amount;
    std::cout << "ClapTrap " << name << " gets " << amount
              << ", hit points back"
              << std::endl;
}