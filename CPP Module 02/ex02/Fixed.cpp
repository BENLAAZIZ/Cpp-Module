/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 13:22:59 by hben-laz          #+#    #+#             */
/*   Updated: 2024/12/29 16:02:55 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


const int Fixed::fractional = 8;

Fixed::Fixed()
{
	this->fixed = 0;
}

Fixed::Fixed(const int i)
{
	this->fixed = i << fractional;
}

Fixed::Fixed(const float f)
{
	this->fixed = roundf(f * (1 << fractional));
}

Fixed::Fixed(const Fixed& obj) { 
	*this = obj;
}

Fixed&	Fixed::operator=(const Fixed& obj)
{
	if (this != &obj)
		this->fixed = obj.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
}

float Fixed::getRawBits( void ) const
{
    return this->fixed;
}

void Fixed::setRawBits(const float raw )
{
    this->fixed = raw;
}

int	Fixed::toInt( void ) const
{
	return (this->fixed / (1 << fractional));
}

float	Fixed::toFloat( void ) const
{
	return ((float)this->fixed / (1 << fractional));
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return os;
}


bool	Fixed::operator>(const Fixed& obj) const
{
	if (this->fixed > obj.fixed)
		return true;
	return false;
}

bool	Fixed::operator<(const Fixed& obj) const
{
	if (this->fixed < obj.fixed)
		return true;
	return false;
}

bool	Fixed::operator>=(const Fixed& obj) const
{
	if (this->fixed >= obj.fixed)
		return true;
	return false;
}

bool	Fixed::operator<=(const Fixed& obj) const
{
	if (this->fixed <= obj.fixed)
		return true;
	return false;
}

bool	Fixed::operator==(const Fixed& obj) const
{
	if (this->fixed == obj.fixed)
		return true;
	return false;
}

bool	Fixed::operator!=(const Fixed& obj) const
{
	if (this->fixed != obj.fixed)
		return true;
	return false;
}


Fixed Fixed::operator+(const Fixed& obj) const
{
	Fixed res;

	res.fixed = this->fixed + obj.fixed;
	return res;
}

Fixed Fixed::operator-(const Fixed& obj) const
{
	 Fixed res;
	
	res.fixed = (this->fixed - obj.fixed);
	return res;
}

Fixed Fixed::operator*(const Fixed& obj) const
{
	 Fixed res;
	
	res.fixed = ((this->fixed  * obj.fixed) / (1 << fractional));
	return res;
}

Fixed Fixed::operator/(const Fixed& obj) const
{
	 Fixed res;

	res.fixed = this->fixed / obj.fixed;
	return res;
}

Fixed& Fixed::operator++()
{
	++this->fixed;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed old = *this;
	operator++();
	return old;
}

Fixed& Fixed::operator--()
{
	this->fixed -= 1;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed old = *this;

	operator--();
	return old;
	
}

Fixed& Fixed::min(Fixed& obj1, Fixed& obj2)
{
	if (obj1.fixed < obj2.fixed)
		return obj1;
	return obj2;
}

const Fixed& Fixed::min(const Fixed& obj1, const Fixed& obj2)
{
	if (obj1.fixed < obj2.fixed)
		return obj1;
	return obj2;
}

Fixed& Fixed::max(Fixed& obj1, Fixed& obj2)
{
	if (obj1.fixed > obj2.fixed)
		return obj1;
	return obj2;
}

const Fixed& Fixed::max(const Fixed& obj1, const Fixed& obj2)
{
	if (obj1.fixed > obj2.fixed)
		return obj1;
	return obj2;
}