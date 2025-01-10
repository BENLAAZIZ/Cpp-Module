/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 19:44:30 by hben-laz          #+#    #+#             */
/*   Updated: 2025/01/05 12:45:47 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
	name = "Default";
	hit_points = 10;
	energy_points = 10;
	attack_damage = 0;
}

ClapTrap::ClapTrap(std::string _name)
{
	name = _name;
	hit_points = 10;
	energy_points = 10;
	attack_damage = 0;
	std::cout << "ClapTrap " << name << " is created." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = obj;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& obj)
{
	std::cout << "ClapTrap Assignation operator called" << std::endl;
	if (this != &obj)
	{
		name = obj.name;
		hit_points = obj.hit_points;
		energy_points = obj.energy_points;
		attack_damage = obj.attack_damage;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " has been destroyed." << std::endl;   
}

void	ClapTrap::attack(const std::string& target)
{
	if (hit_points <= 0 || energy_points <= 0)
	{
		std::cout << "ClapTrap " << name << " cannot attack" << target << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing ";
			std::cout << attack_damage << " points of damage!" << std::endl;
	energy_points--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (hit_points == 0) {
		std::cout << name << " has no hit points left!" << std::endl;
		return;
	}
	if ((int)amount >= hit_points) {
		hit_points = 0;
		std::cout << name << " took " 
					<< amount << " points of damage and is now out of hit points!" 
					<< std::endl;
	}
	else {
		hit_points -= amount;
		std::cout << name << " took " 
				  << amount << " points of damage and now has " 
				  << hit_points << " hit points left." << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (hit_points <= 0 || energy_points <= 0) {
		std::cout << "ClapTrap " << name << " has no energy left to repair!" << std::endl;
		return;
	}
	energy_points--;
	hit_points += amount;
	std::cout << "ClapTrap " << name << " repaired itself for " << amount
	          << " hit points and now has " << hit_points << " hit points." << std::endl;
}