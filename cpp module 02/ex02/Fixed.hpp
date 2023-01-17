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
        Fixed operator-(const Fixed &other) const;
        Fixed operator*(const Fixed &other) const;
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
        float toFloat(void) const;
        int toInt(void) const;
        // int& min(int &num1, int &num2);
        // int& max(int &obj1, int &obj2);
        // int& min(const int &num1, const int &num2);
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif