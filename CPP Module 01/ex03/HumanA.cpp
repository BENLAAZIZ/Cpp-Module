/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 23:06:22 by hben-laz          #+#    #+#             */
/*   Updated: 2024/12/26 17:11:19 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


HumanA::HumanA(std::string _name, Weapon& _w): name(_name), w(_w)
{ 

}


HumanA::~HumanA()
{ 

}

void HumanA::setWeapon(Weapon& _w)
{
    w = _w;
}

void HumanA::attack()
{
    std::cout << name<<" attacks with their " << w.getType() << std::endl;
}

