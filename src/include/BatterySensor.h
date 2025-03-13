#ifndef __BATTERYSENSOR__H__
#define __BATTERYSENSOR__H__
#include <cstdint>

namespace Sensors
{   
    class BatterySensor{

        private:
            uint8_t m_BatteryPercentage;
        public:
            BatterySensor(uint8_t BatteryPercentage);
            void setValue(uint8_t NewBatteryPercentage);
            double getValue() const;

    };

}

#endif  //!__BATTERYSENSOR__H__
