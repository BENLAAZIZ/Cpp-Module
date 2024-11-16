/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 23:08:05 by hben-laz          #+#    #+#             */
/*   Updated: 2024/11/16 21:46:53 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


HumanB::HumanB(std::string _name) : w(NULL)
{
    name = _name;
}

HumanB::~HumanB()
{
    
}

Weapon* HumanB::get_name()
{
    return w;
}

void HumanB::setWeapon(Weapon& _w)
{
    w = &_w;
}

void HumanB::attack()
{
    if (w)
        std::cout<<name<<" attacks with their "<<w->getType()<<std::endl;
    else
        std::cout << name << " has no weapon to attack with!" << std::endl;
}
