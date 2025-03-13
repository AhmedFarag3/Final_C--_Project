#include"IFactorySensor.h"


ISensor* IFactorySensor::CreateSensor(const std::string& SensorType)
{
   if(SensorType == "BatterySensor")
   {
        return new Sensors::BatterySensor();
   }
   else if (SensorType == "RadarSensor")
   {
        return new Sensors::RadarSensor();
   }
   else if (SensorType == "SpeedSensor")
   {
        return new Sensors::SpeedSensor();
   }
   else if (SensorType == "TemperatureSensor")
   {
        return new Sensors::TemperatureSensor();
   }
   else 
    {
        return nullptr;
    }    
}
