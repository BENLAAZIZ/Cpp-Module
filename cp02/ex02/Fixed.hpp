#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed 
{
    private :
         float fixed;
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


         bool operator>(const Fixed& obj) const;
         bool operator<(const Fixed& obj) const;
         bool operator>=(const Fixed& obj) const;
         bool operator<=(const Fixed& obj) const;
         bool operator==(const Fixed& obj) const;
         bool operator!=(const Fixed& obj) const;

         Fixed operator+(const Fixed& obj) const;
         Fixed operator-(const Fixed& obj) const;
         Fixed operator*(const Fixed& obj) const;
         Fixed operator/(const Fixed& obj) const;


};
     //     int getRawBits( void ) const;
     //     void setRawBits( float const raw );

std::ostream& operator<<(std::ostream& os, const Fixed& obj);
#endif