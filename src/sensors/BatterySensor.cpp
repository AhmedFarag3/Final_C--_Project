#include "../include/BatterySensor.h"

#include<iostream>

namespace Sensors
{
    float BatterySensor::getValue() 
    {
        return  20 + rand() % 80 ;
    }
}
