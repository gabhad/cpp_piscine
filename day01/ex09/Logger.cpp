#include "Logger.hpp"

#include <fstream>

Logger::Logger(std::string filename) : _fileName(filename)
{
}

Logger::~Logger()
{
}

void        Logger::logToConsole(std::string const &log)
{
    std::cout << log;
}

void        Logger::logToFile(std::string const &log)
{
    std::ofstream   ofs;

    ofs.open(this->_fileName, std::ios_base::app);
    ofs << log; 
}

std::string Logger::makeLogEntry(std::string const &log)
{
    time_t          rawtime;
    struct tm       *timeinfo;
    char            buffer [18];
    std::string     final = log;

    time (&rawtime);
    timeinfo = localtime (&rawtime);

    strftime (buffer,18,"[%Y%m%d_%H%M%S] ",timeinfo);
    final.insert(0, buffer);
    final.append("\n");    
    return final;
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
    str = makeLogEntry(str);
    while (i < 2)
    {
        if (dest == func[i])
        {
            (this->*ptr[i])(str);
            return;
        }
        i++;
        if (i == 2)
            std::cout << "Log failed." << std::endl;
    }

}

