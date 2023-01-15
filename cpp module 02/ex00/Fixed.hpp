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
		~Fixed();
		int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif