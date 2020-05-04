#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>

class Convert
{
    private:
        char    _cValue;
        int     _iValue;
        float   _fValue;
        double  _dValue;

        Convert();

    public:
        Convert(std::string);
        Convert(const Convert &);
        ~Convert();
        Convert &operator=(const Convert &);

        char    getCValue(void);
        int     getIValue(void);
        float   getFValue(void);
        double  getDValue(void);
        void    setCValue(char);
        void    setIValue(int);
        void    setVValue(float);
        void    setDValue(double);

        void    castChar(double);
        void    castInt(double);
        void    castFloat(double);

        void    printValues();
};

#endif