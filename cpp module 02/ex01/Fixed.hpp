#ifndef FIXED_H
#define FIXED_H
#include <iostream>

class Fixed {
    private :
        static const int    fractionalBits = 8;
        int                 fixedValue;
    public :
        Fixed();
		Fixed(const Fixed &obj);
        Fixed& operator=(const Fixed& other);
        Fixed (const int num); // new
        Fixed (const float fnum); // new
		~Fixed();
		int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const; // new
        int toInt(void) const; // new
};

#endif