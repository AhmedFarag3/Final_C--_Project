#ifndef __SPEEDSENSOR__H__
#define __SPEEDSENSOR__H__

#include<cstdint>

namespace Sensors
{
    class SpeedSensor
    {
        private:
            uint16_t m_Speed;
        public:
            SpeedSensor();
            void setValue(uint16_t NewSpeed);
            uint16_t getValue() const;
    };
}

#endif  //!__SPEEDSENSOR__H__