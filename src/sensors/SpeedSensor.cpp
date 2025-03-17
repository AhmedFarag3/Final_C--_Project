#include"../include/SpeedSensor.h"
#include<iostream>

namespace Sensors
{

        float SpeedSensor::getValue() 
        {            
            return  20 + rand() % 300 ; 
        }

}