#include "Logger.hpp"

Logger::Logger(std::string filename) : _fileName(filename)
{
}

Logger::~Logger()
{
}

void        Logger::logToConsole(std::string const &log)
{
    std::cout << log << std::endl;
}

void        Logger::logToFile(std::string const &log)
{
    std::cout << log << std::endl;
}

std::string Logger::makeLogEntry(std::string const &log)
{
    return log;
}

void        Logger::log(std::string const & dest, std::string const & message)
{
    void        (Logger::*ptr[])(std::string const &) = {
                    &Logger::logToConsole,
                    &Logger::logToFile };
    std::string func[2] = {
                    "logToConsole",
                    "logToFile" };
    int         i = 0;
    std::string str = message;
    makeLogEntry(str);
    while (i < 2)
    {
        if (dest == func[i])
        {
            (this->*ptr[i])(message);
            return;
        }
        i++;
        if (i == 2)
            std::cout << "Log failed." << std::endl;
    }

}

