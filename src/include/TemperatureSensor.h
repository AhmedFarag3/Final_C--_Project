#ifndef __TEMPERATURESENSOR__H__
#define __TEMPERATURESENSOR__H__

#include<cstdint>

namespace Sensors
{
    class TemperatureSensor
    {
        public:
        float getValue() const;
    };
}

#endif  //!__TEMPERATURESENSOR__H__