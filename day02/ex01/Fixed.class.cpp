#include "Fixed.class.hpp"

Fixed::Fixed() : _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n) : _value(n << Fixed::_NB_FRAC_BITS)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float n) : _value(roundf(n * (1 << Fixed::_NB_FRAC_BITS)))
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
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
    std::cout << "Assignation operator called" << std::endl;
    if (this != &rhs)
        this->_value = rhs.getRawBits();
    return *this;
}

std::ostream    &operator<<(std::ostream &o, Fixed const &rhs)
{
    o << rhs.toFloat();
    return o;
}

const int   Fixed::_NB_FRAC_BITS = 8;
