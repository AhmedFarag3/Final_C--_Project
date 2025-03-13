#include"../include/RadarSensor.h"
#include<iostream>

namespace Sensors
{

        float RadarSensor::getValue() 
        {
                // Seed the random number generator using the current time
                srand(static_cast<unsigned int>(time(0)));
                return  rand() % 2 ;
        }
}