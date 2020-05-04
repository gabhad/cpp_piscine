#include "Convert.hpp"

Convert::Convert(std::string s)
{
    double dValue = std::stod(s);
    this->_dValue = dValue;
    this->castChar(dValue);
    this->castInt(dValue);
    this->castFloat(dValue);
  //  this->printValues();
}

Convert::Convert(const Convert & src)
{
    *this = src;
}

Convert::~Convert()
{
}

Convert &Convert::operator=(const Convert & rhs)
{
    if (this != &rhs)
    {
        this->_cValue = rhs._cValue;
        this->_iValue = rhs._iValue;
        this->_fValue = rhs._fValue;
        this->_dValue = rhs._dValue;
    }
    return *this;
}

char    Convert::getCValue(void)
{
    return this->_cValue;
}

int     Convert::getIValue(void)
{
    return this->_iValue;
}

float   Convert::getFValue(void)
{
    return this->_fValue;
}

double  Convert::getDValue(void)
{
    return this->_dValue;
}

void    Convert::setCValue(char c)
{
    this->_cValue = c;
}

void    Convert::setIValue(int i)
{
    this->_iValue = i;
}

void    Convert::setVValue(float f)
{
    this->_fValue = f;
}

void    Convert::setDValue(double d)
{
    this->_dValue = d;
}

void    Convert::castChar(double d)
{
    this->_cValue = static_cast<char>(d);
    std::cout << "cvalue = " << this->_cValue << std::endl;
}
void    Convert::castInt(double d)
{
    this->_iValue = static_cast<int>(d);
    std::cout << "ivalue = " << this->_iValue << std::endl;
}
void    Convert::castFloat(double d)
{
    this->_fValue = static_cast<float>(d);
    std::cout << "fvalue = " << this->_fValue << std::endl;
}
void    Convert::printValues(void)
{
    std::cout << "char : " << this->_cValue << std::endl;
    std::cout << "int : " << this->_iValue << std::endl;
    std::cout << "float : " << this->_fValue << std::endl;
    std::cout << "double : " << this->_dValue << std::endl;
}
