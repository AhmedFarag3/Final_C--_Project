#include "./include/BatterySensor.h"
#include "./include/RadarSensor.h"
#include "./include/SpeedSensor.h"
#include "./include/TemperatureSensor.h"

#include <iostream>
int main()
{

    Sensors::BatterySensor batterysensor;
    std::cout << "Battery Percentage : " << batterysensor.getValue()<<"%"<<std::endl;

    Sensors::RadarSensor radarsensor;
    std::cout << "Radar state : " << radarsensor.getValue()<<std::endl;

    Sensors::SpeedSensor speedsensor;
    std::cout << "Car Speed   : " << speedsensor.getValue()<<" km/h"<<std::endl;

    Sensors::TemperatureSensor temperaturesensor;
    std::cout << "Temperature sensor :" << temperaturesensor.getValue()<<" C"<<std::endl;

    return 0;
}