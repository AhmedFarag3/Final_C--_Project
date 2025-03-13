#ifndef __IFACTORYSENSOR__H__
#define __IFACTORYSENSOR__H__
#include<iostream>

#include "Isensor.h"

#include "../include/BatterySensor.h"
#include "../include/RadarSensor.h"
#include "../include/SpeedSensor.h"
#include "../include/TemperatureSensor.h"


    class IFactorySensor
    {
        public:
        static ISensor* CreateSensor(const std::string& SensorType);
    };



#endif  //!__IFACTORYSENSOR__H__


