#ifndef FIXED_H
#define FIXED_H
#include <iostream>
#include "cmath"

class Fixed {
    private :
        static const int    fractionalBits = 8;
        int                 fixedValue;
        
    public :
            // constructors
        Fixed();
		Fixed(const Fixed &obj);
        Fixed (const int num);
        Fixed (const float fnum);
            // distructor
		~Fixed();
            // assainement operator
        Fixed& operator=(const Fixed& other);
            // comparison operator
            bool operator==(const Fixed& other);
            bool operator!=(const Fixed& other);
            bool operator>=(const Fixed& other);
        bool operator<=(const Fixed& other);
        bool operator<(const Fixed& other);
        bool operator>(const Fixed& other);
            // arithmetic operator
        Fixed operator+(const Fixed &other) const;
        Fixed operator-(const Fixed &other) ;
        Fixed operator*(const Fixed &other);
        Fixed operator/(const Fixed &other) const;
            //  increment/decrement
        Fixed& operator++();
        Fixed& operator--();
        Fixed operator++(int);
        Fixed operator--(int);
            // setter & getter
		int getRawBits(void) const;
        void setRawBits(int const raw);
            // functions
        float   toFloat(void) const;
        int     toInt(void) const;
        //================================================
        static Fixed &min(Fixed   &a, Fixed &b);
        static Fixed &min(const Fixed& a,  const Fixed& b);

        static Fixed &max(Fixed &a, Fixed &b);
        static Fixed &max(const Fixed &a, const Fixed &b);


};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);


#endif
