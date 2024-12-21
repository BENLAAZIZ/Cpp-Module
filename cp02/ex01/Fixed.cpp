/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 21:54:53 by hben-laz          #+#    #+#             */
/*   Updated: 2024/12/21 17:35:50 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


int const Fixed::fractional = 8;

Fixed::Fixed()
{
    std::cout<<"Default constructor called"<<std::endl;
    this->fixed = 0;
}

Fixed::Fixed(const int i)
{
    std::cout << "Int constructor called" << std::endl;
    this->fixed = i << fractional;
}

Fixed::Fixed(const float f)
{
    std::cout<<"Float constructor called"<<std::endl;
    this->fixed = roundf(f * (1 << fractional));
}

Fixed::Fixed(const Fixed& obj)
{
    std::cout<<"Copy constructor called"<<std::endl;
    *this = obj;
}

Fixed& Fixed::operator=(const Fixed& obj)
{
    std::cout<<"Copy assignment operator called"<<std::endl;
    if (this != &obj)
        this->fixed = obj.fixed;
    return *this;
}

Fixed::~Fixed()
{
    std::cout<<"Destructor called"<<std::endl;
}


int Fixed::toInt( void ) const
{
    return (this->fixed / (1 << fractional));
}

float Fixed::toFloat( void ) const
{
    return (this->fixed / (1 << fractional));
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
    os << obj.toFloat();
    return os;
}

float Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->fixed;
}

void Fixed::setRawBits(const float raw )
{
    std::cout<<"setRawBits member function called"<<std::endl;
    this->fixed = raw;
}

    
            