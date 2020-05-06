#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <exception>
#include <iostream>

template <typename T>
class Array
{
    public:
        Array(unsigned int n) : _size(n) 
        { 
            for (unsigned int i = 0; i < n; i++)
            {
                this->_array[i] = *new T;
                this->_array[i] = 0;
            } 
        };
        Array() : _size(0) {};
        Array(const Array &src) { *this = src; };
        ~Array() {};
        Array &operator=(const Array &rhs) 
        {
            if (this != &rhs) 
            {
                this->_array = new T[rhs.size];
                for (int i = 0; i < this->_size; i++)
                    this[i] = rhs[i];
                this->_size = rhs._size;
            return *this;
            }
        };

        int size() const { return this->_size; };

        T   &operator[](unsigned int idx) 
        { 
            try
            {
                if (idx >= this->_size)
                {
                    throw ( std::exception() );
                }
            }
            catch(const std::exception& e)
            {
                std::cerr << "Error : out of bounds" << std::endl;
                exit (0);
            }
            return this->_array[idx];
        }
    private:
        unsigned int    _size;
        T               _array[];
};

#endif