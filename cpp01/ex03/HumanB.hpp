/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 23:06:48 by hben-laz          #+#    #+#             */
/*   Updated: 2024/12/26 16:46:01 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include <iostream>
#include "Weapon.hpp"

class HumanB
{
    private :
	    Weapon* w;
	    std::string name;
    public  :
		HumanB();
		HumanB(std::string _name);
		~HumanB();
		void setWeapon(Weapon& _w);
		void attack();
};



#endif