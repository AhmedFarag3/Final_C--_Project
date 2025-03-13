#include "../include/BatterySensor.h"

#include<iostream>

namespace Sensors
{
    float BatterySensor::getValue() const
    {
        return  20 + rand() % 80 ;
    }
}
