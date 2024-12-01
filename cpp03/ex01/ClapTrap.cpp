/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 17:34:29 by hben-laz          #+#    #+#             */
/*   Updated: 2024/11/30 17:26:26 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    this->Name = "Default";
    this->hit_points = 10;
    this->energy_points = 10 ;
    this->attack_damage = 0;
    std::cout<<"ClapTrap Constuctor "<< this->Name<<" Called"<<std::endl;
}



ClapTrap::ClapTrap(std::string _name)
{
    this->Name = _name;
    this->hit_points = 10;
    this->energy_points = 10 ;
    this->attack_damage = 0;
    std::cout<<"ClapTrap Constuctor " << this->Name << " Called ."<<std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
    std::cout<<"Copy Constuctor " << this->Name << " Called"<<std::endl;
    this->Name = obj.Name;
    this->hit_points = obj.hit_points;
    this->energy_points = obj.energy_points;
    this->attack_damage = obj.attack_damage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& obj)
{
    std::cout<<"Copy Assignation operator called"<<std::endl;
    if (this != &obj)
    {
        this->Name = obj.Name;
        this->hit_points = obj.hit_points;
        this->energy_points = obj.energy_points;
        this->attack_damage = obj.attack_damage;
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout<<"ClapTrap Destroy " << this->Name << " Called"<<std::endl;
}

void    ClapTrap::attack(const std::string& target)
{
    if (this->hit_points == 0 || energy_points == 0)
    {
        std::cout<< this->Name << "cannot attack"<<std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->Name << " attacks " << target << ", causing ";
            std::cout << this->attack_damage << " points of damage!" << std::endl;
    this->energy_points--;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hit_points == 0) {
        std::cout << this->Name << " has no hit points left!" << std::endl;
        return;
    }
    if (amount >= this->hit_points) {
        this->hit_points = 0;
        std::cout << this->Name << " took " 
                    << amount << " points of damage and is now out of hit points!" 
                    << std::endl;
    }
    else {
        this->hit_points -= amount;
        std::cout << this->Name << " took " 
                  << amount << " points of damage and now has " 
                  << this->hit_points << " hit points left." << std::endl;
        }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energy_points == 0) {
        std::cout << this->Name << " has no energy left to repair!" << std::endl;
        return;
    }
    this->energy_points--;
    this->hit_points += amount;
    std::cout << this->Name << " repaired itself for " << amount ;
    std::cout<< " hit points and now has " << this->hit_points << " hit points." << std::endl;
}

//-------------------------------------------------------------

std::string ClapTrap::getName() const
{
    return this->Name;
}

unsigned int ClapTrap::getHitPoints() const
{
    return this->hit_points;
}

unsigned int ClapTrap::getEnergyPoints() const
{
    return this->energy_points;
}

unsigned int ClapTrap::getAttackDamage() const
{
    return attack_damage;
}

