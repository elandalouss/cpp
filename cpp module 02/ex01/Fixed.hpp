#ifndef FIXED_H
#define FIXED_H
#include <iostream>
#include "cmath"

class Fixed {
    private :
        static const int    fractionalBits = 8;
        int                 fixedValue;
    public :
        Fixed();
		Fixed(const Fixed &obj);
        Fixed& operator=(const Fixed& other);
        Fixed (const int num);
        Fixed (const float fnum);
		~Fixed();
		int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif