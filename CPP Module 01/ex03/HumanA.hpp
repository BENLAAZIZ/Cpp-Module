/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 23:03:49 by hben-laz          #+#    #+#             */
/*   Updated: 2024/12/26 17:11:09 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA
{
    private :
	    Weapon& w;
	    std::string name;
    public  :  
		HumanA(std::string _name, Weapon& _w);
		~HumanA();
		void setWeapon(Weapon& _w);
		void attack();
};

#endif