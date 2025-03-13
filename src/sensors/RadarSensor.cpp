#include"../include/RadarSensor.h"

namespace Sensors
{
        RadarSensor::RadarSensor(bool RadarState) : m_RadarState(RadarState){};

        void RadarSensor::setValue(bool NewRadarState)
        {
            m_RadarState = NewRadarState;
        }
        bool RadarSensor::getValue() const
        {
            return m_RadarState;
        }
}