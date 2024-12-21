/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 01:38:21 by hben-laz          #+#    #+#             */
/*   Updated: 2024/12/20 17:44:18 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
    private :
            float rawBits;
            static int const fractional;
    public :
            Fixed();
            Fixed(const int a);
            Fixed(const float a);
            Fixed(const Fixed& copy);
            Fixed& operator= (const Fixed& copy);
            ~Fixed();
            int toInt( void ) const;
            float toFloat( void ) const;

        //     void setRawBits( int const raw );
};
        std::ostream& operator<<(std::ostream& out, const Fixed& obj);



#endif