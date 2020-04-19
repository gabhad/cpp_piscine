#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>

class Fixed
{
private:
    int                 _value;

    static const int    _NB_FRAC_BITS;
    
public:
    Fixed();
    Fixed(Fixed const & src);
    ~Fixed();

    int     getRawBits(void) const;
    void    setRawBits(int const raw);

    Fixed   &operator=(Fixed const &rhs);
};

#endif