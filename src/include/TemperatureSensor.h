#ifndef __TEMPERATURESENSOR__H__
#define __TEMPERATURESENSOR__H__

#include "../Factory/Isensor.h"

namespace Sensors
{
    class TemperatureSensor: public ISensor
    {
        public:
        float getValue() override;
    };
}

#endif  //!__TEMPERATURESENSOR__H__