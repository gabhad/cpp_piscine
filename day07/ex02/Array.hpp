#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array
{
    private:
        T   _array[];
        int _size;
    public:
        Array(unsigned int n) : _size(n) { this->_array = new T[_size]; };
        Array() : _array(), _size(0) {};
        Array(const Array &src) { *this = src };
        ~Array() { delete[] this->array };
        Array &operator=(const Array &rhs) {
            if (this != &rhs) {
                for (int i = 0; i < this->_size; i++)
                    this[i] = rhs[i];
                this->_size = rhs._size;
            return *this; }
        };

        int size() const { return this->_size };

        T &operator[](int idx) { 
            try
            {
                if (idx >= this->_size)
                    throw ( std::exception() )
                else
                    return this->_array[idx];
            }
            catch(const std::exception& e)
            {
                std::cerr << "Error : out of bounds" << std::endl;
            }
        }
};

#endif