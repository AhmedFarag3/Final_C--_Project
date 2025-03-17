#include"../include/TemperatureSensor.h"
#include<iostream>

namespace Sensors
{

        float TemperatureSensor::getValue() 
        {            
            return  20 + rand() % 100 ;
        }
}