#include "Logger.hpp"

int     main(void)
{
    Logger  logger("toto.txt");

    logger.log("logToConsole", "Pouet");
    logger.log("logToFile", "Kiki");
    logger.log("logToConsole", "Toto");
    logger.log("logToFile", "Apruzesse");

    
    return 0;
}