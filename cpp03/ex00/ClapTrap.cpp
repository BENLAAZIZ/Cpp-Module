/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 17:34:29 by hben-laz          #+#    #+#             */
/*   Updated: 2024/11/29 02:25:20 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    
}



ClapTrap::ClapTrap(std::string _name)
{
    Name = _name;
    hit_points = 10;
    energy_points = 10 ;
    attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
    this->Name = obj.Name;
    this->hit_points = obj.hit_points;
    this->energy_points = obj.energy_points;
    this->attack_damage = obj.attack_damage;
}

ClapTrap::~ClapTrap()
{
    std::cout<<"Destroy Called"<<std::endl;
}

void    ClapTrap::attack(const std::string& target)
{
    if (hit_points == 0 || energy_points == 0)
    {
        std::cout<< this->Name << "cannot attack"<<std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->Name << " attacks " << target << ", causing ";
            std::cout << attack_damage << " points of damage!" << std::endl;
    this->energy_points--;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (hit_points == 0) {
        std::cout << Name << " has no hit points left!" << std::endl;
        return;
    }
    if (amount >= hit_points) {
        hit_points = 0;
        std::cout << Name << " took " << amount << " points of damage and is now out of hit points!" << std::endl;
    }
    else {
        hit_points -= amount;
        std::cout << Name << " took " << amount << " points of damage and now has " << hit_points << " hit points left." << std::endl;
    }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (energy_points == 0) {
        std::cout << Name << " has no energy left to repair!" << std::endl;
        return;
    }
    energy_points--;
    hit_points += amount;
    std::cout << Name << " repaired itself for " << amount ;
    std::cout<< " hit points and now has " << hit_points << " hit points." << std::endl;
}

//-------------------------------------------------------------

std::string ClapTrap::getName() const
{
    return Name;
}

unsigned int ClapTrap::getHitPoints() const
{
    return hit_points;
}

unsigned int ClapTrap::getEnergyPoints() const
{
    return energy_points;
}

unsigned int ClapTrap::getAttackDamage() const
{
    return attack_damage;
}

