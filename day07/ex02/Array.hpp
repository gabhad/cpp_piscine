#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <stdexcept>

template <typename T>
class Array
{
    public:
        Array(unsigned int n) : _array(new T[n]), _size(n) 
        { 
            for (unsigned int i = 0; i < n; i++)
                this->_array[i] = T();
        };
        Array() : _array(NULL), _size(0) { };
        Array(const Array &src) 
        { 
            this->_size = src._size;
            this->_array = new T[this->_size];
            for (unsigned int i = 0; i < this->_size; i++)
                this->_array[i] = src._array[i];
        };
        ~Array() { delete[] this->_array; };
        Array &operator=(const Array &rhs) 
        {
            if (this != &rhs) 
            {
                this->_size = rhs._size;
                this->_array = new T[rhs.size];
                for (int i = 0; i < this->_size; i++)
                    this[i] = rhs[i];
            }
            return *this;
        };

        int size() const { return this->_size; };

        T   &operator[](unsigned int idx) 
        { 
            if (idx >= this->_size)
                throw ( std::exception() );
            return this->_array[idx];
        }
    private:
        T               *_array;
        unsigned int    _size;
};

#endif