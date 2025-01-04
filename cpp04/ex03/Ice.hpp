/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 00:25:10 by hben-laz          #+#    #+#             */
/*   Updated: 2025/01/04 00:42:34 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP



#include <iostream>
#include "AMateria.hpp"


class Ice : public AMateria
{
    public:
        Ice();
        Ice(std::string const& type);
        virtual ~Ice();
        Ice(Ice const& other);
        Ice& operator=(Ice const& other);
        std::string const& getType() const;
        virtual Ice* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif