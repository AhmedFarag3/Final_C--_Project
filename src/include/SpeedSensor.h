#ifndef __SPEEDSENSOR__H__
#define __SPEEDSENSOR__H__

#include "../Factory/Isensor.h"

namespace Sensors
{
    class SpeedSensor:public ISensor
    {
        public:
        float getValue() override;
    };
}

#endif  //!__SPEEDSENSOR__H__