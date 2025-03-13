
#include "./Factory/IFactorySensor.h"

#include <iostream>
int main()
{

    ISensor * sensor = IFactorySensor::CreateSensor("SpeedSensor");

    if(sensor)
    {
        std::cout<<"Sensor Data : " << sensor->getValue()<<std::endl;
        delete sensor ;
    }
    else 
    {
        std::cerr << "Error: Sensor type not recongnized" <<std::endl;
    }


    return 0;
}