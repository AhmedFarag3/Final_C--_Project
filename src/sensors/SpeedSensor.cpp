#include"../include/SpeedSensor.h"
#include<iostream>

namespace Sensors
{

        float SpeedSensor::getValue() const
        {
            return  20 + rand() % 300 ; 
        }

}