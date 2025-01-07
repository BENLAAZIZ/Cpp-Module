/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 23:09:07 by hben-laz          #+#    #+#             */
/*   Updated: 2025/01/07 06:04:23 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

class ICharacter;

class AMateria
{
	protected:
		std::string type;
	public:
		AMateria();
		AMateria(std::string const& type);
		AMateria( AMateria const& src );
		virtual ~AMateria();
		AMateria& operator=( AMateria const& rhs );
		std::string const& getType() const;
		void setType(std::string const& type);
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif