#include "./Logger.h"


// Instance was only defined , no memory allocation is done yet
std::shared_ptr<Logger> Logger::Instance = nullptr;

Logger::Logger(){

    Logger::logFile.open("log.txt" , std::ios::out | std::ios::app); //open file in append mode
    if(!Logger::logFile)
    {
        std::cerr<<"Failed to open log file !" <<std::endl;
    }
};

void Logger::log(const std::string& message)
{
    if(logFile.is_open())
    {
        logFile << message << std::endl;
    }
    else
    {
        std::cerr <<"Log file is not opened !" << std::endl;
    }
}

// Need to be created after the allocation of memory to Instance object
std::shared_ptr<Logger> Logger::GetInstance ()
{
    if( Instance == nullptr)
    {
        //Creating instace of the class 
        Instance = std::make_shared<Logger>();
        std::cout <<"First instance of Logger Created"<<std::endl;
        return Instance;
    }
    else
    {
        return Instance;
    }
}

Logger::~Logger()
{
    if (logFile.is_open())
    {
        logFile.close();
    }
}




