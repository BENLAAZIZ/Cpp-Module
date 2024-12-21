/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 01:38:21 by hben-laz          #+#    #+#             */
/*   Updated: 2024/12/20 17:47:39 by hben-laz         ###   ########.fr       */
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
            Fixed(const int a);
            Fixed(const float a);
            Fixed(const Fixed& copy);
            Fixed& operator= (const Fixed& copy);
            ~Fixed();
            int toInt( void ) const;
            float toFloat( void ) const;
            void setInt(int nbr);
};


std::ostream& operator<<(std::ostream& out, const Fixed& obj);

        bool operator<(const Fixed& obj, const Fixed& obj2);


        bool operator>(const Fixed& obj, const Fixed& obj2);


        bool operator<=(const Fixed& obj, const Fixed& obj2);


        bool operator>=(const Fixed& obj, const Fixed& obj2);

#endif