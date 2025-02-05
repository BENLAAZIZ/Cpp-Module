/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 23:08:05 by hben-laz          #+#    #+#             */
/*   Updated: 2024/12/26 16:48:58 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB() : w(NULL)
{
    name = "default";
}

HumanB::HumanB(std::string _name) : w(NULL)
{
    name = _name;
}

HumanB::~HumanB()
{
    
}

void HumanB::setWeapon(Weapon& _w)
{
    w = &_w;
}

void HumanB::attack()
{
    if (w)
        std::cout << name << " attacks with their " << w->getType() << std::endl;
    else
        std::cout << name << " has no weapon to attack with!" << std::endl;
}
