#include"../include/RadarSensor.h"
#include<iostream>

namespace Sensors
{

        float RadarSensor::getValue() const
        {
        return  rand() % 2 ;
        }
}