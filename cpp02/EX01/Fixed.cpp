/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 01:39:30 by hben-laz          #+#    #+#             */
/*   Updated: 2024/11/24 19:22:16 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"


int const Fixed::fractional = 8;

Fixed::Fixed()
{ 
    std::cout<<"Default constructor called"<<std::endl;
    this->rawBits = 1234.43;
}


Fixed::Fixed(const int  a)
{ 
    std::cout<<"Int constructor called"<<std::endl;
    this->rawBits = a << fractional;
}

Fixed::Fixed(const float a)
{
    std::cout<<"Float constructor called"<<std::endl;
    
    this->rawBits = a * (1 << fractional);
}


Fixed::Fixed(const Fixed& copy) 
{
     std::cout<<"Copy constructor called"<<std::endl;

        this->rawBits = copy.rawBits;
}


Fixed& Fixed::operator=(const Fixed& copy)
{
    std::cout<<"Copy assignment operator called"<<std::endl;
    if (this != &copy)
        this->rawBits = copy.rawBits;
    return (*this);
}

Fixed::~Fixed()
{
    std::cout<<"Destructor called"<<std::endl;
}

int Fixed::toInt( void ) const
{
    // std::cout<<"getRawBits member function called"<<std::endl;
    return (this->rawBits / (1 << 8));
}


float Fixed::toFloat( void ) const
{
    // std::cout<<"getRawBits member function called"<<std::endl;
    return (this->rawBits / (1 << 8));
}


std::ostream& operator<<(std::ostream& out, const Fixed& obj)
{
    // std::cout<<obj.toFloat();
    out << obj.toFloat();
    return out;
}