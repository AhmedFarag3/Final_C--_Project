#include"../include/RadarSensor.h"
#include<iostream>

namespace Sensors
{

        float RadarSensor::getValue() 
        {
                return  rand() % 2 ;
        }
}