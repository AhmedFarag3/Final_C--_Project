#include "./include/BatterySensor.h"
#include "./include/RadarSensor.h"
#include "./include/SpeedSensor.h"
#include "./include/TemperatureSensor.h"

#include <iostream>
int main()
{

    Sensors::TemperatureSensor temperaturesensor(50.9);
    std::cout<<temperaturesensor.getValue()<<std::endl;
    temperaturesensor.setValue(20);
    std::cout<<temperaturesensor.getValue()<<std::endl;

    return 0;
}