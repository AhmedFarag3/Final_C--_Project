#ifndef __RADARSENSOR__H__
#define __RADARSENSOR__H__

#include "../Factory/Isensor.h"

namespace Sensors
{
    

    class RadarSensor:public ISensor
    {
        public:
        float getValue() override;
    };
}

#endif  //!__RADARSENSOR__H__