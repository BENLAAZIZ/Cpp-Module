/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 00:38:26 by hben-laz          #+#    #+#             */
/*   Updated: 2024/12/01 01:49:45 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

FragTrap::FragTrap()
{
    this->Name = "Default";
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
    std::cout<<"Default FragTrap constructor called"<<std::endl;
}

FragTrap::FragTrap(const std::string& _name) : ClapTrap(_name)
{
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
    std::cout<<"FragTrap constructor " << this->Name << " called"<<std::endl;
}

FragTrap::FragTrap(const FragTrap& obj) : ClapTrap(obj)
{
    this->Name = obj.Name;
    std::cout<<"FragTrap Copy constructor " << obj.Name << " called"<<std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& obj)
{
    if (this != &obj)
    {
        ClapTrap::operator=(obj);
        this->Name = obj.Name;
        std::cout<<"FragTrap constructor " << this->Name << " : assigned from "<< obj.Name <<std::endl;   
    }
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout<<"FragTrap " << this->Name << " destroyed . No more high fives!"<< std::endl;
}


void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->Name << " says : High fives !" << std::endl;
}
