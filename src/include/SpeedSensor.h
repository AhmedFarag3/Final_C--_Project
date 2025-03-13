#ifndef __SPEEDSENSOR__H__
#define __SPEEDSENSOR__H__

#include<cstdint>

namespace Sensors
{
    class SpeedSensor
    {
        public:
        float getValue() const;
    };
}

#endif  //!__SPEEDSENSOR__H__