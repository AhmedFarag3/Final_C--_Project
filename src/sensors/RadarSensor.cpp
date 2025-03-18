#include"../include/RadarSensor.h"
#include<iostream>

namespace Sensors
{

        float RadarSensor::getValue() 
        {
                return  50 + rand() % 400 ;
        }
}