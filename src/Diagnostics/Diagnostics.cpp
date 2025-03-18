#include <iostream>
#include <sstream>

#include "./Diagnostics.h"
#include "../Logger/Logger.h"

std::shared_ptr<Logger> logger (Logger::GetInstance());

void Diagnostics::DiagnoseData(const std::string& SensorType , double SensorValue)
{
    std::string LogMessage;
    std::ostringstream Oss;

    if("BatterySensor" == SensorType && 15 >= SensorValue)
    {
        Oss << "[ALERT] Battey Too Low " << SensorValue<<"%"<<std::endl ;
        logger->log (Oss.str());
    }
    else if("RadarSensor" == SensorType && 100 >= SensorValue)
    {
        Oss << "[ALERT] Distance Too Close " << SensorValue<<std::endl;
        logger->log (Oss.str());

    }
    else if("SpeedSensor" == SensorType && 250 <= SensorValue)
    {
        Oss << "[ALERT] Speed Too Fast " << SensorValue<<std::endl;
        logger->log (Oss.str());

    }
    else if("TemperatureSensor" == SensorType && 100 <= SensorValue)
    {
        Oss << "[ALERT] Temperature Too High " << SensorValue<<std::endl;
        logger->log (Oss.str());

    }
}