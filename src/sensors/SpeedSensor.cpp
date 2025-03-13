#include"../include/SpeedSensor.h"

namespace Sensors
{
        SpeedSensor::SpeedSensor(){};
        void SpeedSensor::setValue(uint16_t NewSpeed)
        {
            m_Speed = NewSpeed;
        }
        uint16_t SpeedSensor::getValue() const
        {
            return m_Speed;
        }

}