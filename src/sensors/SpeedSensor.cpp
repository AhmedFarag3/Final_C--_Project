#include"../include/SpeedSensor.h"
#include<iostream>

namespace Sensors
{

        float SpeedSensor::getValue() 
        {
            // Seed the random number generator using the current time
            srand(static_cast<unsigned int>(time(0)));
            
            return  20 + rand() % 300 ; 
        }

}