/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 19:46:16 by hben-laz          #+#    #+#             */
/*   Updated: 2025/01/05 12:52:34 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	name = "Default";
	hit_points = 100;
	energy_points = 50 ;
	attack_damage = 20;
	std::cout << " ScavTrap Default Constructor Called ." << std::endl;
}

ScavTrap::ScavTrap(const std::string& _name) : ClapTrap(_name)
{
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
	std::cout << "ScaveTrap " << name << " has been created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& obj) : ClapTrap(obj)
{
	std::cout << "ScavTrap Copy Constructor Called ." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj) 
{
	std::cout << " ScavTrap Copy Assignation operator called" << std::endl;
	if (this != &obj)
		ClapTrap::operator=(obj);
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << name << " has been destroyed" << std::endl;
}


void ScavTrap::attack(const std::string& target)
{
	if (hit_points > 0 && energy_points > 0)
	{
		energy_points--;
		std::cout << "ScavTrap " << name << " attacks " << target
				  << ", causing " << attack_damage << " points of damage!" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << name << " cannot attack !" << std::endl;
}


void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << name << " in Gatekeeper mode!" << std::endl;
}
