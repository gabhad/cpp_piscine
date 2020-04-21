#include "eval_expr.hpp"

Fixed   opPlus(Fixed &lhs, Fixed &rhs)
{
    return Fixed(lhs + rhs);
}

Fixed   opMinus(Fixed &lhs, Fixed &rhs)
{
    return Fixed(lhs - rhs);
}

Fixed   opMultiply(Fixed &lhs, Fixed &rhs)
{
    return Fixed(lhs * rhs);
}

Fixed   opDivide(Fixed &lhs, Fixed &rhs)
{
    return Fixed(lhs / rhs);
}
