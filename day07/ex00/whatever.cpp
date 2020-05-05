#include <iostream>

template < typename T >
void    swap(T &x, T &y){
    T   temp;
    temp = x;
    x = y;
    y = temp;
}

template < typename T >
T const &max(T const & x, T const & y) { return ((x>=y) ? x : y);}

template < typename T >
T const &min(T const & x, T const & y) { return ((x<=y) ? x : y);}


//*******************************************************//

int main(void)
{
    int x = 5;
    int y = 0;
    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;
    swap(x, y);
    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;
    std::cout << "max(x,y) = " << max(x,y) << std::endl;
    std::cout << "min(x,y) = " << min(x,y) << std::endl;
    return 0;
}