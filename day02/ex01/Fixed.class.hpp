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

    int             getRawBits(void) const;
    void            setRawBits(int const raw);
    float           toFloat(void) const;
    int             toInt(void) const;

    Fixed           &operator=(Fixed const &rhs);
};

std::ostream    &operator<<(std::ostream &o, Fixed const &rhs);

#endif