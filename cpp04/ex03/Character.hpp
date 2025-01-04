/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 00:17:24 by hben-laz          #+#    #+#             */
/*   Updated: 2025/01/04 00:59:04 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "Character.hpp"
#include "AMateria.hpp"

class ICharacter
{
	private :
		std::string _name;
		AMateria* _inventory[4];
	public:
		ICharacter();
		ICharacter(std::string const & type);
		ICharacter(ICharacter const & other);
		ICharacter & operator=(ICharacter const & other);
		std::string const & getName() const;
		virtual ~ICharacter();
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

#endif