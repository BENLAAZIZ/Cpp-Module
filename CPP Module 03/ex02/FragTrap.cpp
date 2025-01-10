/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 19:46:46 by hben-laz          #+#    #+#             */
/*   Updated: 2025/01/05 12:53:31 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

FragTrap::FragTrap()
{
    name = "Default";
    hit_points = 100;
    energy_points = 100;
    attack_damage = 30;
    std::cout << "Default FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string _name) : ClapTrap(_name)
{
    hit_points = 100;
    energy_points = 100;
    attack_damage = 30;
    std::cout << "FragTrap " << name << " has been created" << std::endl;
}

FragTrap::FragTrap(const FragTrap& obj) : ClapTrap(obj)
{
    std::cout << "FragTrap Copy constructor " << obj.name << " called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& obj)
{
    if (this != &obj)
    {
        ClapTrap::operator=(obj);
    }
    std::cout << "FragTrap Copy Assignement Constructo." <<std::endl; 
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout<<"FragTrap " << name << " destroyed ."<< std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if (hit_points > 0 && energy_points > 0)
    {
        energy_points--;
        std::cout << "FragTrap " << name << " attacks " << target
                  << ", causing " << attack_damage << " points of damage!" << std::endl;
        return ;
    }
    std::cout << "FragTrap " << name << " cannot attack !" << std::endl;
}

void FragTrap::guardGate()
{
    std::cout << "FragTrap " << name << " has entered in Gate keeper mode !" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << name << " says : High fives !" << std::endl;
}
