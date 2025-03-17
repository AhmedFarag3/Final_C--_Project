#ifndef __LOGGER__H__
#define __LOGGER__H__

#include<iostream>
#include<fstream>
#include<string>
#include<memory>

class Logger
{
    public:

        Logger();

        static std::shared_ptr<Logger> GetInstance ();
        
        void log(const std::string& message);

        ~Logger();

    private:
        std::ofstream logFile ; //Output file stream 

        // Private copy constructor and assignment operator to prevent copying
        Logger(const Logger&) = delete;
        Logger& operator=(const Logger&) = delete;

        static std::shared_ptr<Logger> Instance ;
};

#endif  //!__LOGGER__H__