#ifndef LOGGER_HPP
# define LOGGER_HPP

#include <iostream>

class Logger
{
private:
    void        logToConsole(std::string const &log);
    void        logToFile(std::string const &log);
    std::string makeLogEntry(std::string const &log);

    std::string _fileName;

public:
    Logger(std::string filename);
    ~Logger();
    void    log(std::string const & dest, std::string const & message);
};

#endif