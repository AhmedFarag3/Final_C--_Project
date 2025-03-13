#include "../include/BatterySensor.h"

#include<iostream>

namespace Sensors
{
    BatterySensor::BatterySensor(u_int8_t BatteryPercentage):m_BatteryPercentage(BatteryPercentage){};

    void BatterySensor::setValue(u_int8_t newValue)
    {
        m_BatteryPercentage = newValue;
    }
    double BatterySensor::getValue() const
    {
        return m_BatteryPercentage;
    }
}
