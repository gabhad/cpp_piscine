#include "Fixed.class.hpp"

Fixed::Fixed() : _value(0)
{
}

Fixed::Fixed(const int n) : _value(n << Fixed::_NB_FRAC_BITS)
{
}

Fixed::Fixed(const float n) : _value(roundf(n * (1 << Fixed::_NB_FRAC_BITS)))
{
}

Fixed::Fixed(Fixed const & src)
{
    *this = src;
}

Fixed::~Fixed()
{
}

int     Fixed::getRawBits(void) const
{
    return this->_value;
}

void    Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}

float   Fixed::toFloat(void) const
{
    return float(this->_value) / (1 << Fixed::_NB_FRAC_BITS);
}

int     Fixed::toInt(void) const
{
    int     nb;
    
    nb = this->_value >> Fixed::_NB_FRAC_BITS;
    return nb;
}
    
Fixed   &Fixed::operator=(Fixed const &rhs)
{
    if (this != &rhs)
        this->_value = rhs.getRawBits();
    return *this;
}

int             Fixed::operator>(Fixed const &rhs) const
{
    if (this->_value > rhs._value)
        return 1;
    return 0;
}

int             Fixed::operator<(Fixed const &rhs) const
{
    if (this->_value < rhs._value)
        return 1;
    return 0;
}

int             Fixed::operator>=(Fixed const &rhs) const
{
    if (this->_value >= rhs._value)
        return 1;
    return 0;
}

int             Fixed::operator<=(Fixed const &rhs) const
{
    if (this->_value <= rhs._value)
        return 1;
    return 0;
}

int             Fixed::operator==(Fixed const &rhs) const
{
    if (this->_value == rhs._value)
        return 1;
    return 0;
}

int             Fixed::operator!=(Fixed const &rhs) const
{
    if (this->_value != rhs._value)
        return 1;
    return 0;
}

Fixed           Fixed::operator+(Fixed const &rhs) const
{
    return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed           Fixed::operator-(Fixed const &rhs) const
{
    return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed           Fixed::operator*(Fixed const &rhs) const
{
    return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed           Fixed::operator/(Fixed const &rhs) const
{
    return Fixed(this->toFloat() / rhs.toFloat());
}

Fixed           &Fixed::operator++(void)
{
    this->_value += 1;
    return *this;
}

Fixed           &Fixed::operator--(void)
{
    this->_value -= 1;
    return *this;

}

Fixed           Fixed::operator++(int i)
{
    Fixed   copy = *this;
    (void)i;
    this->_value +=1;
    return copy;
}

Fixed           Fixed::operator--(int i)
{
    Fixed   copy = *this;
    (void)i;
    this->_value -= 1;
    return copy;
}

std::ostream    &operator<<(std::ostream &o, Fixed const &rhs)
{
    o << rhs.toFloat();
    return o;
}

Fixed           &Fixed::min(Fixed &lhs, Fixed &rhs)
{
    if (lhs <= rhs)
        return lhs;
    return rhs;
}

Fixed const     &Fixed::min(Fixed const &lhs, Fixed const &rhs)
{
    if (lhs <= rhs)
        return lhs;
    return rhs; 
}

Fixed           &Fixed::max(Fixed &lhs, Fixed &rhs)
{
    if (lhs >= rhs)
        return lhs;
    return rhs;
}

Fixed const     &Fixed::max(Fixed const &lhs, Fixed const &rhs)
{
    if (lhs >= rhs)
        return lhs;
    return rhs;
}


const int   Fixed::_NB_FRAC_BITS = 8;
