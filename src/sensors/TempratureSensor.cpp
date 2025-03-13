#include"../include/TemperatureSensor.h"
#include<iostream>

namespace Sensors
{

        float TemperatureSensor::getValue() const
        {
            return  20 + rand() % 100 ;
        }
}