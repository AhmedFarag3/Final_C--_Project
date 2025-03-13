#ifndef __TEMPERATURESENSOR__H__
#define __TEMPERATURESENSOR__H__

#include<cstdint>

namespace Sensors
{
    class TemperatureSensor
    {
        private:
        double m_Temperature;

        public:
        TemperatureSensor(double Temperature);
        void setValue(double NewTemperature);
        double getValue() const;
    };
}

#endif  //!__TEMPERATURESENSOR__H__