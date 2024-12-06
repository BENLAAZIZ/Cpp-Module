#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

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

         Fixed& operator++();
         Fixed operator++(int);

          Fixed& operator--();
          Fixed operator--(int);

          static Fixed& min(Fixed& obj1, Fixed& obj2);
          static const Fixed& min(const Fixed& obj1, const Fixed& obj2);

          static Fixed& max(Fixed& obj1, Fixed& obj2);
          static const Fixed& max(const Fixed& obj1, const Fixed& obj2);
};
     //     int getRawBits( void ) const;
     //     void setRawBits( float const raw );

std::ostream& operator<<(std::ostream& os, const Fixed& obj);
#endif