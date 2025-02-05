/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 13:23:24 by hben-laz          #+#    #+#             */
/*   Updated: 2024/12/29 00:56:08 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
# include <cmath>

class Fixed 
{
	private :
		int fixed;
		static const int fractional;
	public :
		Fixed();
		Fixed(const int i);
		Fixed(const float f);
		Fixed(const Fixed& obj);
		Fixed& operator=(const Fixed& obj);
		~Fixed();
		float toFloat( void ) const;
		int toInt( void ) const;
		float getRawBits( void ) const;
		void setRawBits(const float raw);
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);
#endif