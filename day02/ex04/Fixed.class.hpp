#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int                 _value;

    static const int    _NB_FRAC_BITS;
    
public:
    Fixed();
    Fixed(const int n);
    Fixed(const float n);
    Fixed(Fixed const & src);
    ~Fixed();

    int                 getRawBits(void) const;
    void                setRawBits(int const raw);
    float               toFloat(void) const;
    int                 toInt(void) const;

    // Assignation operator
    Fixed               &operator=(Fixed const &rhs);
    
    // Comparison operators
    int                 operator>(Fixed const &rhs) const;
    int                 operator<(Fixed const &rhs) const;
    int                 operator>=(Fixed const &rhs) const;
    int                 operator<=(Fixed const &rhs) const;
    int                 operator==(Fixed const &rhs) const;
    int                 operator!=(Fixed const &rhs) const;
    
    // Arithmetic operators
    Fixed               operator+(Fixed const &rhs) const;
    Fixed               operator-(Fixed const &rhs) const;
    Fixed               operator*(Fixed const &rhs) const;
    Fixed               operator/(Fixed const &rhs) const;
    
    // Increment operators
    Fixed               &operator++(void); // Prefix
    Fixed               &operator--(void); // Prefix
    Fixed               operator++(int i); // Postfix
    Fixed               operator--(int i); // Postfix
    
    //Maxmin functions
    static Fixed        &min(Fixed &lhs, Fixed &rhs);
    static Fixed const  &min(Fixed const &lhs, Fixed const &rhs);
    static Fixed        &max(Fixed &lhs, Fixed &rhs);
    static Fixed const  &max(Fixed const &lhs, Fixed const &rhs);
};

std::ostream            &operator<<(std::ostream &o, Fixed const &rhs);

#endif