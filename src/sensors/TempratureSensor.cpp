#include"../include/TemperatureSensor.h"

namespace Sensors
{
        TemperatureSensor::TemperatureSensor(double Temperature):m_Temperature(Temperature){};
        void TemperatureSensor::setValue(double NewTemperature)
        {
            m_Temperature = NewTemperature;
        }
        double TemperatureSensor::getValue() const
        {
            return m_Temperature;
        }
}