
#include "./Factory/IFactorySensor.h"
#include "./Diagnostics/Diagnostics.h"
#include "./Logger/Logger.h"
#include <thread> 
#include <chrono>  

int main()
{

    srand(static_cast<unsigned int>(time(0)));

    std::unique_ptr<ISensor> sensor_1(IFactorySensor::CreateSensor("BatterySensor"));
    std::unique_ptr<ISensor> sensor_2(IFactorySensor::CreateSensor("RadarSensor"));
    std::unique_ptr<ISensor> sensor_3(IFactorySensor::CreateSensor("SpeedSensor"));
    std::unique_ptr<ISensor> sensor_4(IFactorySensor::CreateSensor("TemperatureSensor"));

    std::shared_ptr<Logger> logger (Logger::GetInstance());
    Diagnostics diag;

    if(!sensor_1 && !sensor_2 && !sensor_3 && !sensor_4)
    {
        std::cerr << "ERROR: No Valid Sensor Created" << std::endl;
        logger->log("ERROR: No Valid Sensor Created");
        return -1;
    }

while(true)
{
    if(sensor_1)
    {
        std::cout<<"Battery Sensor : " << sensor_1->getValue()<<"%"<<std::endl;
        diag.DiagnoseData("BatterySensor" , sensor_1->getValue()) ;

    }
    if(sensor_2)
    {
        std::cout<<"Radar Sensor   : " << sensor_2->getValue()<<" meter"<<std::endl;
        diag.DiagnoseData("RadarSensor" , sensor_2->getValue()) ;

    }
    if(sensor_3)
    {
        std::cout<<"Speed : " << sensor_3->getValue()<<" Km/h"<<std::endl;
        diag.DiagnoseData("SpeedSensor" , sensor_3->getValue()) ;

    }
    if(sensor_4)
    {
        std::cout<<"Temperature : " << sensor_4->getValue()<<" C"<<std::endl;
        diag.DiagnoseData("TemperatureSensor" , sensor_4->getValue()) ;

    }
    std::cout<<"---------------------------"<<std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(2)); // Delay of 2 second

}
    return 0;
}