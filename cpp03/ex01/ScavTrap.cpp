/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 15:43:30 by hben-laz          #+#    #+#             */
/*   Updated: 2024/11/30 16:42:32 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout<<" Default Constructor Called ."<<std::endl;
    this->Name = "Default";
    this->hit_points = 100;
    this->energy_points = 50 ;
    this->attack_damage = 20;
}

ScavTrap::ScavTrap(std::string _name)
{
    std::cout<<" Default Constructor Called ."<<std::endl;
    this->Name = _name;
    this->hit_points = 100;
    this->energy_points = 50 ;
    this->attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& obj)
{
    std::cout<<" Copy Constructor Called ."<<std::endl;
    this->Name = obj.Name;
    this->hit_points = obj.hit_points;
    this->energy_points = obj.energy_points;
    this->attack_damage = obj.attack_damage;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj)
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

ScavTrap::~ScavTrap()
{
    std::cout<<" Destructor Constructor Called ."<<std::endl;
}


void ScavTrap::attack(const std::string& target)
{
    if (hit_points > 0 && energy_points > 0)
    {
        energy_points--;
        std::cout << "ScavTrap " << this->Name << " attacks " << target
                  << ", causing " << this->attack_damage << " points of damage!\n";
        return ;
    }
    std::cout << "ScavTrap " << this->Name << " has no energy !\n";
}


void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->Name << " in Gatekeeper mode!\n";
}
