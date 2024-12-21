/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 01:54:34 by hben-laz          #+#    #+#             */
/*   Updated: 2024/12/21 02:07:05 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed 
{
    private :
         int fixed;
         static const int fractional;
    public :
         Fixed();
         Fixed(const Fixed& obj);
         Fixed operator=(const Fixed& obj);
         ~Fixed();
         int getRawBits( void ) const;
         void setRawBits( int const raw );
};
#endif