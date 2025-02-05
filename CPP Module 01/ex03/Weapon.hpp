/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 23:01:49 by hben-laz          #+#    #+#             */
/*   Updated: 2024/12/26 16:06:20 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
    private :
	std::string type;
    public :
	Weapon();
	Weapon(std::string _type);
	~Weapon();
	std::string getType() const;
	void setType(std::string _type);
};

#endif