#include <iostream>
#include <sstream>
#include <cmath>

static bool isNumber(std::string input)
{
    double  val;
    size_t  len;

    len = input.length();
    std::istringstream  iss(input);
    iss >> std::noskipws >> val;
    if (!(iss.eof() && !iss.fail()) && len > 1 && input[len - 1] == 'f')
        return isNumber(input.substr(0, len - 1));
    return iss.eof() && !iss.fail();
}

static void handleInfNan(double val)
{
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    if (isnan(val) || (isinf(val) && std::abs(val) != val))
    {
        std::cout << "float: " << static_cast<float>(val) << std::endl;
        std::cout << "double: " << val << std::endl;
    }
    else if (isinf(val) && std::abs(val) == val)
    {
        std::cout << "float: +" << static_cast<float>(val) << std::endl;
        std::cout << "double: +" << val << std::endl;
    }
}

static void handleNumeric(std::string input)
{
    double  val = std::stod(input);

    if (isinf(val) || isnan(val))
        return handleInfNan(val);
    if (static_cast<int>(val) < 0 || static_cast<int>(val) > 127)
        std::cout << "char: impossible"<< std::endl;
    else if (val != 0 && ((val < static_cast<double>(std::numeric_limits<int>::min())) || (val > static_cast<double>(std::numeric_limits<int>::max()))))
        std::cout << "char: impossible" << std::endl;
    else if (isprint(static_cast<int>(val)))
        std::cout << "char: '" << static_cast<char>(val) << "'" << std::endl;
    else
        std::cout << "char: non displayable" << std::endl;
    if (val < static_cast<double>(std::numeric_limits<int>::min()) || val > static_cast<double>(std::numeric_limits<int>::max()))
        std::cout << "int: impossible";
    else
        std::cout << "int: " << static_cast<int>(val) << std::endl;
    float   intF, fractF = modf(static_cast<float>(val), &intF);
    if (val != 0 && (val < static_cast<double>(std::numeric_limits<float>::min()) || val > static_cast<double>(std::numeric_limits<float>::max())))
        std::cout << "float: impossible";
    else if (fractF != 0)
        std::cout << "float: " << static_cast<float>(val) << "f" << std::endl;
    else
        std::cout << "float: " << static_cast<float>(val) << ".0f" << std::endl;
    double  intD, fractD = modf(static_cast<double>(val), &intD);
    if (val != 0 && (val < static_cast<double>(std::numeric_limits<double>::min()) || val > static_cast<double>(std::numeric_limits<double>::max())))
        std::cout << "double: impossible" << std::endl;
    else if (fractD != 0)
        std::cout << "double: " << static_cast<double>(val) << std::endl;
    else
        std::cout << "double: " << static_cast<double>(val) << ".0" << std::endl;
}

static void handleChar(char c)
{
    if (c < 0 || c > 127)
        std::cout << "char: impossible" << std::endl;
    else if (!isprint(c))
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: " << static_cast<char>(c) << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float>(c) << std::endl;
    std::cout << "double: " << static_cast<double>(c) << std::endl;
}

int         main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "usage : ./convert [literal char, int, float, double]" << std::endl;
        return(0);
    }
    if (isNumber(argv[1]))
    {
        try
        {
            handleNumeric(argv[1]);
        }
        catch(const std::out_of_range& e)
        {
            std::cerr << "char: impossible" << std::endl;
            std::cerr << "int: impossible" << std::endl;
            std::cerr << "float: impossible" << std::endl;
            std::cerr << "double: impossible" << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << "char: impossible" << std::endl;
            std::cerr << "int: impossible" << std::endl;
            std::cerr << "float: impossible" << std::endl;
            std::cerr << "double: impossible" << std::endl;
        }
    }
    else if (std::strlen(argv[1]) == 1)
    {
        try
        {
            handleChar(argv[1][0]);
        }
        catch(const std::exception& e)
        {
            std::cerr << "char: impossible" << std::endl;
            std::cerr << "int: impossible" << std::endl;
            std::cerr << "float: impossible" << std::endl;
            std::cerr << "double: impossible" << std::endl;
        }
    }
    else
        std::cerr << "Invalid input." << std::endl;
    return 0;
}