/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 21:54:53 by hben-laz          #+#    #+#             */
/*   Updated: 2024/11/28 00:56:06 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


int const Fixed::fractional = 8;

Fixed::Fixed()
{
    // std::cout<<"Default constructor called"<<std::endl;
    this->fixed = 1234.43;
}

Fixed::Fixed(const int i)
{
    // std::cout<<"Int constructor called"<<std::endl;
    this->fixed = i << fractional;
}

Fixed::Fixed(const float f)
{
    // std::cout<<"Float constructor called"<<std::endl;
    this->fixed = f * (1 << fractional);
}

Fixed::Fixed(const Fixed& obj)
{
    // std::cout<<"Copy constructor called"<<std::endl;
    if (this != &obj)
        this->fixed = obj.fixed;
}

Fixed& Fixed::operator=(const Fixed& obj)
{
    // std::cout<<"Copy assignment operator called"<<std::endl;
    if (this != &obj)
        this->fixed = obj.fixed;
    return *this;
}

Fixed::~Fixed()
{
    // std::cout<<"Destructor called"<<std::endl;
}


int Fixed::toInt( void ) const
{
    return (this->fixed / (1 << fractional));
}

float Fixed::toFloat( void ) const
{
    return (this->fixed / (1 << 8));
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
    os << obj.toFloat();
    return os;
}

//----------        > < >= <= == !=   -------------------------------

bool Fixed::operator>(const Fixed& obj) const
{
    if (this->fixed > obj.fixed)
        return true;
    return false;
}

bool Fixed::operator<(const Fixed& obj) const
{
    if (this->fixed < obj.fixed)
        return true;
    return false;
}

bool Fixed::operator>=(const Fixed& obj) const
{
    if (this->fixed >= obj.fixed)
        return true;
    return false;
}

bool Fixed::operator<=(const Fixed& obj) const
{
    if (this->fixed <= obj.fixed)
        return true;
    return false;
}

bool Fixed::operator==(const Fixed& obj) const
{
    // if (this->fixed == obj.fixed)
    //     return true;
    // return false;
    return (this->fixed == obj.fixed);
}

bool Fixed::operator!=(const Fixed& obj) const
{
    if (this->fixed != obj.fixed)
        return true;
    return false;
}

//-------------      +  -  *  /    --------------------------------





Fixed Fixed::operator+(const Fixed& obj) const
{
    Fixed *res = new Fixed();

    res->fixed = this->fixed + obj.fixed;
    return *res;
}


Fixed Fixed::operator-(const Fixed& obj) const
{
     Fixed *res = new Fixed();
    
    res->fixed = this->fixed - obj.fixed;
    return *res;
}

Fixed Fixed::operator*(const Fixed& obj) const
{
     Fixed res;
    
    res.fixed = (this->fixed  * obj.fixed);
    return res;
}

Fixed Fixed::operator/(const Fixed& obj) const
{
     Fixed *res = new Fixed();
    
    res->fixed = this->fixed / obj.fixed;
    return *res;
}

            