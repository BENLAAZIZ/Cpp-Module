/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 01:38:21 by hben-laz          #+#    #+#             */
/*   Updated: 2024/11/24 02:36:37 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
    private :
            int rawBits;
            static int const fractional;
    public :
            Fixed();
            Fixed(const Fixed& copy);
            Fixed& operator= (const Fixed& copy);
            ~Fixed();
            int getRawBits( void ) const;
            void setRawBits( int const raw );
};



#endif