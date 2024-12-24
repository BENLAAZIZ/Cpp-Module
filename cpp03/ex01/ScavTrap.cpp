/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 15:43:30 by hben-laz          #+#    #+#             */
/*   Updated: 2024/12/22 00:42:06 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout<<" ScavTrap Constructor Called ."<<std::endl;
    this->Name = "Default";
    this->hit_points = 100;
    this->energy_points = 50 ;
    this->attack_damage = 20;
}

ScavTrap::ScavTrap(const std::string& _name) : ClapTrap(_name)
{
    std::cout<<"ScavTrap Constructor Called ."<<std::endl;
    this->hit_points = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& obj) : ClapTrap(obj)
{
    std::cout<<"ScavTrap Copy Constructor Called ."<<std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj) 
{
    std::cout<<" ScavTrap Copy Assignation operator called"<<std::endl;
    if (this != &obj)
        ClapTrap::operator=(obj);
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout<<"ScavTrap Destructor Called ."<<std::endl;
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
